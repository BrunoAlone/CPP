/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:35:01 by brolivei          #+#    #+#             */
/*   Updated: 2023/12/05 14:27:55 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook()
{
	NumberOfContacts = 0;
}

void	PhoneBook::AddContact(const Contact &NewContact)
{
	if (NumberOfContacts == 8)
	{
		int	oldest;

		oldest = 0;
		for (int i = 0; i < 8; ++i)
		{
			if (Contacts[oldest].GetDate() > Contacts[i].GetDate())
				oldest = i;
		}
		Contacts[oldest] = NewContact;
	}
	else
	{
		Contacts[NumberOfContacts] = NewContact;
		NumberOfContacts++;
	}
}

std::string	PhoneBook::truncString(std::string input, size_t max)
{
	if (input.size() > max)
		return (input.substr(0, max - 1) + ".");
	return (input);
}

int	AllDigit(std::string input)
{
	for (size_t i = 0; i < input.size(); i++)
	{
		if (!std::isdigit(input[i]))
			return (0);
	}
	return (1);
}

void	PhoneBook::PrintContacts()
{
	int	index;
	std::string	selected;

	index = 0;
	for (int i = 0; i < NumberOfContacts; ++i)
	{
		std::cout << std::setw(10) << index << " | ";
		std::cout << std::setw(10) << truncString(Contacts[i].GetFirstName(), 10) << "|";
		std::cout << std::setw(10) << truncString(Contacts[i].GetLastName(), 10) << "|";
		std::cout << std::setw(10) << truncString(Contacts[i].GetNickName(), 10) << "|" << std::endl;
		index++;
	}
	std::cout << "Enter the index of the contact you want to see: ";
	std::cin >> selected;

	if (AllDigit(selected) == 1)
	{
		int	selectedIndex;

		selectedIndex = std::atoi(selected.c_str()); // c_tr return a pointer to the string
		if (selectedIndex >= 0 && selectedIndex < NumberOfContacts)
		{
			std::cout << "First Name: " << Contacts[selectedIndex].GetFirstName() << std::endl;
			std::cout << "Last Name: " << Contacts[selectedIndex].GetLastName() << std::endl;
			std::cout << "Nickname: " << Contacts[selectedIndex].GetNickName() << std::endl;
			std::cout << "Phone Number: " << Contacts[selectedIndex].GetPhoneNumber() << std::endl;
			std::cout << "DarkestSecret: " << Contacts[selectedIndex].GetDarkestSecret() << std::endl;
		}
		else
		{
			std::cout << "Invalid Index. Try again!" << std::endl;
		}
	}
	else
		std::cout << "The index need to be a digit!" << std::endl;
}
