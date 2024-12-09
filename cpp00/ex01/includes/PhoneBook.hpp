#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact _phonebook[8];
		int _index;

	public:
		PhoneBook();
		~PhoneBook();
		void add();
		void search();
};

#endif