#pragma once
#include <iostream>

class Animal {
    public:
        Animal();
        Animal(std::string type);
        Animal(Animal const & ref);
        ~Animal();

        Animal& operator=(const Animal& ref);

        void makeSound (void);
    protected:
        std::string _type;
};
