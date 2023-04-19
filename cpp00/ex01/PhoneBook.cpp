#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    this->i = 0;
    this->tot = 0;
}

PhoneBook::~PhoneBook(void)
{}

void PhoneBook::addCont(void)
{
    Contact     tmp;
    std::string s;

    std::cout << "First name: ";
    std::getline(std::cin, s);
    if (s.empty())
    {
        std::cout << std::endl << "Error" << std::endl;
        return ;
    }
    else
        tmp.setFname(s);
    
    std::cout << "Last name: ";
    s.clear();
    std::getline(std::cin, s);
    if (s.empty())
    {
        std::cout << std::endl << "Error" << std::endl;
        return ;
    }
    else
        tmp.setLname(s);

    
    std::cout << "Nickname: ";
    s.clear();
    std::getline(std::cin, s);
    if (s.empty())
    {
        std::cout << std::endl << "Error" << std::endl;
        return ;
    }
    else
        tmp.setNname(s);


    std::cout << "Phone number: ";
    s.clear();
    std::getline(std::cin, s);
    if (s.empty())
    {
        std::cout << std::endl << "Error" << std::endl;
        return ;
    }
    else
        tmp.setPhone(s);

    
    std::cout << "Dirty secret: ";
    s.clear();
    std::getline(std::cin, s);
    if (s.empty())
    {
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
    if (this->tot < 8)
        this->tot++;
    std::cout << std::endl;
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
    int i = 0;
    int count = this->tot;
    std::string fn, ln, nn;

    if (!count)
    {
        std::cout << "There are no contacts yet!" << std::endl;
        return ;
    }
    while(--count >= 0)
    {
        std::cout << "while " << count << std::endl; 
        fn = trunc(this->contacts[i].getFname());
        ln = trunc(this->contacts[i].getLname());
        nn = trunc(this->contacts[i].getNname());

        std::cout << std::right
        << std::setw(10) << i << "|" 
        << std::setw(10) << fn << "|"
        << std::setw(10) << ln << "|" 
        << std::setw(10) << nn << "|" << std::endl;
        i++;
    }
    std::cout << std::endl;
    this->searchCont();
}

void PhoneBook::searchCont(void)
{
    int in;
    std::string input;

    
    std::cout << "Type the ID of the contact to display: ";
    std::getline(std::cin, input);
    in = std::atoi(input.c_str());
    if (in < 0 || in > this->tot - 1)
        std::cout << "Error, Wrong ID" << std::endl;
    else
    {
        std::cout << this->contacts[in].getFname() << std::endl;
        std::cout << this->contacts[in].getLname() << std::endl;
        std::cout << this->contacts[in].getNname() << std::endl;
        std::cout << this->contacts[in].getPhone() << std::endl;
        std::cout << this->contacts[in].getSecret() << std::endl;
        std::cout << std::endl;
    }
    input.clear();
}