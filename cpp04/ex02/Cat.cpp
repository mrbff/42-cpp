#include "Cat.hpp"

Cat::Cat() 
{
    std::cout << "A new cat is born!" << std::endl;
    _type = "Cat";
}

Cat::Cat( Cat const & ref )
{
	std::cout << "A cat has been cloned!" << std::endl;
	*this = ref;
}

Cat::~Cat() {
    std::cout << "The cat is dead!" << std::endl;
    delete _brain;
}

void Cat::makeSound() const
{
    std::cout << "mew mew!" << std::endl;
}

Cat		&Cat::operator=( Cat const &ref )
{
	std::cout << "Assignement operator for Cat called" << std::endl;
	_type = ref.getType();
	*(_brain) = *(ref.getBrain());
	return *this;
}

Animal	&Cat::operator=( Animal const &ref )
{
	std::cout << "Animal Assignement operator for Cat called" << std::endl;
	_type = ref.getType();
	*(_brain) = *(ref.getBrain());
	return *this;
}

Brain	*Cat::getBrain( void ) const
{
	return (_brain);
}