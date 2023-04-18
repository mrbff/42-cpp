#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    this->i = 0;
}

PhoneBook::~PhoneBook(void)
{}

void PhoneBook::addCont(void)
{
    Contact     tmp;
    std::string s;

    std::cout << "First name: ";
    std::cin >> s;
    if (s.empty())
    {
        std::cin.clear();
        std::cout << std::endl << "Error" << std::endl;
        return ;
    }
    else
        tmp.setFname(s);
    
    std::cout << "Last name: ";
    s.clear();
    std::cin >> s;
    if (s.empty())
    {
        std::cin.clear();
        std::cout << std::endl << "Error" << std::endl;
        return ;
    }
    else
        tmp.setLname(s);

    
    std::cout << "Nickname: ";
    s.clear();
    std::cin >> s;
    if (s.empty())
    {
        std::cin.clear();
        std::cout << std::endl << "Error" << std::endl;
        return ;
    }
    else
        tmp.setNname(s);


    std::cout << "Phone number: ";
    s.clear();
    std::cin >> s;
    if (s.empty())
    {
        std::cin.clear();
        std::cout << std::endl << "Error" << std::endl;
        return ;
    }
    else
        tmp.setPhone(s);

    
    std::cout << "Dirty secret: ";
    s.clear();
    std::cin >> s;
    if (s.empty())
    {
        std::cin.clear();
        std::cout << std::endl << "Error" << std::endl;
        return ;
    }
    else
        tmp.setSecret(s);

    
    this->contacts[this->i].setFname(tmp.getFname());
    this->contacts[this->i].setLname(tmp.getLname());
    this->contacts[this->i].setNname(tmp.getNname());
    this->contacts[this->i].setPhone(tmp.getPhone());
    this->contacts[this->i].setSecret(tmp.getSecret());

    this->i = (this->i + 1) % 8;
}

std::string trunc(std::string s)
{
    if (s.length() > 10)
    {
        s = s.substr(0, 10);
        for (int i = 9; i > 6; i--)
            s[i] = '.';
    }
    return (s);
}

void PhoneBook::displayBook(void)
{
    int i = -1;
    std::string fn, ln, nn;

    while(++i < this->i)
    {
        fn = trunc(this->contacts[i].getFname());
        ln = trunc(this->contacts[i].getLname());
        nn = trunc(this->contacts[i].getNname());

        std::cout << std::right
        << std::setw(10) << i << "|" 
        << std::setw(10) << fn << "|"
        << std::setw(10) << ln << "|" 
        << std::setw(10) << nn << std::endl;
    }
    std::cout << std::endl;
}

void PhoneBook::searchCont(void)
{
    int i;

    std::cout << "Type the ID of the contact to display: ";
    std::cin >> i;
    if (i < 0 || i > 7)
    {
        std::cout << "Error, Wrong ID" << std::endl;
        return ;
    }
    std::cout << this->contacts[i].getFname() << std::endl;
    std::cout << this->contacts[i].getLname() << std::endl;
    std::cout << this->contacts[i].getNname() << std::endl;
    std::cout << this->contacts[i].getPhone() << std::endl;
    std::cout << this->contacts[i].getSecret() << std::endl;
    std::cout << std::endl;
}