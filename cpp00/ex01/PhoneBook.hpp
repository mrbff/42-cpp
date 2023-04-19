#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"

class PhoneBook {
    public:
        PhoneBook(void);
        ~PhoneBook(void);

        void addCont(void);
        void displayBook(void);
        void searchCont(void);
    private:
        Contact contacts[8];
        int i;
        int tot;
};

#endif