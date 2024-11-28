#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <cstdlib>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		int exist;
		
	public:
		Contact();
		~Contact();
		int setContact();
		void getContact();
		int checkExist();
		void getFirstName();
		void getLastName();
		void getNickName();
};


#endif