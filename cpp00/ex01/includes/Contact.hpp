#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <cstdlib>
# include	<iomanip>

class Contact
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;
		bool _exist;
		
	public:
		Contact();
		~Contact();
		int setContact();
		void getContact() const;
		bool checkIfExist() const;
		void getFirstName();
		void getLastName();
		void getNickName();
};

int	checkString(std::string str);

#endif