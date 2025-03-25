#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
	int randomNum = rand() % 2;
	if (randomNum)
		std::cout << "Default has been robotomized." << std::endl;
	else
		std::cout << " The robotomy failed." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
{
	int randomNum = rand() % 2;
	if (randomNum)
		std::cout << target << " has been robotomized." << std::endl;
	else
		std::cout << " The robotomy failed." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	return (*this);
}