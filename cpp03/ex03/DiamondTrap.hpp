#pragma once
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    public:
        DiamondTrap(std::string name);
        ~DiamondTrap(void);
        void whoAmI(void);

    private:
        std::string _name;
};