#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name(""), _grade(MIN_GRADE) {}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade)
{
    if (grade < MAX_GRADE)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > MIN_GRADE)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & ref)  : _name(ref._name), _grade(ref._grade) {}

Bureaucrat::~Bureaucrat() {}
        
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& ref)
{
    _grade = ref._grade;
    return *this;
}

const std::string&  Bureaucrat::getName() const
{
    return _name;
}

int                 Bureaucrat::getGrade() const
{
    return _grade;
}
        
void Bureaucrat::promote(int grades)
{
	if (_grade - grades < MAX_GRADE || _grade - grades > _grade)
        throw Bureaucrat::GradeTooHighException();
	_grade -= grades;
}

void Bureaucrat::demote(int grades)
{
	if ( _grade + grades >  MIN_GRADE || _grade + grades < _grade)
        throw Bureaucrat::GradeTooLowException();
	_grade += grades;
}

void    Bureaucrat::signForm(AForm &form)
{
    try {
			form.beSigned(*this);
			std::cout << *this << " signed " << form.getName() << std::endl;
		}
	catch (AForm::GradeTooLowException& e)
		{
			std::cout << _name << " coulnd't sign " << form.getName() << " because " << e.what() << std::endl;
		}
}

void    Bureaucrat::executeForm(AForm &form)
{
    try {
			form.execute(*this);
		}
	catch (AForm::GradeTooLowException& e)
		{
			std::cout << _name << " coulnd't execute " << form.getName() << " because " << e.what() << std::endl;
		}
} 

std::ostream &	operator<<( std::ostream & os, Bureaucrat const & bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return os;
}