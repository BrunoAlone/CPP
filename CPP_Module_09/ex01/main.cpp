/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:37:21 by brolivei          #+#    #+#             */
/*   Updated: 2024/04/05 15:19:46 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

#include <map>
//#include <unordered_map>

struct input_request
{
	std::string	date_;
	std::string	n_coins;
};


int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong args\n";
		return (2);
	}
	// Mapas com o input
	std::map<int, input_request>	input;
	std::ifstream					input_file(argv[1]);

	if (!input_file.is_open())
	{
		std::cout << "Error oppening the file\n";
		return (2);
	}
	std::string	line;
	while (input_file)
	{
		std::getline(input_file, line);
		std::cout << line << std::endl;
	}
	input_file.close();
	return (0);
}
