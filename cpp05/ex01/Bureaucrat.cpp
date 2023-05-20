#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name(""), _grade(MIN_GRADE) {}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade)
{
    _checkGrade();
}

Bureaucrat::Bureaucrat(Bureaucrat const & ref)  : _name(ref._name), _grade(ref._grade)
{
    *this = ref;
}

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
    _grade -= grades;
    _checkGrade();
}

void Bureaucrat::demote(int grades)
{
    _grade += grades;
    _checkGrade();
}

void	Bureaucrat::_checkGrade(void) const
{
	if (_grade < MAX_GRADE)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > MIN_GRADE)
		throw Bureaucrat::GradeTooLowException();
}

bool    Bureaucrat::signForm(Form &form)
{
    if (form.beSigned(*this))
	{
		std::cout << this->_name << " signs form " << form.getName()
			<< std::endl;
		return true;
	}
	else
	{
		std::cout << this->_name << " cannot sign form " << form.getName()
			<< " because the grade is too low." << std::endl;
		return false;
	}
} 

std::ostream &	operator<<( std::ostream & os, Bureaucrat const & bureaucrat)
{
	os << bureaucrat.getName() << ", Bureaucrat grade " << bureaucrat.getGrade();
	return os;
}