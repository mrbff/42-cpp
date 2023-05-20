#pragma once

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
    public:
        ShrubberyCreationForm(const std::string& target);
        ShrubberyCreationForm(const ShrubberyCreationForm& ref);
        ~ShrubberyCreationForm();

        ShrubberyCreationForm&  operator=(ShrubberyCreationForm& ref);
        
        void        execute( const Bureaucrat& executor ) const;
    
    private:
        const std::string   _target;
        ShrubberyCreationForm();
};