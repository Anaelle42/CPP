#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_index = 0;
	std::cout << "PhoneBook has been created" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook has been deleted" << std::endl;
}

void PhoneBook::add()
{
	if (this->_phonebook[this->_index].setContact() == 1)
		return ;
	this->_index = (this->_index + 1) % 8;
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
	if (nb > 0 && nb <= 8 && this->_phonebook[nb -1].checkIfExist())
		this->_phonebook[nb -1].getContact();
	else
		std::cout << "No contact found with this index" << std::endl;
}

void PhoneBook::search()
{
	std::cout << "|     Index| First Name|  Last Name|   Nickname|" << std::endl;
	
	if (this->_phonebook[0].checkIfExist() == 0)
	{	
		std::cout << "The phonebook is empty. Please add a contact first" << std::endl;
		return ;
	}
	for (int i(0); i < 8 && this->_phonebook[i].checkIfExist() != 0; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1 << "| ";
		this->_phonebook[i].getFirstName();
		this->_phonebook[i].getLastName();
		this->_phonebook[i].getNickName();
		std::cout << std::endl;
	}
	
	std::string line;
	if (!std::cin)
		return ;
	std::cout << "Enter the index of the contact to display:" << std::endl;
	std::getline(std::cin, line);
	getInfo(line);
}

