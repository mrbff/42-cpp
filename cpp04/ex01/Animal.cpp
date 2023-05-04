#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << "A new animal is born!" << std::endl;
}

Animal::Animal(Animal const & ref) : _type(ref._type)
{
    std::cout << "A new animal has been cloned!" << std::endl;
}

Animal::~Animal()
{
    std::cout << "The animal is dead." << std::endl;
}

Animal& Animal::operator=(const Animal& ref)
{
    if (this != &ref)
        _type = ref._type;
    return (*this);
}

void Animal::makeSound (void) const
{
        std::cout << "Generic roar!" << std::endl;
}

const std::string	&Animal::getType( void ) const
{
	return (_type);
}

std::ostream	&operator<<( std::ostream &ostream, const Animal &instance )
{
	ostream << instance.getType();
	return ostream;
}