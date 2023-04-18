#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <stdint.h>
#include "Contact.hpp"

class PhoneBook {
    public:
        PhoneBook(void);
        ~PhoneBook(void);

        int addCont(void);
    private:
        Contact contacts[8];
        int i;
};

#endif