#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac != 2 || !av[1][0])
    {
        std::cerr << "Wrong arguments" << std::endl;
        return (1);
    }

    int level = -1;
    std::string strLvl = av[1];
    if (strLvl == "DEBUG")
        level = 0;
    else if (strLvl == "INFO")
        level = 1;
    else if (strLvl == "WARNING")
        level = 2;
    else if (strLvl == "ERROR")
        level = 3;
    
    Harl harl;
    harl.complain(level);
    
    return (0);
}