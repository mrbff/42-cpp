#include "ScavTrap.hpp"

int main()
{
    ClapTrap clap("Claptrap");
    clap.attack("a bandit");
    clap.takeDamage(5);
    clap.beRepaired(3);

    ScavTrap scav("Scavtrap");
    scav.attack("a bandit");
    scav.takeDamage(10);
    scav.beRepaired(5);
    scav.guardGate();

    return 0;
}