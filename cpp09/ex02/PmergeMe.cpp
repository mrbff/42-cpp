#include "PmergeMe.hpp"

void checkInput(int *arr, int ac, char **av)
{
    for (int i = 1; i < ac; i++)
    {
        arr[i - 1] = atoi(av[i]);
        if (arr[i - 1] <= 0)
            throw ("Error");
    }
}