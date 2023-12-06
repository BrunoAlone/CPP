/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InitialPrompt.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:19:02 by brolivei          #+#    #+#             */
/*   Updated: 2023/12/05 13:59:09 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "InitialPrompt.hpp"

/*
		ANSI code:

			\033:[1;31m

			1;31m: These are parameters for the escape code.
				- 1 is for bold.
				- 31 is for text color red.
*/

void	InitialPrompt::writePromptInit()
{
	PromptInit = "\n\n			WELL COME TO THE AWESOME PHONEBOOK\n\n";
	for (size_t i = 0; i < PromptInit.size(); ++i)
	{
		std::cout << "\033[1;31m";
		//std::cout << "\033[5m";
		std::cout << PromptInit[i] << std::flush; // flush, para que seja imediatamente escrito na tela antes de ser alocado noutro espaco de memoria ou que espere gatilhos de escrita como a newline
		std::cout << "\033[0m";
		clock_t	start_time = clock(); // clock() return the current time.
		while (clock() < start_time + CLOCKS_PER_SEC / 20) {} // Creating a time delay of 1/20 o fa second
	}
}

void	InitialPrompt::writeRules()
{
	std::cout << "\033[1m";
	std::cout << "	COMMANDS OF YOUR PHONEBOOK:\n";
	std::cout << "\033[0m";
	std::cout << "		ADD:\n";
	std::cout << "			Save a new contact.\n\n";
	std::cout << "		SEARCH:\n";
	std::cout << "			Display a specific contact.\n\n";
	std::cout << "		EXIT:\n";
	std::cout << "			Exit the program.\n\n";
}
