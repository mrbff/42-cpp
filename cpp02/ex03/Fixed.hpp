#pragma once
#include <iostream>
#include <cmath>

class Fixed {
    public:
        Fixed(void);
        Fixed(const int n);
        Fixed(const float n);
        Fixed(Fixed const & ref);
        ~Fixed(void);
        
        Fixed& operator=(const Fixed& fixed);

        bool operator>(const Fixed &other) const;
        bool operator<(const Fixed &other) const;
        bool operator>=(const Fixed &other) const;
        bool operator<=(const Fixed &other) const;
        bool operator==(const Fixed &other) const;
        bool operator!=(const Fixed &other) const;

        Fixed operator+(const Fixed &other) const;
        Fixed operator-(const Fixed &other) const;
        Fixed operator*(const Fixed &other) const;
        Fixed operator/(const Fixed &other) const;

        Fixed &operator++();
        Fixed operator++(int);
        Fixed &operator--();
        Fixed operator--(int);

        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);

        float   toFloat(void) const;
        int     toInt(void) const;
    
    private:
        int _value;
        static const int    _fractionalBits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);