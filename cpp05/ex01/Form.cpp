#include "Form.hpp"

Form::Form( const std::string &name, int gradeToSign, int gradeToExecute ): _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExecute)
{
	checkGrades();
}

Form::Form( void ): _name(""), _signed(false), _gradeToSign(MIN_GRADE), _gradeToExec(MIN_GRADE) {}

Form::Form( Form const &ref): _name(ref._name), _signed(ref._signed), _gradeToSign(ref._gradeToSign), _gradeToExec(ref._gradeToExec)
{
	*this = ref;
}

Form::~Form( void ) {}

Form	&Form::operator=( Form const & ref)
{
	_signed = ref._signed;
	return *this;
}

std::string	Form::getName() const
{
	return _name;
}

int	Form::getGradeToSign() const
{
	return _gradeToSign;
}

int	Form::getGradeToExec() const
{
	return _gradeToExec;
}

bool	Form::isSigned() const
{
	return _signed;
}

void	Form::checkExec(Bureaucrat &bureaucrat) const
{
	if (_signed == false || bureaucrat.getGrade() > _gradeToExec)
		throw Form::CantExecuteForm();
}

void	Form::checkGrades() const
{
	if (_gradeToExec < MAX_GRADE || _gradeToSign < MAX_GRADE)
		throw Form::GradeTooHighException();
	if (_gradeToExec > MIN_GRADE || _gradeToSign > MIN_GRADE)
		throw Form::GradeTooLowException();
}

bool	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= _gradeToSign)
	{
		_signed = true;
		return true;
	}
	else
	{
		_signed = false;
		return false;
	}
}

std::ostream &	operator<<( std::ostream & os, Form const &form)
{
	os << form.getName() << " Form has to be signed by a "
		<< form.getGradeToSign() << " grade and executed by a "
		<< form.getGradeToExec() << " grade, it is "
		<< ((form.isSigned()) ? "" : "not ") << "signed";
	return os;
}