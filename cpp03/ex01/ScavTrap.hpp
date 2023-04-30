#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(const std::string &name);
        ScavTrap(const ScavTrap &ref);
        ~ScavTrap(void);
        
        ScavTrap &operator=(const ScavTrap &ref);

        void attack(const std::string &target);
        void guardGate();
};
