#include "Dog.hpp"

Dog::Dog() 
{
    std::cout << "A new dog is born!" << std::endl;
    _type = "Dog";
}

Dog::Dog( Dog const & ref )
{
	std::cout << "A cat has been cloned!" << std::endl;
	*this = ref;
}

Dog::~Dog() {
    std::cout << "The dog is dead!" << std::endl;
    delete _brain;
}

void Dog::makeSound() const
{
    std::cout << "wof wof!" << std::endl;
}

Dog		&Dog::operator=( Dog const &ref )
{
	std::cout << "Assignement operator for Dog called" << std::endl;
	_type = ref.getType();
	*(_brain) = *(ref.getBrain());
	return *this;
}

Animal	&Dog::operator=( Animal const &ref )
{
	std::cout << "Animal Assignement operator for Dog called" << std::endl;
	_type = ref.getType();
	*(_brain) = *(ref.getBrain());
	return *this;
}

Brain	*Dog::getBrain( void ) const
{
	return (_brain);
}