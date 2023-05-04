#pragma once
#include <iostream>
#include "Brain.hpp"

class Animal {
    public:
        Animal();
        Animal(Animal const & ref);
        virtual ~Animal();

        const std::string	&getType(void) const;

        virtual Animal& operator=(const Animal& ref);

        virtual void makeSound (void) const;

        virtual Brain	*getBrain( void ) const = 0;
   
    protected:
        std::string _type;
};
