#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	setTarget("default");
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	setTarget(target);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
{
	if (this != &other)
	{
		setTarget(other.getTarget());
		setSign(other.getSigned());
	}
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	setTarget(other.getTarget());
	setSign(other.getSigned());
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSigned())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getGradeExecute())
		throw AForm::GradeTooLowException();
	int randomNum = rand() % 2;
	if (randomNum)
		std::cout << this->getTarget() << " has been robotomized." << std::endl;
	else
		std::cout << "The robotomy failed." << std::endl;
}