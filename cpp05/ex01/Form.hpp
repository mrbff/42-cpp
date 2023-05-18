#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    public:
        Form(const std::string &name, int gradeToSign, int gradeToExecute);
    	Form(const Form &ref);
	    ~Form();

    	Form	&operator=(const Form &ref);

        std::string     getName() const;
        int             getGradeToSign() const;
        int             getGradeToExec() const;
        bool            isSigned() const;

        bool    beSigned(Bureaucrat& bureaucrat);
        void	checkGrades() const;
	    void	checkExec(Bureaucrat& bureaucrat) const;

    
        class GradeTooHighException : public std::exception
	    {
			public:
				virtual const char* what() const throw()
				{
					return ("The grade is too high");
				}
	    };

	    class GradeTooLowException : public std::exception
	    {
	        public:
		        virtual const char* what() const throw()
				{
					return ("The grade is too low");
				}
	    };

	    class CantExecuteForm : public std::exception
	    {
	        public:
		        virtual const char* what() const throw()
				{
					return ("The form can't be executed");
				}
	    };
    
    private:
        Form();
        const std::string   _name;
        bool                _signed;
        const int           _gradeToSign;
        const int           _gradeToExec;
};

std::ostream	&operator<<( std::ostream &os, const Form &form);

#endif