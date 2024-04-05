/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:37:21 by brolivei          #+#    #+#             */
/*   Updated: 2024/04/05 16:36:12 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>

#include <map>
//#include <unordered_map>

struct input_request
{
	std::string	date_;
	double		n_coins;
};


int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong args\n";
		return (2);
	}
	// Mapas com o input
	std::map<std::string, input_request>	input;
	std::ifstream					input_file(argv[1]);

	if (!input_file.is_open())
	{
		std::cout << "Error oppening the file\n";
		return (2);
	}
	std::string	line;
	while (std::getline(input_file, line))
	{
		std::istringstream	iss(line);
		std::string			dateStr, valueStr;
		if (std::getline(iss, dateStr, '|') && std::getline(iss, valueStr, '|'))
		{
			input_request	data;
			data.date_	= dateStr;
			try
			{
				data.n_coins = std::strtod(valueStr.c_str(), NULL);
				input[dateStr] = data;
			}
			catch(const std::exception& e)
			{
				std::cerr << "Invalid value: " << valueStr << '\n';
			}

		}
	}

	for (std::map<std::string, input_request>::iterator it = input.begin(); it != input.end(); it++)
	{
		std::cout << it->first << it->second.date_ << "|" << it->second.n_coins << std::endl;
	}

	input_file.close();
	return (0);
}
