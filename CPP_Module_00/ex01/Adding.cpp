/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Adding.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:11:24 by brolivei          #+#    #+#             */
/*   Updated: 2023/12/21 16:43:29 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Adding.hpp"

std::string	Adding::addText(std::string msg)
{
	while (1)
	{
		std::cout << msg;
		if(!std::getline(std::cin, input))
			break; // This handle has to be review!
		if (input.empty())
			std::cout << "You didn't enter anything." << std::endl;
		else
			break;
	}
	return (input);
}

std::string	Adding::addNumber()
		{
			while (1)
			{
				input = addText("Phone Number: ");
				bool	isNumber = true;
				for (size_t i = 0; i < input.size(); ++i)
				{
					if (!std::isdigit(input[i]))
					{
						std::cout << "The phone number must contain only digits.\n";
						isNumber = false;
						break;
					}
				}
				if (isNumber)
					break;
			}
			return (input);
		}
