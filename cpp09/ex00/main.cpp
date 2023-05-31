#include <iostream>

int main(int ac, char **av)
{
    (void)av;
    if (ac != 2)
    {
        std::cout << "Error: could not open file." << std::endl;
        return 1;
    }
    return 0;
}