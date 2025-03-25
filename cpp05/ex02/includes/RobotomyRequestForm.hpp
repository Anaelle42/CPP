#ifndef ROBOTOMYREQUESTFORM.HPP
# define ROBOTOMYREQUESTFORM.HPP

#include <iostream>

class RobotomyRequestForm
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& other);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
		~RobotomyRequestForm();
};

#endif