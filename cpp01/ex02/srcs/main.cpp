#include <iostream>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "Memory adress of the string:     " << &string << std::endl;
	std::cout << "Memory adress held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory adress held by stringREF: " << &stringREF << std::endl;
	std::cout << std::endl;

	std::cout << "Value of the string:           " << string << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

	return 0;
}