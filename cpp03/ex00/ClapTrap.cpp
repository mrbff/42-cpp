#include "ClapTrap.hpp"
#include <limits.h>

ClapTrap::ClapTrap(std::string name) : _name(name) 
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & ref) : _name(ref._name)
{
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void) 
{
    std::cout << "Default desstructor called" << std::endl;
}



void ClapTrap::attack(const std::string& target) 
{
    if (_hitPoints <= 0)
    {
        std::cout << _name << " has no hit points" << std::endl;
        return ;
    }
    if (_enegyPoints > 0)
    {
        std::cout <<"ClapTrap "<< _name << " attacks "<< target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _enegyPoints--;
    }
    else
        std::cout << _name << " has no energy points" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) 
{
    std::cout << _name << " takes damage" << std::endl;
    if (_hitPoints > 0)
        _hitPoints -= amount;
    if (_hitPoints < 0)
        _hitPoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount) 
{
    if (_enegyPoints <= 0)
    {
        std::cout << _name << " has no energy points" << std::endl;
        return ;
    }
    else
        _enegyPoints--;
    std::cout << _name << " is repairing itself" << std::endl;
    if (_hitPoints > 0)
        _hitPoints += amount;
    if (_hitPoints < 0)
        _hitPoints = INT_MAX;
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
    return (_enegyPoints);
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
        _enegyPoints = amount;
}

void ClapTrap::setAttackDamage(unsigned int amount) 
{
    if (amount >= 0)
        _attackDamage = amount;
}