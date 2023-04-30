#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("No name") 
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name) 
{
    std::cout << _name << " default constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & ref)
{
    *this = ref;
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void) 
{
    std::cout << _name << " default destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& ref)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &ref)
    {
        _name = ref._name;
        _hitPoints = ref._hitPoints;
        _energyPoints = ref._energyPoints;
        _attackDamage = ref._attackDamage;
    }
    return (*this);
}

void ClapTrap::attack(const std::string& target) 
{
    if (!_hitPoints)
    {
        std::cout << _name << " has no hit points left!" << std::endl;
        return ;
    }
    if (_energyPoints > 0)
    {
        std::cout <<"ClapTrap "<< _name << " attacks "<< target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    }
    else
        std::cout << _name << " has no energy points left!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) 
{
    if (!_hitPoints)
    {
        std::cout << _name << " has no hit points left!" << std::endl;
        return ;
    }
    std::cout << _name << " takes damage" << std::endl;
    if (_hitPoints > 0)
        _hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) 
{
    if (!_hitPoints) {
        std::cout << "ClapTrap " << _name << " is dead and can't be repaired!" << std::endl;
        return ;
    }
    if (!_energyPoints)
    {
        std::cout << _name << " has no energy points left!" << std::endl;
        return ;
    }
    _energyPoints--;
    std::cout << _name << " is repairing itself" << std::endl;
    _hitPoints += amount;
}



std::string ClapTrap::getName(void) 
{
    return (_name);
}

unsigned int ClapTrap::getHitPoints(void) 
{
    return (_hitPoints);
}

unsigned int ClapTrap::getEnergyPoints(void) 
{
    return (_energyPoints);
}

unsigned int ClapTrap::getAttackDamage(void) 
{
    return (_attackDamage);
}



void ClapTrap::setHitPoints(unsigned int amount) 
{   if (amount >= 0)
        _hitPoints = amount;
}

void ClapTrap::setEnergyPoints(unsigned int amount) 
{
    if (amount >= 0)
        _energyPoints = amount;
}

void ClapTrap::setAttackDamage(unsigned int amount) 
{
    if (amount >= 0)
        _attackDamage = amount;
}