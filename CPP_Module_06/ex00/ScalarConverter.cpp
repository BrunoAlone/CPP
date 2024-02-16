/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:40:07 by bruno             #+#    #+#             */
/*   Updated: 2024/02/16 16:29:34 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool	allDigit(std::string& input)
{
	bool	hasDecimalPoint = false;

	for (int i = 0; input[i]; i++)
	{
		if ((input[i] == '-') && (i == 0))
			i++;
		else if ((input[i] == '.') && (i > 0) && (input[i + 1] != '\0'))
		{
			hasDecimalPoint = true;
			i++;
		}
		else if ((input[i] == 'f') && (i > 0) && (input[i + 1] == '\0') &&
					hasDecimalPoint)
			i++;
		else if (!std::isdigit(input[i]))
			return (false);
	}
	return (true);
}

void	convertChar(std::string& input)
{
	int		x;
	char	c;

	x = std::atoi(input.c_str());

	if (x < 33 || x > 126)
	{
		std::cout << "\033[33mChar: Non displayable char\033[0m\n";
		return;
	}
	else
	{
		c = static_cast<char>(x);
		std::cout << "Char: " << c << std::endl;
	}
}

void	convertInt(std::string& input)
{
	char	*endptr;
	long int	x = std::strtol(input.c_str(), &endptr, 10);

	// Conversion errors or overflows
	if (*endptr != '\0')
		std::cout << "\033[33mError: error on strtol()\033[0m\n\n";
	else if (x > std::numeric_limits<int>::max() ||
				x < std::numeric_limits<int>::min())
	{
		std::cout << "int: impossible\n";
	}
	else
	{
		int	out = static_cast<int>(x);
		std::cout << "Int: " << out << std::endl;
	}
}

void	ScalarConverter::convert(std::string& input)
{
	std::cout << "\t\033[32m--ScalarConverter called: --\033[0m\n\n";

	if (input.empty() || !allDigit(input))
	{
		std::cout << "\033[33mInvalid Input\033[0m\n\n";
		return ;
	}
	convertChar(input);
	convertInt(input);

}
