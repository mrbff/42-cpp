#include "phonebook.hpp"

int add(Contact *contact)
{
    std::cout << "First name: ";
    std::cin >> contact->fname;
    std::cout << std::endl;
    std::cout << "Last name: ";
    std::cin >> contact->lname;
    std::cout << std::endl;
    std::cout << "Nickname: ";
    std::cin >> contact->nname;
    std::cout << std::endl;
    std::cout << "Phone number: ";
    std::cin >> contact->phone;
    std::cout << std::endl;
    std::cout << "Darkest secret: ";
    std::cin >> contact->secret;
    std::cout << std::endl;

    return (0);
}

int main(void)
{
    std::string command;
    Contact *book = new Contact;
    uint8_t i = 7;

    while (1)
    {
        std::cin >> command;
        if (command == (std::string)"EXIT")
            return (0);
        else if (command == (std::string)"ADD")
            add(book[++i]);
    }
    return (0);
}