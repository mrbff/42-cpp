#pragma once
#include "Weapon.hpp"

class HumanB {
    public:
        HumanB(std::string name);
        ~HumanB(void);
        void setWeapon(Weapon& weapon);
        void attack(void) const;
    private:
        std::string _name;
        Weapon* _weapon;
};