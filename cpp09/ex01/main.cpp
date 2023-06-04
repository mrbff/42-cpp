#include "RPN.hpp"
#include <iostream>

static bool isCharOfSet(char c, std::string set)
{
    std::string::iterator it;

    for (it = set.begin(); it != set.end(); it++)
    {
        if (*it == c)
            return true;
    }
    return false;
}

static bool checkValidChars(std::string s, std::string set)
{
    std::string::iterator it;
    if (s.empty())
        return false;
    for (it = s.begin(); it != s.end(); it++)
    {
        if (!isCharOfSet(*it, set))
            return false;
    }
    return true;
}

int main(int ac, char  **av)
{
    if (ac != 2 || !checkValidChars(av[1], "0123456789 +-*/"))
    {
        std::cout << "Error" << std::endl;
        return 1;
    }
    
    std::string expression(av[1]);

    try {
        std::cout << rpn(expression) << std::endl;
    } catch (...) {
        std::cerr << "Error" << std::endl;
        return 1;
    }

    return 0;
}