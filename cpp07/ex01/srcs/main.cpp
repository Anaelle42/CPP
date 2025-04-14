#include "../includes/Iter.hpp"

int main()
{
	size_t length = 5;

	int tab[length];
	std::string strTab[length];

	for (size_t i = 0; i < length; i++)
	{
		if (i % 2)
			strTab[i] = "au revoir";
		else
			strTab[i] = "hello!";
		tab[i] = i;
	}

	iter(tab, length, print<int>);
	iter(strTab, length, print<std::string>);

	return (0);
}
