#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <map>
#include <vector>
#include <list>

class NotFindException : public std::exception
{
	public:
		virtual const char* what() const throw();
};

template <typename T>
void easyfind(T tab, int n)
{
	std::vector<int>::const_iterator i;
	std::vector<int>::const_iterator end = tab.end();
			
	for (i = tab.begin(); i != end; i++)
	{
		if (*i == n)
		{
			std::cout << "Find occurence " << *i << std::endl;
			return ;
		}
	}
	throw NotFindException();
}

#endif