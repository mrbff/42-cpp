#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        return (EXIT_FAILURE);
    try {
        ScalarConverter converter;
        converter.convert(av[1]);

        std::cout << converter;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return EXIT_SUCCESS;
}