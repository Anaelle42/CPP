#include "../includes/AForm.hpp"

AForm::AForm() : _name("no name"), _isSigned(0), _gradeToSign(50), _gradeToExecute(100)
{
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
    this->_isSigned = 0;
}

AForm::~AForm()
{
}

AForm::AForm(const AForm& other) : _name(other.getName()), _gradeToSign(other.getGradeSigned()) ,_gradeToExecute(other.getGradeExecute())
{
    _isSigned = other.getSigned();
}

AForm& AForm::operator=(const AForm& other)
{
    if (this != &other)
		this->_isSigned = other.getSigned();
	return (*this);
}

std::string AForm::getName() const
{
    return (this->_name);
}

bool AForm::getSigned() const
{
    return (this->_isSigned);
}

int AForm::getGradeSigned() const
{
    return (this->_gradeToSign);
}

int AForm::getGradeExecute() const
{
    return (this->_gradeToExecute);
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return ("Form is not signed");
}

std::ostream &operator<<(std::ostream& os, const AForm& other)
{
	os << "AForm " << other.getName();
    if (other.getSigned() != 0)
        os << ", is signed. ";
    else
        os << ", is not signed. ";
    os << "Grade to signed : " << other.getGradeSigned();
    os << ", grade to execute : " << other.getGradeExecute() << std::endl;
	return (os);
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_gradeToSign)
		this->_isSigned = 1;
	else
		throw AForm::GradeTooLowException();
}

std::string AForm::getTarget() const
{
    return (this->_target);
}

void AForm::setTarget(std::string target)
{
	this->_target = target;
}

void AForm::setSign(int sign)
{
	this->_isSigned = sign;
}
