#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name )
{
    Zombie* horde = new Zombie[N];

    for (int i = 0; i < N; i++)
        horde[i] = Zombie(name + std::string(1, static_cast<char>('0' + i)));
    return (horde);
}