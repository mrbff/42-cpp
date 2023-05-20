#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    public:
        PresidentialPardonForm(const std::string& target);
        PresidentialPardonForm(const PresidentialPardonForm& ref);
        ~PresidentialPardonForm();

        PresidentialPardonForm& operator=(const PresidentialPardonForm& ref);
        
        void execute(const Bureaucrat& executor) const;
    
    private:
        std::string _target;
        PresidentialPardonForm();
};
