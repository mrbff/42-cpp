#pragma once
#include <iostream>

class Fixed {
    public:
        Fixed(void);
        Fixed(Fixed& ref);
        ~Fixed(void);
        
        Fixed& operator=(const Fixed& fixed);

        int getRawBits( void ) const;
        void setRawBits( int const raw );
    
    private:
        int value;
        static const int    fractionalBits = 8;
};