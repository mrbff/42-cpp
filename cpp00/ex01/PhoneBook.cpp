#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    this->i = 0;
}

PhoneBook::~PhoneBook(void)
{

}

int PhoneBook::addCont(void)
{
    Contact     tmp;
    std::string s;

    std::cout << "First name: ";
    std::cin >> s;
    if (s.empty())
    {
        std::cout << std::endl << "Error" << std::endl;
        return (1);
    }
    else
        tmp.setFname(s);
    
    std::cout << "Last name: ";
    s.clear();
    std::cin >> s;
    if (s.empty())
    {
        std::cout << std::endl << "Error" << std::endl;
        return (1);
    }
        tmp.setLname(s);

    
    std::cout << "Nickname: ";
    s.clear();
    std::cin >> s;
    if (s.empty())
    {
        std::cout << std::endl << "Error" << std::endl;
        return (1);
    }
    else
        tmp.setNname(s);


    std::cout << "Phone number: ";
    s.clear();
    std::cin >> s;
    if (s.empty())
    {
        std::cout << std::endl << "Error" << std::endl;
        return (1);
    }
    else
        tmp.setPhone(s);

    
    std::cout << "Dirty secret: ";
    s.clear();
    std::cin >> s;
    if (s.empty())
    {
        std::cout << std::endl << "Error" << std::endl;
        return (1);
    }
    else
        tmp.setSecret(s);

    
    this->contacts[this->i].setFname(tmp.getFname());
    this->contacts[this->i].setLname(tmp.getLname());
    this->contacts[this->i].setNname(tmp.getNname());
    this->contacts[this->i].setPhone(tmp.getPhone());
    this->contacts[this->i].setSecret(tmp.getSecret());

    this->i = (this->i + 1) % 8;
    return (0);
}