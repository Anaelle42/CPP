#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <cstdlib>

class Contact
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;
		int _exist;
		
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