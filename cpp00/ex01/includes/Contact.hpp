#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <cstdlib>

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
		int exist;
		
	public:
		Contact();
		~Contact();
		int setContact();
		void getContact() const;
		int checkIfExist() const;
		void getFirstName();
		void getLastName();
		void getNickName();
};

int	checkString(std::string str);

#endif