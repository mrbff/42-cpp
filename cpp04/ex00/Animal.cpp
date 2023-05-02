#pragma once
#include "Animal.hpp"

Animal::Animal() : _type("animal")
{
    std::cout << "A new " << _type << " is born!" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << "A new " << _type << " is born!" << std::endl;
}

Animal::Animal(Animal const & ref) : _type(ref._type)
{
    std::cout << "A new " << _type << " is born!" << std::endl;
}

Animal::~Animal()
{
    std::cout << "The " << _type << " is dead." << std::endl;
}

Animal& Animal::operator=(const Animal& ref)
{
    if (this != &ref)
        _type = ref._type;
    return (*this);
}

void Animal::makeSound (void)
{
    if (_type == "Dog")
        std::cout << "wolf wolf!" << std::endl;
    else if (_type == "Cat")
        std::cout << "mew mew!" << std::endl;
    else
        std::cout << "Generic roar!" << std::endl;
}