#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        virtual ~WrongCat();
        virtual void makeSound(void) const;
};