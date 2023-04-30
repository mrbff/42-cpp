#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap diamond("Diamante");

    diamond.whoAmI();
    diamond.attack("target");
    diamond.takeDamage(10);
    diamond.beRepaired(5);
    diamond.guardGate();
    diamond.highFivesGuys();

    return 0;
}
