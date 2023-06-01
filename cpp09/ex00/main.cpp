#include "BitcoinExchange.hpp"

int main(int argc, char* argv[]) {
    if (argc < 2)
    {
        std::cout << "Usage: ./btc <input_file>" << std::endl;
        return 1;
    }
    
    std::map<std::string, float> exchangeRates = parseDatabase("data.csv");
    
    if (exchangeRates.empty())
    {
        std::cout << "Error: unable to process input without exchange rate data." << std::endl;
        return 2;
    }

    processInputFile(argv[1], exchangeRates);
    
    return 0;
}
