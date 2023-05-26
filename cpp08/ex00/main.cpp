#include "easyfind.hpp"

int main( int ac, char ** av )
{
    if ( ac != 2 )
        return EXIT_FAILURE;

    int                 arr[] = {65, 32, 66, 67, 32, 32, 7, 8, 9, 10};

    std::vector<int>      vect(arr, arr + sizeof(arr) / sizeof(int));
    std::list<int>        list(arr, arr + sizeof(arr) / sizeof(int));
    std::vector<char>      vect(arr, arr + sizeof(arr) / sizeof(int));
    std::list<std::string>        list(arr, arr + sizeof(arr) / sizeof(int));

    easyfind(vect, std::stoi(av[1]));
    easyfind(list, std::stoi(av[1]));

    return EXIT_SUCCESS;
}