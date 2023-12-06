/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:14:51 by brolivei          #+#    #+#             */
/*   Updated: 2023/12/05 15:29:45 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	DateOfCreation = 0;
	FirstName = "";
	LastName = "";
	Nickname = "";
	PhoneNumber = "";
	DarkestSecret = "";
}

Contact::Contact(std::string First, std::string Last, std::string Nick,
				std::string Phone, std::string Darkest)
{
		std::time_t	time = std::time(0);

		DateOfCreation = static_cast<long>(time);
		FirstName = First;
		LastName = Last;
		Nickname = Nick;
		PhoneNumber = Phone;
		DarkestSecret = Darkest;
}

std::string	Contact::GetFirstName()
{
	return (FirstName);
}
std::string	Contact::GetLastName()
{
	return (LastName);
}
std::string	Contact::GetNickName()
{
	return (Nickname);
}
std::string	Contact::GetPhoneNumber()
{
	return (PhoneNumber);
}
std::string	Contact::GetDarkestSecret()
{
	return (DarkestSecret);
}
long	Contact::GetDate()
{
	return (DateOfCreation);
}
