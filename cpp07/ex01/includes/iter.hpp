#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T, typename U, typename V>

void iter(T* array, U length, V (*f)(T))
{
	for (U i = 0; i < length; i++)
		f(array[i]);
}

template <typename T>

void print(T var)
{
	std::cout << var << std::endl;
}

#endif