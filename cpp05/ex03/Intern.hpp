#pragma once

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
    public:
        Intern();
        Intern(Intern const & ref);
        ~Intern();

        Intern &operator=(const Intern& ref);

        AForm *makeForm(const std::string type, const std::string name);
};