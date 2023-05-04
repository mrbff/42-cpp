#pragma once
#include "Animal.hpp"

class Dog : public Animal {
    public:
        Dog();
        virtual ~Dog();
        virtual void makeSound(void) const;
};