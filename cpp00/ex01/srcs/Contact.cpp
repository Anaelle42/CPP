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
		return 1;
	for (size_t i(0); i < str.length(); i++)
	{
		if (std::isprint(str[i]) && !std::isspace(str[i])) 
        	return 0;
    }
	return 1;
}

int Contact::setContact()
{
	std::string tmp_first_name;
	std::string tmp_last_name;
	std::string tmp_nickname;
	std::string tmp_phone_number;
	std::string tmp_darkest_secret;

	std::cout << "enter the first name:" << std::endl;
	std::getline(std::cin, tmp_first_name);
	if(checkString(tmp_first_name))
		return (1);
	std::cout << "enter the last name:" << std::endl;
	std::getline(std::cin, tmp_last_name);
	if(checkString(tmp_last_name))
		return (1);
	std::cout << "enter the nickname:" << std::endl;
	std::getline(std::cin, tmp_nickname);
	if(checkString(tmp_nickname))
		return (1);
	std::cout << "enter the phone number:" << std::endl;
	std::getline(std::cin, tmp_phone_number);
	if(checkString(tmp_phone_number))
		return (1);
	std::cout << "enter the darkest secret:" << std::endl;
	std::getline(std::cin, tmp_darkest_secret);
	if(checkString(tmp_darkest_secret))
		return (1);
	
	first_name = tmp_first_name;
	last_name = tmp_last_name;
	nickname = tmp_nickname;
	phone_number = tmp_phone_number;
	darkest_secret = tmp_darkest_secret;
	exist = 1;
	return (0);
}

int Contact::checkIfExist() const
{
	if (exist == 1)
		return (0);
	else
		return (1);
}

void Contact::getContact() const
{
	std::cout << first_name << std::endl;
	std::cout << last_name << std::endl;
	std::cout << nickname << std::endl;;
	std::cout << phone_number << std::endl;
	std::cout << darkest_secret << std::endl;
}

void Contact::getFirstName()
{
	if (first_name.length() <= 10)
	{
		for (int i(0); first_name.length() + i < 10 ; i++)
			std::cout << " ";
		std::cout << first_name << "| ";
	}
	else
	{
		first_name.replace(9, 1, ".");
		std::cout << first_name.substr(0, 10) << "| ";
	}
}

void Contact::getLastName()
{
	if (last_name.length() <= 10)
	{
		for (int i(0); last_name.length() + i < 10 ; i++)
			std::cout << " ";
		std::cout << last_name << "| ";
	}
	else
	{
		last_name.replace(9, 1, ".");
		std::cout << last_name.substr(0, 10) << "| ";
	}
}

void Contact::getNickName()
{
	if (nickname.length() <= 10)
	{
		for(int i(0); nickname.length() + i < 10 ; i++)
			std::cout << " ";
		std::cout << nickname << "| ";
	}
	else
	{
		nickname.replace(9, 1, ".");
		std::cout << nickname.substr(0, 10) << "| ";
	}
}
