#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact	Contacts[8];
		int		NumberOfContacts;

	public:
		PhoneBook();
		void				AddContact(const Contact &NewContact);
		static std::string	truncString(std::string input, size_t max);
		void				PrintContacts();
};

#endif
