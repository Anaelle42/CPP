#include "../includes/Form.hpp"

Form::Form() : _name("no name"), _isSigned(0), _gradeToSign(50), _gradeToExecute(100)
{
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
    this->_isSigned = 0;
}

Form::~Form()
{
}

Form::Form(const Form& other) : _name(other.getName()), _gradeToSign(other.getGradeToSigned()) ,_gradeToExecute(other.getGradeToExecute())
{
    this->_isSigned = other.getIsSigned();
}

Form& Form::operator=(const Form& other)
{
    if (this != &other)
		this->_isSigned = other.getIsSigned();
	return (*this);
}

std::string Form::getName() const
{
    return (this->_name);
}

bool Form::getIsSigned() const
{
    return (this->_isSigned);
}

int Form::getGradeToSigned() const
{
    return (this->_gradeToSign);
}

int Form::getGradeToExecute() const
{
    return (this->_gradeToExecute);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream &operator<<(std::ostream& os, const Form& other)
{
	os << "Form " << other.getName();
    if (other.getIsSigned() != 0)
        os << " is signed. ";
    else
        os << " is not signed. ";
    os << "Grade to signed : " << other.getGradeToSigned();
    os << ", grade to execute : " << other.getGradeToExecute() << std::endl;
	return (os);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_gradeToSign)
		this->_isSigned = 1;
	else
		throw Form::GradeTooLowException();
}
