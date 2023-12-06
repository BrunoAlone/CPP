/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:04:58 by brolivei          #+#    #+#             */
/*   Updated: 2023/10/23 14:48:12 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Adding.hpp"
#include "InitialPrompt.hpp"
#include "Contact.hpp"
#include "Phonebook.hpp"
#include "Rules.hpp"

int	main()
{
	PhoneBook		PhoneBookList;
	Rules			rules;
	InitialPrompt	prompt;
	Adding			add;
	std::string		data[5];
	std::string		input;


	prompt.writePromptInit();
	prompt.writeRules();
	while (1)
	{
		std::cout << "Phonebook > ";
		if(!std::getline(std::cin, input))
			break;
		for (size_t i = 0; i < input.size(); ++i)
			input[i] = std::toupper(input[i]);
		if (rules.getAdd().compare(input) == 0)
		{
			data[0] = add.addText("First Name: ");
			data[1] = add.addText("Last Name: ");
			data[2] = add.addText("Nickname: ");
			data[3] = add.addNumber();
			data[4] = add.addText("Darkest Secret: ");
			Contact	Obj(data[0], data[1], data[2], data[3], data[4]);
			PhoneBookList.AddContact(Obj);
			std::cout << "Contact Added with success!\n";
		}
		else if (rules.getExit().compare(input) == 0)
		{
			std::cout << "Goodbye!\n";
			break;
		}
		else if (rules.getSearch().compare(input) == 0)
		{
			PhoneBookList.PrintContacts();
			std::cin.clear();
			std::cin.ignore();
		}
		else
			std::cout << "Command not found\n";
	}
	return (0);
}
