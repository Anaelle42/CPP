#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T, typename F>
void iter(T* array, size_t length, F f)
{
	if (!array || !f)
		return ;
	for (size_t i = 0; i < length; i++)
		f(array[i]);
}

template <typename T>
void print(T var)
{
	std::cout << var << std::endl;
}

#endif