#include "Zombie.hpp"

int main()
{
    randomChump("Rob");
    Zombie *zombie = newZombie("Sheri Moon");
    zombie->announce();
    delete zombie;
}