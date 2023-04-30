#pragma once
#include <iostream>

class ClapTrap {
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const & ref);
        ~ClapTrap(void);

        ClapTrap &operator=(const ClapTrap& rhs);

        void attack(const std::string& target);
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
        unsigned int _hitPoints = 10;
        unsigned int _energyPoints = 10;
        unsigned int _attackDamage = 0;
};