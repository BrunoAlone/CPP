/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:16:50 by brolivei          #+#    #+#             */
/*   Updated: 2023/12/12 15:32:34 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Replace.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Invalid arguments.\n\n";
		std::cout << "Way to use:\n\n";
		std::cout << "	./name_of_the_programa <filename> <s1> <s2>\n";
		return (0);
	}

	Replace	newFile(argv[1], argv[2], argv[3]);
	newFile.replaceFile();
	return (0);
}
