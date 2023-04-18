#include "Contact.hpp"

Contact::Contact(void)
{}
Contact::~Contact(void)
{}

std::string Contact::getFname(void) {return(this->fname);}
std::string Contact::getLname(void) {return(this->lname);}
std::string Contact::getNname(void) {return(this->nname);}
std::string Contact::getPhone(void) {return(this->phone);}
std::string Contact::getSecret(void) {return(this->secret);}

//////////////////////////////

void Contact::setFname(std::string s)
{
    this->fname.clear();
    this->fname = s;
}

void Contact::setLname(std::string s)
{
    this->lname.clear();
    this->lname = s;
}

void Contact::setNname(std::string s)
{
    this->nname.clear();
    this->nname = s;
}

void Contact::setPhone(std::string s)
{
    this->phone.clear();
    this->phone = s;
}

void Contact::setSecret(std::string s)
{
    this->secret.clear();
    this->secret = s;
}