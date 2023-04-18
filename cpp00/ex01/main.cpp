#include "PhoneBook.hpp"

int main(void)
{
    std::string command;
    PhoneBook   pb;
    
    while (1)
    {
        
        
    
        std::cin >> command;
        if (command == (std::string)"EXIT")
            return (0);
        else if (command == (std::string)"ADD")
            pb.addCont();    
        else if (command == (std::string)"SEARCH")
        {
            pb.displayBook();
            pb.searchCont();
        }
        command.clear();
        std::cin.clear();
    /*    else
            std::cout << "\r\033[A\33[2K";*/
    }
    return (0);
}