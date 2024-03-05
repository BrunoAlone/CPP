/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:40:07 by bruno             #+#    #+#             */
/*   Updated: 2024/03/05 15:38:42 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool	checkInPut(const std::string& input)
{
	if (input.length() == 1 && input[0] >= ' ' && input[0] <= '~')
		return (true);
	if (input.find_last_of('.') != input.find_first_of('.'))
		return (false);
	if (input[input.length() - 1] == 'f' && input.find('.') != std::string::npos)
	{
		for (size_t i = 0; i < (input.length() - 1); i++)
		{
			if (input[i] == '-' && i == 0)
				continue;
			else if (input[i] == '.')
				continue;
			else if (!isdigit(input[i]))
				return (false);
		}
	}
	else if (!(input.length() - 1 == 'f'))
	{
		for (size_t i = 0; i < (input.length()); i++)
		{
			if (input[i] == '-' && i == 0)
				continue;
			else if (input[i] == '.')
				continue;
			else if (!isdigit(input[i]))
				return (false);
		}
	}
	return (true);
}

ScalarConverter::SpecialCase	ScalarConverter::checkSpecialCase(std::string& input)
{
	if (input == "nan")
		return NAN_;
	else if (input == "+inf")
		return PINF;
	else if (input == "-inf")
		return NINF;
	else if (input == "+inff")
		return PINFF;
	else if (input == "-inf")
		return NINFF;
	else
		return INVALID;
}

void	ScalarConverter::manipulateSpecial(SpecialCase special, const std::string& input)
{
	if (special == INVALID)
	{
		std::cout << "\033[33mInvalid Input\033[0m\n\n";
		return ;
	}
	std::cout << "Char: Impossible\n";
	std::cout << "Int: Impossible\n";

	if (special == NAN_)
	{
		std::cout << "Float: nanf\n";
		std::cout << "Double: nan\n";
	}
	else if (special != INVALID)
	{
		std::cout << "Float: " << input[0] << "inff\n";
		std::cout << "Double: " << input[0] << "inf\n";
	}
}

void	printChar(const long double x)
{
	if (x > std::numeric_limits<char>::max() || x < std::numeric_limits<char>::min())
		std::cout << "Char: Overflow\n";
	else
	{
		char	c = char (x);

		if (std::isprint(c))
			std::cout << "Char: '" << c << "'\n";
		else
			std::cout << "Char: Non displayable\n";
	}
}

void	printInt(const long double x)
{
	if (x > std::numeric_limits<int>::max() || x < std::numeric_limits<int>::min())
		std::cout << "Int: Overflow\n";
	else
	{
		int	num = int (x);

		std::cout << "Int: " << num << std::endl;
	}
}

void	printFloat(const long double x)
{
	// The number std::numeric_limits<float>::min() its not negative!!!!!
	// So, if we want to check negative limit we have to use de max and convert it
	// to negativo.

	// Other wise, not even the 0 will be print...
	// std::numeric_limits<float>::min() = 1.17549e⁻38 (Not negative and higher than 0)
	if (x > std::numeric_limits<float>::max() || x < -std::numeric_limits<float>::max())
		std::cout << "Float: Overflow\n";

	else
	{
		float	num = float (x);
		double	intPart;

		if (std::modf(x, &intPart) != 0) // Verify if the fractional part in non 0.
			std::cout << "Float: " << num << "f\n";
		else
			std::cout << "Float: " << num << ".0f\n";
	}
}

void	printDouble(const long double x)
{
	if (x > std::numeric_limits<double>::max() || x < -std::numeric_limits<double>::max())
		std::cout << "Double: Overflow\n";

	else
	{
		double	num = double (x);
		double	intPart;

		if (std::modf(x, &intPart) != 0)
			std::cout << "Double: " << num << std::endl;
		else
			std::cout << "Double: " << num << ".0" << std::endl;
	}
}

void	printTypes(const long double x)
{
	printChar(x);
	printInt(x);
	printFloat(x);
	printDouble(x);
}

void	ScalarConverter::convert(std::string& input)
{
	std::cout << "\t\033[32m--ScalarConverter called: --\033[0m\n\n";

	if (input.empty())
	{
		std::cout << "\033[33mInvalid Input\033[0m\n\n";
		return ;
	}
	if (checkInPut(input))
	{
		printTypes(std::strtod(input.c_str(), NULL));
	}
	else
	{
		SpecialCase	special = checkSpecialCase(input);

		manipulateSpecial(special, input);
	}
}
