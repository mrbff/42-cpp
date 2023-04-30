#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Booting up Fragtrap " << _name << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &ref) : ClapTrap(ref)
{
    std::cout << "Cloning Fragtrap " << ref._name << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Shutting down Fragtrap " << _name << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "Fragtrap " << _name << " requests a high five!" << std::endl;
}