#include "Character.hpp"

Character::Character( void ): _name(""), _number_equipped(0)
{
	for (int i = 0; i < Character::_inventory_size; i++)
		this->_inventory[i] = NULL;
	std::cout << "Default constructor for Character called" << std::endl;
	return;
}

Character::Character( const std::string &name )
{
	*this = Character();
	this->_name = name;
	std::cout << "Name constructor for Character called" << std::endl;
	return;
}

Character::Character( Character const & src )
{
	std::cout << "Copy constructor for Character called" << std::endl;
	*this = src;
	return;
}

Character::~Character( void )
{
	std::cout << "Destructor for Character called" << std::endl;
	return;
}

Character &	Character::operator=( Character const & rhs )
{
	this->_number_equipped = 0;
	for (int i = 0; i < Character::_inventory_size; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		this->_inventory[i] = rhs._inventory[i];
		if (rhs._inventory[i])
			this->_number_equipped++;
	}
	this->_name = rhs.getName();
	std::cout << "Assignement operator for Character called" << std::endl;
	return *this;
}

std::string const	&Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	if (this->_number_equipped < Character::_inventory_size)
	{
		this->_inventory[this->_number_equipped] = m;
		this->_number_equipped++;
		std::cout << "Equipped a " << m->getType() << std::endl;
	}
	else
		std::cout << "Couldn't equip a " << m->getType() << ", no more space"
			<< std::endl;
}

void	Character::unequip(int idx)
{
	int i;

	i = idx + 1;
	while (i < Character::_inventory_size && this->_inventory[i])
	{
		this->_inventory[i - 1] = this->_inventory[i];
		i++;
	}
	this->_inventory[i] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	this->_inventory[idx]->use(target);
	this->unequip(idx);
}

void	Character::printInventory( void ) const
{
	for (int i = 0; i < Character::_inventory_size; i++)
	{
		if (this->_inventory[i])
			std::cout << i << ": " << this->_inventory[i] << std::endl;
		else
			std::cout << i << ": Empty" << std::endl;
	}
}