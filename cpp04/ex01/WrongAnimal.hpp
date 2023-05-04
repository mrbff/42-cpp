#pragma once
#include <iostream>

class WrongAnimal {
    public:
        WrongAnimal();
    //    Animal(std::string type);
        WrongAnimal(WrongAnimal const & ref);
        virtual ~WrongAnimal();

        const std::string	&getType(void) const;

        WrongAnimal& operator=(const WrongAnimal& ref);

        virtual void makeSound (void) const;
    protected:
        std::string _type;
};