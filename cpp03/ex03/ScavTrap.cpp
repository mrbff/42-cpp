#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    std::cout << "Scavtrap " << _name << " created!" << std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &ref) : ClapTrap(ref) {}

ScavTrap::~ScavTrap(void)
{
    std::cout << "Scavtrap " << _name << " destroyed!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ref) {
    if (this != &ref) {
        _name = ref._name;
        _hitPoints = ref._hitPoints;
        _energyPoints = ref._energyPoints;
        _attackDamage = ref._attackDamage;
    }
    return (*this);
}

void ScavTrap::attack(const std::string &target)
{
if (!_hitPoints)
    {
        std::cout << _name << " has no hit points left!" << std::endl;
        return ;
    }
    if (_energyPoints > 0)
    {
        std::cout <<"Scavtrap "<< _name << " attacks "<< target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    }
    else
        std::cout << _name << " has no energy points left!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "Scavtrap " << _name << " is now in Gate keeper mode." << std::endl;
}