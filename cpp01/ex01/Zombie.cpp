#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) 
{}

Zombie::Zombie(void) {}

Zombie::~Zombie(void)
{
    std::cout << Zombie::_name << " destroyed!" << std::endl;
}

void Zombie::announce(void) const
{
    std::cout << Zombie::_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}