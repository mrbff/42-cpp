#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
//    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) : _value(n << _fractionalBits)
{
//    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n) : _value(roundf(n * (1 << _fractionalBits)))
{
//    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & ref) : _value(ref._value) 
{
//    std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
//    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    
    if (this != &fixed)
        _value = fixed._value;
    return (*this);
}

int Fixed::getRawBits( void ) const
{
//    std::cout << "getRawBits member function called" << std::endl;
    return (_value);
}

void Fixed::setRawBits(int const raw)
{
//    std::cout << "setRawBits member function called" << std::endl;
    _value = raw;
}

float Fixed::toFloat(void) const
{
    return (static_cast<float>(_value) / (1 << _fractionalBits));
}

int Fixed::toInt(void) const
{
    return (_value >> _fractionalBits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}