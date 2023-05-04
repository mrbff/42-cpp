#pragma once
#include "Animal.hpp"

class Dog : public Animal {
    public:
        Dog();
        Dog( const Dog &ref );
        virtual ~Dog();
        virtual void makeSound(void) const;

        Dog				&operator=( Dog const & ref );
	    virtual Animal	&operator=( const Animal &ref );
        virtual Brain	*getBrain( void ) const;
    private:
        Brain* _brain = new Brain;
};