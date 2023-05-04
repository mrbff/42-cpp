#pragma once
#include "Animal.hpp"

class Cat : public Animal {
    public:
        Cat();
        Cat( const Cat &ref );
        virtual ~Cat();
        virtual void makeSound(void) const;

        Cat				&operator=( Cat const & ref );
	    virtual Animal	&operator=( const Animal &ref );
        virtual Brain	*getBrain( void ) const;
    private:
        Brain* _brain = new Brain;
};