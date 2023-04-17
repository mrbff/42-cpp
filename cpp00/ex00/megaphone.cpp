#include <iostream>

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else if (ac > 1)
    {
        int j = -1;
        int i = 1;
        while (i < ac)
        {
            while (av[i][++j])
                std::cout << (char)std::toupper(av[i][j]);
            j = -1;
            i++;
        }
        std::cout << std::endl;
    }
    return (0);
}