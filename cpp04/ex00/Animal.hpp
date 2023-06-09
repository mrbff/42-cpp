#pragma once
#include <iostream>

class Animal {
    public:
        Animal();
    //    Animal(std::string type);
        Animal(Animal const & ref);
        virtual ~Animal();

        const std::string	&getType(void) const;

        Animal& operator=(const Animal& ref);

        virtual void makeSound (void) const;
    protected:
        std::string _type;
};
