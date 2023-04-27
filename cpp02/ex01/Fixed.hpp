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
      
        int     getRawBits(void) const;
        void    setRawBits(int const raw);

        float   toFloat(void) const;
        int     toInt(void) const;
    
    private:
        int _value;
        static const int    _fractionalBits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);