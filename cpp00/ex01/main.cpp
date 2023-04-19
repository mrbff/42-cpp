#include "PhoneBook.hpp"

int main(void)
{
    std::string command;
    PhoneBook   pb;
    
    while (std::getline(std::cin, command))
    {
        if (command == (std::string)"EXIT")
            return (0);
        else if (command == (std::string)"ADD")
            pb.addCont();    
        else if (command == (std::string)"SEARCH")
            pb.displayBook();
        else
            std::cout << "\r\033[A\33[2K";
        command.clear();
    }
    return (0);
}