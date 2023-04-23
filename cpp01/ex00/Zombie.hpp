#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
    public:
        Zombie(std::string name);
        ~Zombie(void);

        void    announce(void);
        Zombie* newZombie( std::string name );
        void    randomChump( std::string name );
    private:
        std::string _name;
};

#endif