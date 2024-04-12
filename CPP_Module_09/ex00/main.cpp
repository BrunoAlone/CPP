/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:37:21 by brolivei          #+#    #+#             */
/*   Updated: 2024/04/12 14:14:27 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>

#include <map>
//#include <unordered_map>

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong args\n";
		return (2);
	}
	BTC	btc;
	std::string	input(argv[1]);

	try {
		btc.performTask(input);
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}
