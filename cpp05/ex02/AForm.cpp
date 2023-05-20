#include "AForm.hpp"

AForm::AForm(const std::string& name, int gradeToSign, int gradeToExecute ) : _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExecute)
{
    if (gradeToSign < MAX_GRADE || gradeToExecute < MAX_GRADE)
        throw AForm::GradeTooHighException();
    if (gradeToSign > MIN_GRADE || gradeToExecute > MIN_GRADE)
        throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& ref) : _name( ref._name), _gradeToSign( ref._gradeToSign), _gradeToExec(ref._gradeToExec) {}

AForm::~AForm() {}

AForm&   AForm::operator=( const AForm& ref)
{
    _signed = ref._signed;
    return *this;
}

std::string AForm::getName() const
{
    return _name;
}

bool   AForm::isSigned() const
{
    return _signed;
}

int   AForm::getGradeToSign() const
{
    return _gradeToSign;
}

int   AForm::getGradeToExec() const
{
    return _gradeToExec;
}

void    AForm::beSigned(Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > _gradeToSign )
        throw AForm::GradeTooLowException();
    _signed = true;
}

std::ostream&   operator<<( std::ostream &os, const AForm& form)
{
    os << "Form name: " << form.getName() << "  Grade to sign: " << form.getGradeToSign() << "  Grade to execute: " << form.getGradeToExec() << std::endl;;
    return os;
}