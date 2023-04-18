#include "PhoneBook.hpp"

int main(void)
{
    std::string command;
    PhoneBook   pb;
    
    while (1)
    {
        command.clear();
        std::cin >> command;
        if (command == (std::string)"EXIT")
            return (0);
        else if (command == (std::string)"ADD")
            pb.addCont();
    }
    return (0);
}