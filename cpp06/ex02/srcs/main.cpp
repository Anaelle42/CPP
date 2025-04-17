#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"

Base * generate(void)
{
	int randomNum = rand() % 3;
	if (!randomNum)
		return (new A);
	if (randomNum == 1)
		return (new B);
	else
		return (new C);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;

	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;

	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e)
	{}

	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::exception &e)
	{}

	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::exception &e)
	{}
}

int main()
{
	srand(time(0));

	Base *base = generate();
	identify(base);
	identify(*base);

	std::cout << std::endl;
	Base *base2 = generate();
	identify(base2);
	identify(*base2);

	std::cout << std::endl;
	Base *base3 = generate();
	identify(base3);
	identify(*base3);

	delete base;
	delete base2;
	delete base3;
	
	return (0);
}