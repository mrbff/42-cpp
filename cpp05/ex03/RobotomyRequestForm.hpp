#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    public:
        RobotomyRequestForm(const std::string& target);
        RobotomyRequestForm(const RobotomyRequestForm& ref);
        ~RobotomyRequestForm();

        RobotomyRequestForm &operator=(RobotomyRequestForm& ref);

        void        execute(const Bureaucrat& executor) const;
    
    private:
        const std::string   _target;
        RobotomyRequestForm();
};