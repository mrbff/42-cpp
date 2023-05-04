#pragma once
#include <iostream>
#include "Brain.hpp"

class Animal {
    public:
        virtual ~Animal();

        const std::string& getType(void) const;

        virtual Animal &operator=(const Animal& ref) = 0;

        virtual void makeSound (void) const = 0;

        virtual Brain	*getBrain( void ) const = 0;
   
    protected:
        std::string _type;
};

std::ostream	&operator<<( std::ostream &ostream, const Animal &instance );