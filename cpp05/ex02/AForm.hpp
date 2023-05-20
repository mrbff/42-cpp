#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
    public:
        AForm(const std::string &name, int gradeToSign, int gradeToExecute);
    	AForm(const AForm &ref);
	    virtual	~AForm();

    	AForm	&operator=(const AForm &ref);

        std::string     getName() const;
        int             getGradeToSign() const;
        int             getGradeToExec() const;
        bool            isSigned() const;

        void				beSigned(Bureaucrat& bureaucrat);
		virtual void		execute(Bureaucrat& executor) const = 0;
    
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

		class NotSignedException : public std::exception
		{
        	public:
            	virtual const char* what() const throw()
				{
					return "Form not signed";
				}
    	};
	
    private:
        AForm();
        const std::string   _name;
        bool                _signed;
        const int           _gradeToSign;
        const int           _gradeToExec;
};

std::ostream	&operator<<( std::ostream &os, const AForm &form);

#endif