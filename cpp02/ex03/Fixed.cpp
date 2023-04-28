#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0) {}

Fixed::Fixed(const int n) : _value(n << _fractionalBits) {}

Fixed::Fixed(const float n) : _value(roundf(n * (1 << _fractionalBits))) {}

Fixed::Fixed(Fixed const & ref) : _value(ref._value) {}

Fixed::~Fixed(void) {}

Fixed& Fixed::operator=(const Fixed& fixed)
{    
    if (this != &fixed)
        _value = fixed._value;
    return (*this);
}

int Fixed::getRawBits( void ) const
{
    return (_value);
}

void Fixed::setRawBits(int const raw)
{
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

bool Fixed::operator>(const Fixed &other) const
{
    return _value > other._value;
}

bool Fixed::operator<(const Fixed &other) const
{
    return _value < other._value;
}

bool Fixed::operator>=(const Fixed &other) const
{
    return _value >= other._value;
}

bool Fixed::operator<=(const Fixed &other) const
{
    return _value <= other._value;
}

bool Fixed::operator==(const Fixed &other) const
{
    return _value == other._value;
}

bool Fixed::operator!=(const Fixed &other) const
{
    return _value != other._value;
}

Fixed Fixed::operator+(const Fixed &other) const
{
    Fixed result;
    result._value = _value + other._value;
    return result;
}

Fixed Fixed::operator-(const Fixed &other) const
{
    Fixed result;
    result._value = _value - other._value;
    return result;
}

Fixed Fixed::operator*(const Fixed &other) const
{
    Fixed result;
    result._value = (_value * other._value) >> _fractionalBits;
    return result;
}

Fixed Fixed::operator/(const Fixed &other) const
{
    Fixed result;
    result._value = (_value << _fractionalBits) / other._value;
    return result;
}

Fixed &Fixed::operator++()
{
    _value++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed old(*this);
    ++(*this);
    return old;
}

Fixed& Fixed::operator--()
{
    _value--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed old(*this);
    --(*this);
    return old;
}

Fixed & Fixed::min(Fixed &a, Fixed &b)
{
    return (a._value < b._value) ? a : b;
}

const Fixed & Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a._value < b._value) ? a : b;
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
    return (a._value > b._value) ? a : b;
}

const Fixed & Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a._value > b._value) ? a : b;
}