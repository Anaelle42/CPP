#include "../includes/PhoneBook.hpp"

int main()
{
	PhoneBook phonebook;
	std::string line;

	while (std::cin)
	{
		std::cout << "> ";
		std::getline(std::cin, line);
		if (line.compare("ADD") == 0)
			phonebook.add();
		else if (line.compare("SEARCH") == 0)
			phonebook.search();
		else if (line.compare("EXIT") == 0)
			break;
		else
			std::cout << "Please use one of the following commands: ADD, SEARCH, or EXIT" << std::endl;
	}
	
	return 0;
}