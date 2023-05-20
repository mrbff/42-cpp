#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "AForm.hpp"

#define MAX_GRADE 1
#define MIN_GRADE 150

class AForm;

class Bureaucrat {
    public:
        Bureaucrat(const std::string& name, int grade);
        Bureaucrat(Bureaucrat const & ref);
        ~Bureaucrat();
        
        Bureaucrat &operator=(const Bureaucrat& ref);

        const std::string&  getName() const;
        int                 getGrade() const;
        
        void    promote(int grades);
        void    demote(int grades);

        void    signForm(AForm &form);
        void    executeForm(AForm& form); 

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw()
                {
		        	return ("The grade is too high");
        		}
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw()
                {
			        return ("The grade is too low");
		        }
        };

    private:
        const std::string _name;
        int _grade;
        Bureaucrat();
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif