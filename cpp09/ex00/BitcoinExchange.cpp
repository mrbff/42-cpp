#include "BitcoinExchange.hpp"

std::map<std::string, float> parseDatabase(const std::string& filename)
{
    std::map<std::string, float> exchangeRates;
    std::ifstream file(filename.c_str());
    std::string line;

    if (!file)
    {
        std::cerr << "Error: could not open database file." << std::endl;
        return exchangeRates;
    }
    
    while (std::getline(file, line))
    {
        std::istringstream iss(line);
        std::string date;
        std::string rate;
        
        if (std::getline(iss, date, ',') && std::getline(iss, rate))
            exchangeRates[date] = atof(rate.c_str());
    }
    
    file.close();
    return exchangeRates;
}


void processInputFile(const std::string& filename, const std::map<std::string, float>& exchangeRates)
{
    std::ifstream file(filename.c_str());
    std::string line;

    if (!file)
    {
        std::cout << "Error: could not open input file." << std::endl;
        return;
    }
    
    std::getline(file, line);
    while (std::getline(file, line))
    {
        std::istringstream iss(line);
        std::string date;
        std::string value;
        
        if (std::getline(iss, date, '|') && std::getline(iss, value)) {
            float floatValue;
           
            try {
                floatValue = atof(value.c_str());
                if (floatValue < 0)
                    std::cout << "Error: not a positive number." << std::endl;
                else if (floatValue > 1000)
                    std::cout << "Error: too large a number." << std::endl;
            } catch (...) { continue; }
        
            if (floatValue < 0 || floatValue > 1000)
                continue;

            std::map<std::string, float>::const_iterator it = exchangeRates.find(date);
            if (it == exchangeRates.end())
            {
                // If date not found, find the closest lower date
                std::map<std::string, float>::const_iterator lower = exchangeRates.lower_bound(date);
                
                if (lower != exchangeRates.begin())
                {
                    // If lower date exists, use it
                    --lower;
                    std::cout << date << " => " << floatValue << " = " << std::floor(floatValue * lower->second * 100) / 100 << std::endl;
                }
                else
                    std::cerr << "Error: no exchange rate found for date " << date << "." << std::endl;
            }
            else
                std::cout << date << " => " << floatValue << " = " << std::floor(floatValue * it->second * 100) / 100 << std::endl;
        }
        else
            std::cout << "Error: bad input => " << line << std::endl;
    }
    
    file.close();
}


/*struct tm tm;   
std::string s("2015-11-123");
if (strptime(s.c_str(), "%Y-%m-%d", &tm))
    std::cout << "Validate date" << std::endl;
else
    std::cout << "Invalid date" << std::endl;

bool isleapyear(unsigned short year){
    return (!(year%4) && (year%100) || !(year%400));
}

//1 valid, 0 invalid
bool valid_date(unsigned short year,unsigned short month,unsigned short day){
    unsigned short monthlen[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if (!year || !month || !day || month>12)
        return 0;
    if (isleapyear(year) && month==2)
        monthlen[1]++;
    if (day>monthlen[month-1])
        return 0;
    return 1;
}*/
