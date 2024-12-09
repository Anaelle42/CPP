#include "../includes/Contact.hpp"

Contact::Contact()
{
	exist = 0;
}

Contact::~Contact()
{
}

int	checkString(std::string str)
{
	if (!std::cin || str.empty())
	{
		std::cout << "A contact cannot have empty fields" << std::endl;
		return 1;
	}
	for (size_t i(0); i < str.length(); i++)
	{
		if (std::isprint(str[i]) && !std::isspace(str[i])) 
        	return 0;
    }
	std::cout << "A contact cannot have empty fields" << std::endl;
	return 1;
}

int	checkNumber(std::string str)
{
	for (size_t i(0); i < str.length(); i++)
	{
		if (isspace(str[i]))
			i++;
		if (!std::isdigit(str[i])) 
        {
			std::cout << "The phone number must contain only digits" << std::endl;
			return 1;
		}
    }
	return 0;
}

int Contact::setContact()
{
	std::string tmpFirstName;
	std::string tmpLastName;
	std::string tmpNickname;
	std::string tmpPhoneNumber;
	std::string tmpDarkestSecret;

	std::cout << "enter the first name:" << std::endl;
	std::getline(std::cin, tmpFirstName);
	if (checkString(tmpFirstName))
		return 1;
	std::cout << "enter the last name:" << std::endl;
	std::getline(std::cin, tmpLastName);
	if (checkString(tmpLastName))
		return 1;
	std::cout << "enter the nickname:" << std::endl;
	std::getline(std::cin, tmpNickname);
	if (checkString(tmpNickname))
		return 1;
	std::cout << "enter the phone number:" << std::endl;
	std::getline(std::cin, tmpPhoneNumber);
	if (checkString(tmpPhoneNumber) || checkNumber(tmpPhoneNumber))
		return 1;
	std::cout << "enter the darkest secret:" << std::endl;
	std::getline(std::cin, tmpDarkestSecret);
	if (checkString(tmpDarkestSecret))
		return 1;
	
	firstName = tmpFirstName;
	lastName = tmpLastName;
	nickname = tmpNickname;
	phoneNumber = tmpPhoneNumber;
	darkestSecret = tmpDarkestSecret;
	exist = 1;
	return 0;
}

int Contact::checkIfExist() const
{
	return exist;
}

void Contact::getContact() const
{
	std::cout << firstName << std::endl;
	std::cout << lastName << std::endl;
	std::cout << nickname << std::endl;;
	std::cout << phoneNumber << std::endl;
	std::cout << darkestSecret << std::endl;
}

void Contact::getFirstName()
{
	std::string str;

	str = firstName;
	if (str.length() <= 10)
	{
		for (int i(0); str.length() + i < 10; i++)
			std::cout << " ";
		std::cout << str << "| ";
	}
	else
	{
		str.replace(9, 1, ".");
		std::cout << str.substr(0, 10) << "| ";
	}
}

void Contact::getLastName()
{
	std::string str;

	str = lastName;
	if (str.length() <= 10)
	{
		for (int i(0); str.length() + i < 10; i++)
			std::cout << " ";
		std::cout << str << "| ";
	}
	else
	{
		str.replace(9, 1, ".");
		std::cout << str.substr(0, 10) << "| ";
	}
}

void Contact::getNickName()
{
	std::string str;

	str = nickname;
	if (str.length() <= 10)
	{
		for (int i(0); str.length() + i < 10; i++)
			std::cout << " ";
		std::cout << str << "| ";
	}
	else
	{
		str.replace(9, 1, ".");
		std::cout << str.substr(0, 10) << "| ";
	}
}
