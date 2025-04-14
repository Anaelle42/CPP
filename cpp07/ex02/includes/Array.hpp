#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		T* _array;
		int _size;

	public:
		Array() : _size(1)
		{
			this->_array = new T[1];
		}

		Array(unsigned int n) : _size(n)
		{
			this->_array = new T[n];
		}

		Array(const Array& other) : _size(other._size)
		{
			this->_array = new T[other._size];
			for (int i = 0; i < other._size; i++)
				this->_array[i] = other._array[i];
		}

		Array& operator=(const Array& other)
		{
			if (*this != other)
			{
				this->_size = other._size;
				delete[] this->_array;
				this->_array = new T[this->_size];
				for (int i = 0; i < this->_size; i++)
					this->_array[i] = other._array[i];
			}
			return (this);
		}

		T& operator[](int index)
		{
			if (index < 0 || index >= size())
				throw Array::BadIndexException();
			return (this->_array[index]);
		}

		~Array()
		{
			delete[] this->_array;
		}

		class BadIndexException : public std::exception
		{
			public:
				virtual const char* what() const throw(){
					return ("Index is out of bounds");
				}
		};

		int size()
		{
			return (this->_size);
		}
};

#endif