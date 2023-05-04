#pragma once
#include "Animal.hpp"

class Cat : public Animal {
    public:
        Cat();
        virtual ~Cat();
        virtual void makeSound(void) const;
};