#include "Animal.hpp"

Animal::~Animal()
{
    std::cout << "The animal is dead." << std::endl;
}

const std::string	&Animal::getType( void ) const
{
	return (_type);
}