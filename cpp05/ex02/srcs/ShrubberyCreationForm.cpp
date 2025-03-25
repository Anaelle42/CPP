#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
	std::ofstream ofs ("file_shrubbery");
	if (!ofs.is_open())
	{
		std::cout << "Error opening file" << std::endl;
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

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
{
	std::ofstream ofs (target.append("_shrubbery").c_str());
	if (!ofs.is_open())
	{
		std::cout << "Error opening file" << std::endl;
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

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	return (*this);
}