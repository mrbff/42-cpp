#include "ScalarConverter.hpp"
#include <cstdlib>
#include <math.h>
#include <limits.h>
#include <sstream>
#include <string>

static bool    isChar(const std::string str)
{
    return str.length() == 1 && std::isalpha(str[0]);
}

static bool    isInt(const std::string str)
{
    try
    {
        std::stoi(str);
    }
    catch(...)
    {
        return false;
    }
    return true;
}

static bool    isFloat (const std::string str)
{
    try
    {
        std::stof(str);
    }
    catch(...)
    {
        return false;
    }
    return true;
}

static bool isDouble(const std::string str)
{
    try
    {
        std::stod(str);
    }
    catch(...)
    {
        return false;
    }
    return true;
}

ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}

std::string  ScalarConverter::_str;
char         ScalarConverter::_c;
int          ScalarConverter::_i;
float        ScalarConverter::_f;
double       ScalarConverter::_d;
bool         ScalarConverter::_impossible;

void ScalarConverter::convert(const std::string str)
{
    if (isChar(str))
        _fromChar(str);
    else if (isInt(str))
        _fromInt(str);
    else if (isFloat(str))
        _fromFloat(str);
    else if (isDouble(str))
        _fromDouble(str);
    else
        throw ScalarConverter::ConverterException();
}

void ScalarConverter::_fromChar(std::string str)
{
    _str = str;
    _c = str[0];
    _i = static_cast<int>(_c);
    _f = static_cast<float>(_c);
    _d = static_cast<double>(_c);
}

void ScalarConverter::_fromInt(std::string str)
{
    _str = str;
    _i = std::stoi(str);
    _f = static_cast<float>(_i);
    _d = static_cast<double>(_i);
    _c = static_cast<char>(_i);
}

void ScalarConverter::_fromFloat(std::string str)
{
    _str = str;
    _f = std::stof(str);
    _i = static_cast<int>(_f);
    _d = static_cast<double>(_f);
    _c = static_cast<char>(_f);
}

void ScalarConverter::_fromDouble(std::string str)
{
    _str = str;
    _d = std::stod(str);
    _i = static_cast<int>(_d);
    _f = static_cast<float>(_d);
    _c = static_cast<char>(_d);
}

char ScalarConverter::getChar()
{
    return _c;
}

int ScalarConverter::getInt()
{
    return _i;
}

float ScalarConverter::getFloat()
{
    return _f;
}

double ScalarConverter::getDouble()
{
    return _d;
}


void ScalarConverter::printChar()
{
    if (( _str.compare( "nan" ) == 0 ) || ( _str.compare( "nanf" ) == 0 )
        || ( _str.compare( "+inf" ) == 0 ) || ( _str.compare( "+inff" ) == 0 ) 
        || ( _str.compare( "-inf" ) == 0 ) || ( _str.compare( "-inff" ) == 0 ) 
        || ( _str.compare( "-inff" ) == 0 ) || ( _str.compare( "-inff" ) == 0 )  
        || ( _str.compare( "+inff" ) == 0 ) || ( _str.compare( "+inff" ) == 0 ) )
    {
        std::cout << "Impossible";
    }
    else if (!std::isprint(_c))
        std::cout << "Not displayable";
    else
        std::cout << "'" << _c << "'";
    std::cout << std::endl;
}

void ScalarConverter::printInt()
{
    if (( _str.compare( "nan" ) == 0 ) || ( _str.compare( "nanf" ) == 0 )
        || ( _str.compare( "+inf" ) == 0 ) || ( _str.compare( "+inff" ) == 0 ) 
        || ( _str.compare( "-inf" ) == 0 ) || ( _str.compare( "-inff" ) == 0 ) 
        || ( _str.compare( "-inff" ) == 0 ) || ( _str.compare( "-inff" ) == 0 )  
        || ( _str.compare( "+inff" ) == 0 ) || ( _str.compare( "+inff" ) == 0 ) )
    {
        std::cout << "Impossible";
    }
    else
        std::cout << _i;
    std::cout << std::endl;
}

void ScalarConverter::printFloat()
{
    if ( _str.compare( "nan" ) == 0 || _str.compare( "nanf" ) == 0 ) {
        std::cout << "nanf";
    } else if ( _str.compare( "+inff" ) == 0 || _str.compare( "+inf" ) == 0 ) {
        std::cout << "+inff";
    } else if ( _str.compare( "-inff" ) == 0 || _str.compare( "-inf" ) == 0 ) {
        std::cout << "-inff";
    } else if (_impossible) {
        std::cout << "Impossible";
    } else {
        if ( _f - static_cast<int>(_f) == 0 ) {
            std::cout << _f << ".0f";
        } else {
            std::cout << _f << "f";
        }
    }
    std::cout << std::endl;
}

void ScalarConverter::printDouble()
{
    if ( _str.compare( "nan" ) == 0 || _str.compare( "nanf" ) == 0 ) {
        std::cout << "nan";
    } else if ( _str.compare( "+inff" ) == 0 || _str.compare( "+inf" ) == 0 ) {
        std::cout << "+inf";
    } else if ( _str.compare( "-inff" ) == 0 || _str.compare( "-inf" ) == 0 ) {
        std::cout << "-inf";
    } else if ( _impossible ) {
        std::cout << "Impossible";
    } else {
        if ( _d - static_cast<int> ( _d ) == 0 ) {
            std::cout << _d << ".0";
        } else {
            std::cout << _d;
        }
    }
    std::cout << std::endl;
}

void ScalarConverter::printAll()
{
    std::cout << "Char: ";
    printChar();
    std::cout << "Int: ";
    printInt();
    std::cout << "Float: ";
    printFloat();
    std::cout << "Double: ";
    printDouble();
}