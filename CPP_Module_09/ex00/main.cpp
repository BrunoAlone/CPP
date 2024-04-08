/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:37:21 by brolivei          #+#    #+#             */
/*   Updated: 2024/04/08 13:42:54 by brolivei         ###   ########.fr       */
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

	try {
		BTC		test = BTC(argv[1]);
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}
