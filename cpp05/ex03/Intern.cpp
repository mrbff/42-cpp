#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const & ref)
{
    *this = ref;
}

Intern::~Intern() {}

Intern &Intern::operator=(const Intern& ref)
{
    *this = ref;
    return *this;
}

AForm *makeShrubberyCreation(const std::string targ)
{
    return (new ShrubberyCreationForm(targ));
}

AForm *makeRobotomyRequest(const std::string targ)
{
    return (new RobotomyRequestForm(targ));
}

AForm *makePresidentialPardon(const std::string targ)
{
    return (new PresidentialPardonForm(targ));
}

AForm *Intern::makeForm(const std::string formName, const std::string targ)
{
    std::string names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    int i = 0;
    AForm *formPtr = NULL;

    AForm* (*forms[3])(const std::string targ) = {
        &makeShrubberyCreation,
        &makeRobotomyRequest,
        &makePresidentialPardon
    };

    while (i < 3)
    {
        if (names[i] == formName)
            break;
        i++;
    }

    if (i == 3)
        std::cerr << "ERROR: The form name passed as parameter doesn’t exist" << std::endl;
    else
    {
        std::cout << "Intern creates " << targ << " " << formName << " form" << std::endl;
        formPtr = forms[i](targ);
    }
    return formPtr;
}    