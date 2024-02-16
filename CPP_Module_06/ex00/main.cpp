/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:30:11 by bruno             #+#    #+#             */
/*   Updated: 2024/02/16 14:46:41 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	std::string	input;

	if (argc == 2)
	{
		input = argv[1];

		ScalarConverter::convert(input);
	}
	return (0);
}
