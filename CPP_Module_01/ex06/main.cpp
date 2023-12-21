/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:41:59 by bruno             #+#    #+#             */
/*   Updated: 2023/12/21 11:35:10 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "[ Probably complaining about insignificant problems ]\n";
		return (1);
	}
	Harl	harl;

	std::string	str(argv[1]);
	for (int i = 0; str[i]; i++)
	{
		str[i] = std::toupper(str[i]);
	}
	harl.filter(str);
	return (0);
}
