#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice( Ice const & src ): AMateria("ice")
{
	std::cout << "Copy constructor for Ice called" << std::endl;
	*this = src;
	return;
}

Ice::~Ice() {}

Ice	&Ice::operator=( const Ice &other )
{
	this->_type = other._type;
	std::cout << "Assignation operator for Ice called" << std::endl;
	return *this;
}

AMateria* Ice::clone() const {
    return new Ice(*this);
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    AMateria::use(target);
}