#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "phonebook.hpp"

class Contact {
  public:
    std::string fname{};
    std::string lname{};
    std::string nname{};
    std::string phone{};
    std::string secret;
};

#endif