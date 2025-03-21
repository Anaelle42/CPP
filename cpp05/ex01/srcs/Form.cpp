#include "../includes/Form.hpp"

Form::Form() : _name("no name"), _isSigned(0), _gradeToSign(50), _gradeToExecute(100)
{
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name)
{
    this->_isSigned = 0;
    this->_gradeToSign = gradeToSign;
    this->gradeToExecute = gradeToExecute;
}

Form::~Form()
{
}

Form::Form(const Form& other)
{
    (void)other;
}

Form& Form::operator=(const Form& other)
{
    (void)other;
    return (*this);
}