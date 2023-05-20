#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("Robotomy Request Form", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& ref) : AForm(ref), _target(ref._target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm&    RobotomyRequestForm::operator=(RobotomyRequestForm& ref)
{
    (void)ref;
    return *this;
}

void    RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
    if (executor.getGrade() > this->getGradeToExec())
        throw AForm::GradeTooLowException();
    else
    {
        static int i;
        if (i++ % 2)
            std::cout << "* DRILLING NOISES * " << _target << " has been robotomized succesfully!" << std::endl;
        else
            std::cout << "Robotomy on " << _target << " has failed succesfully!" << std::endl;
    }
}