#include "ScalarConverter.hpp"

std::ostream&  operator<<( std::ostream& os, const ScalarConverter& ref)
{
    os << "char: "; ref.printChar();
    os << "int: "; ref.printInt();
    os << "float: "; ref.printFloat();
    os << "double: "; ref.printDouble();
    return os;
}