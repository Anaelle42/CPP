#include "../includes/Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug()
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL burger.";
	std::cout << std::endl << std::endl;
}

void Harl::info()
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "You didn’t put enough bacon in my burger!";
	std::cout << std::endl << std::endl;
}

void Harl::warning()
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << std::endl << std::endl;
}

void Harl::error()
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now.";
	std::cout << std::endl << std::endl;
}

void Harl::complain(std::string level)
{
	std::string tab[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*ftab[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++)
	{
		if (!level.compare(tab[i]))
		{
			(this->*ftab[i])();
			return ;
		}
	}
	std::cout << "[Probably complaining about insignificant problems]" << std::endl << std::endl;
}