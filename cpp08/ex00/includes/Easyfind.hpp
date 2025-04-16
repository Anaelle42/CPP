#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm> // std::find

class NotFindException : public std::exception
{
	public:
		virtual const char* what() const throw();
};

template <typename T>
void easyfind(const T& tab, int n)
{
	std::vector<int>::const_iterator it;
	
	it = find(tab.begin(), tab.end(), n);
	if (it != tab.end())
		std::cout << "Element found: " << *it << '\n';
	else
		throw NotFindException();
}

#endif