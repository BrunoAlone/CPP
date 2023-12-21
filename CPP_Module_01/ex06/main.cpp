/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:41:59 by bruno             #+#    #+#             */
/*   Updated: 2023/12/21 10:54:01 by brolivei         ###   ########.fr       */
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

	harl.complain(argv[1]);
	return (0);
}
