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

Form::Form(const Form& other) : _name(other.getName()), _gradeToSign(other.getGradeSigned) ,_gradeToExecute(other.getGradeExecute)
{
    _isSigned = other.getSigned();
}

Form& Form::operator=(const Form& other)
{
    if (this != &other)
		this->_isSigned = other.getSigned();
	return (*this);
}

std::string Form::getName() const
{
    return (this->_name);
}

bool Form::getSigned() const
{
    return (this->_isSigned);
}

const int Form::getGradeSigned() const
{
    return (this->_gradeToSign);
}

const int Form::getGradeExecute() const
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
    if (other.getSigned() != 0)
        os << "is signed, ";
    else
        os << "is not signed, ";
    os << "grade to signed " << other.getGradeSigned();
    os << "grade to execute " << other.getGradeExecute() << std::endl;
	return (os);
}