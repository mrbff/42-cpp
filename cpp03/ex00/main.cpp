#include "ClapTrap.hpp"

int main()
{
    ClapTrap tizio("Tizio");
    ClapTrap caio("Caio");

    for (int i = 0; i < 11; i++)
    {
        tizio.attack(caio.getName());
        caio.takeDamage(tizio.getAttackDamage());
        caio.beRepaired(tizio.getAttackDamage());
    }
}