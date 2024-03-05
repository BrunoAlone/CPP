/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:30:11 by bruno             #+#    #+#             */
/*   Updated: 2024/03/05 14:38:37 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	std::string	input;
	//double	x = 42.5;

	if (argc == 2)
	{
		input = argv[1];

		ScalarConverter::convert(input);
	}
	//std::cout << int (x) << std::endl;
	//std::cout << float (x) << std::endl;
	//std::cout << char (x) << std::endl;
	return (0);
}
