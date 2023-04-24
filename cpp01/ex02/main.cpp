#include <iostream>

int main()
{
    std::string s = "HI THIS IS BRAIN";
    std::string *stringPTR = &s;
    std::string &stringREF = s;

    std::cout << "Memory address of the string variable:\t" << &s << std::endl;
    std::cout << "Memory address held by stringPTR:\t" << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF:\t" << &stringREF << std::endl;

    std::cout << "Value of the string variable:\t" << s << std::endl;
    std::cout << "Value pointed to by stringPTR:\t" << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF:\t" << stringREF << std::endl;
}