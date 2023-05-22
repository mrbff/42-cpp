#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>

class ScalarConverter
{
    public:
        ~ScalarConverter();
        static void convert(std::string str);

        class ConverterException : public std::exception
        {
            virtual const char* what() const throw() 
                {
                    return "Unknown type";
                }
        };
    
    private:
        // Disallow creating an instance of this object
        ScalarConverter();
};

std::ostream&  operator<<( std::ostream& os, const ScalarConverter& ref);

#endif