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
        int getGrade() const;

        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw();
        };

        void promote();
        void demote();

    private:
        const std::string _name;
        int _grade;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);
