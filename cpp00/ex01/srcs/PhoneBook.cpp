#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_index = 0;
	std::cout << "PhoneBook has been created" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook has been deleted" << std::endl;
}

void PhoneBook::add()
{
	if (_phonebook[_index].setContact() == 1)
		return ;
	_index = (_index + 1) % 8;
}

void	PhoneBook::getInfo(std::string str)
{
	int nb;

	for (size_t i(0); i < str.length(); i++)
	{
		if (!std::isdigit(str[i])) 
        {
			std::cout << "Invalid index" << std::endl;
			return ;
		}
    }
	nb = atoi(str.c_str());
	if (nb > 0 && nb <= 8 && _phonebook[nb -1].checkIfExist())
		_phonebook[nb -1].getContact();
	else
		std::cout << "No contact found with this index" << std::endl;
}

void PhoneBook::search()
{
	std::cout << "|     Index| First Name|  Last Name|   Nickname|" << std::endl;
	
	if (_phonebook[0].checkIfExist() == 0)
	{	
		std::cout << "The phonebook is empty. Please add a contact first" << std::endl;
		return ;
	}
	for (int i(0); i < 8 && _phonebook[i].checkIfExist() != 0; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1 << "| ";
		_phonebook[i].getFirstName();
		_phonebook[i].getLastName();
		_phonebook[i].getNickName();
		std::cout <<  std::endl;
	}
	
	std::string line;

	for (int i(0); i < 3; i++)
	{
		if (!std::cin)
			break ;
		std::cout << "Enter the index of the contact to display:" << std::endl;
		std::getline(std::cin, line);
		getInfo(line);
	}
}

