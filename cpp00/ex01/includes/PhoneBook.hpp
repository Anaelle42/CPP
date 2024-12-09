#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact phonebook[8];
		int index;

	public:
		PhoneBook();
		~PhoneBook();
		void add();
		void search();
};

#endif