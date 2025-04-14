#include "../includes/Whatever.hpp"

int main()
{
	int a = 2;
	int b = 98;

	swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min: " << min(a, b) << std::endl;
	std::cout << "max: " << max(a, b) << std::endl << std::endl;

	std::string c = "hello World!";
	std::string d = "bonjour Monde!";

	swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min: " << ::min(c, d) << std::endl;
	std::cout << "max: " << ::max(c, d) << std::endl;

	return (0);
}