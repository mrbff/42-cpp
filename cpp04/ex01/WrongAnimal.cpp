#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Generic WrongAnimal")
{
    std::cout << "A new Wronganimal is born!" << std::endl;
}

/*WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
    std::cout << "A new Wronganimal is born!" << std::endl;
}*/

WrongAnimal::WrongAnimal(WrongAnimal const & ref) : _type(ref._type)
{
    std::cout << "A new Wronganimal is born!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "The Wronganimal is dead." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& ref)
{
    if (this != &ref)
        _type = ref._type;
    return (*this);
}

void WrongAnimal::makeSound (void) const
{
        std::cout << "Wrong roar!" << std::endl;
}

const std::string	&WrongAnimal::getType( void ) const
{
	return (_type);
}

std::ostream	&operator<<( std::ostream &ostream, const WrongAnimal &instance )
{
	ostream << instance.getType();
	return ostream;
}