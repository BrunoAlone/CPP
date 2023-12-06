#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <ctime>

class	Contact
{
	private:
		long		DateOfCreation;
		std::string	FirstName;
		std::string	LastName;
		std::string	Nickname;
		std::string	PhoneNumber;
		std::string	DarkestSecret;
	public:
		Contact();
		Contact(std::string First, std::string Last, std::string Nick,
				std::string Phone, std::string Darkest);
		std::string	GetFirstName();
		std::string	GetLastName();
		std::string	GetNickName();
		std::string	GetPhoneNumber();
		std::string	GetDarkestSecret();
		long		GetDate();
};

#endif
