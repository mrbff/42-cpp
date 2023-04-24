#include "Zombie.hpp"

int main()
{
    int n = 6;
    Zombie *horde = zombieHorde(n, "zombie");
    
    for (int i = 0; i < n; i++)
        horde[i].announce();
    
    delete[] horde; 
}