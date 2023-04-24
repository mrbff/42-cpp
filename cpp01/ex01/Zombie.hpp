#pragma once
#include <iostream>

class Zombie {
    public:
        Zombie(std::string name);
        Zombie(void);
        ~Zombie(void);
        void    announce(void) const;
    private:
        std::string _name;
};

Zombie* zombieHorde( int N, std::string name );