#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact _phonebook[8];
		bool _index;

	public:
		PhoneBook();
		~PhoneBook();
		void add();
		void search();
		void	getInfo(std::string str);
};

#endif