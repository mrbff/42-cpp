#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    Zombie::_name = name;
}

Zombie::~Zombie(void)
{
    std::cout << Zombie::_name << " destroyed!" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << Zombie::_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}