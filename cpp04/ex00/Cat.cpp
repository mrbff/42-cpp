#include "Cat.hpp"

Cat::Cat() 
{
    _type = "Cat";
}

Cat::~Cat() {}

void Cat::makeSound() const
{
    std::cout << "mew mew!" << std::endl;
}
