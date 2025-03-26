#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
	setTarget("default");
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
	setTarget(target);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
{
	if (this != &other)
	{
		setTarget(other.getTarget());
		setSign(other.getSigned());
	}
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	setTarget(other.getTarget());
	setSign(other.getSigned());
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSigned())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getGradeExecute())
		throw AForm::GradeTooLowException();
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}