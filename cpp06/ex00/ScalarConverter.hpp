#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>

class ScalarConverter
{
    public:
        ~ScalarConverter();
        
        static void     convert(const std::string str);
        
        static char     getChar();
        static int      getInt();
        static float    getFloat();
        static double   getDouble();
        
        static void     printChar();
        static void     printInt();
        static void     printFloat();
        static void     printDouble();
        static void     printAll();

        class ConverterException : public std::exception
        {
            virtual const char* what() const throw() 
                {
                    return "Unknown type";
                }
        };
    
    private:
        static std::string  _str;
        static char         _c;
        static int          _i;
        static float        _f;
        static double       _d;
        static bool         _impossible;

        static void _fromChar(std::string str);
        static void _fromInt(std::string str);
        static void _fromFloat(std::string str);
        static void _fromDouble(std::string str);
        // Disallow creating an instance of this object
        ScalarConverter();
};

#endif