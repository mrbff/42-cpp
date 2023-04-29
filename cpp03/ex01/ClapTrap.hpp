#pragma once
#include <iostream>

class ClapTrap {
    public:
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const & ref);
        ~ClapTrap(void);

        void attack(ClapTrap *target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        std::string getName(void);
        unsigned int getHitPoints(void);
        unsigned int getEnergyPoints(void);
        unsigned int getAttackDamage(void);
        void setHitPoints(unsigned int amount);
        void setEnergyPoints(unsigned int amount);
        void setAttackDamage(unsigned int amount);
        
    private:
        std::string _name;
        int _hitPoints = 10;
        int _enegyPoints = 10;
        int _attackDamage = 0;
};