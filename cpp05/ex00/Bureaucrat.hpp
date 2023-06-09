#pragma once
#include <iostream>
#include <stdexcept>

#define MAX_GRADE 1
#define MIN_GRADE 150

class Bureaucrat {
    public:
        Bureaucrat(const std::string& name, int grade);
        Bureaucrat(Bureaucrat const & ref);
        ~Bureaucrat();
        
        Bureaucrat &operator=(const Bureaucrat& ref);

        const std::string&  getName() const;
        int                 getGrade() const;
        
        void promote(int grades);
        void demote(int grades);

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw()
                {
		        	return ("The grade you set is too high");
        		}
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw()
                {
			        return ("The grade you set is too low");
		        }
        };

    private:
        const std::string _name;
        int _grade;
        Bureaucrat();
        void _checkGrade(void) const;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);
