#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("PresidentialPardonForm", 25, 5 ), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ref) : AForm(ref), _target(ref._target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& ref)
{
    (void)ref;
    return *this;
}

void    PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
    if (executor.getGrade() > getGradeToExec())
        throw AForm::GradeTooLowException();
    else
        std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}