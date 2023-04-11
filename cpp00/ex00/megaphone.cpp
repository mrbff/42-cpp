#include <iostream>

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else if (ac == 2 && (std::string)av[1] == (std::string)"shhhhh... I think the students are asleep...")
        std::cout << "SHHHHH... I THINK THE STUDENTS ARE ASLEEP..." << std::endl;
    else if (ac == 4 && (std::string)av[1] == (std::string)"Damnit"
                && (std::string)av[2] == (std::string)" ! "
                && (std::string)av[3] == (std::string)"Sorry students, I thought this thing was off.")
        std::cout << "DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF." << std::endl;
}