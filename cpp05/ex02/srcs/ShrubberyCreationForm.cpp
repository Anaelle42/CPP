#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	setTarget("default");
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	setTarget(target);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
{
	if (this != &other)
	{
		setTarget(other.getTarget());
		setSign(other.getSigned());
	}
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	setTarget(other.getTarget());
	setSign(other.getSigned());
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSigned())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getGradeExecute())
		throw AForm::GradeTooLowException();
	std::ofstream ofs (this->getTarget().append("_shrubbery").c_str());
	if (!ofs.is_open())
	{
		std::cerr << "Error opening file" << std::endl;
		return;
	}
	ofs << "   /\\" << std::endl;
	ofs << "  /  \\" << std::endl;
	ofs << "  /   \\" << std::endl;
	ofs << " /     \\" << std::endl;
	ofs << " /      \\" << std::endl;
	ofs << "/        \\" << std::endl;
	ofs << "/_________\\" << std::endl;
	ofs << "    ||" << std::endl;
}