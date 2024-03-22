/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 10:59:52 by brolivei          #+#    #+#             */
/*   Updated: 2024/03/22 15:22:50 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "Default Constructor called\n\n";
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "Destructor called\n\n";
}

bool	ScalarConverter::checkInPut(const std::string& input)
{
	if (input.length() == 1 && input[0] >= ' ' && input[0] <= '~') // Check if its only a char
		return (true);
	if (input.find_last_of('.') != input.find_first_of('.')) // Check if has more than one decimal point
		return (false);
	if (input[input.length() - 1] == 'f' && input.find('.') != std::string::npos) // Check if the input has one "f" character
	// at the end. Indicating that is a floating point. If its true, we have to do the loop only until that index.
	{
		for (size_t i = 0; i < (input.length() - 1); i++)
		{
			if (input[i] == '-' && i == 0) // If it's negative, only in the first character is accepted the "-"
				continue;
			else if (input[i] == '.') // After verify if it has only one decimal point, we can just pass by the decimal point.
				continue;
			else if (!isdigit(input[i])) // Verify if it's only digits.
				return (false);
		}
	}
	else if (!(input.length() - 1 == 'f')) // Same thing but not counting with an f at the end.
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

// Wich type?

bool			ScalarConverter::isInt(const std::string& input)
{
	if (input.find(".") != std::string::npos)
		return (false);
	return (true);
}

bool			ScalarConverter::isFloat(const std::string& input)
{
	if (input.find("f") == std::string::npos)
		return (false);
	return (true);
}

// Print with different types
void	printChar(long double x)
{
	if (x > std::numeric_limits<char>::max() || x < std::numeric_limits<char>::min())
		std::cout << "Char: Overflow\n";
	else
	{
		char	c = static_cast<char>(x);
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
		int	num = static_cast<int>(x);

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
		float	num = static_cast<float>(x);
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
		double	num = static_cast<double>(x);
		double	intPart;

		if (std::modf(x, &intPart) != 0) // Verify if the decimal part is non 0. That's necessary because we want to print every time
		// the decimal part, even when it's 0.
			std::cout << "Double: " << num << std::endl;
		else
			std::cout << "Double: " << num << ".0" << std::endl;
	}
}

// Conversions

void		ScalarConverter::charConvert(const std::string& input)
{
	char	c;

	c = static_cast<char>(input[0]);

	std::cout << "Char: '" << c << "'\n";
	std::cout << "Int: " << static_cast<int>(c) << "\n";
	std::cout << "Float: " << static_cast<float>(c) << "\n";
	std::cout << "Double: " << static_cast<double>(c) << "\n";
}

void			ScalarConverter::intConvert(const std::string& input)
{
	long double	x = std::strtold(input.c_str(), NULL);

	if (x > std::numeric_limits<int>::max() || x < std::numeric_limits<int>::min())
	{
		std::cout << "Int type detected in the input but it overflows\n\n";
		return ;
	}

	printChar(std::atoi(input.c_str()));
	printInt(std::atoi(input.c_str()));
	printFloat(std::atoi(input.c_str()));
	printDouble(std::atoi(input.c_str()));
}

void			ScalarConverter::floatConvert(const std::string& input)
{
	long double	x = std::strtold(input.c_str(), NULL);

	if (x > std::numeric_limits<float>::max() || x < -std::numeric_limits<float>::max())
	{
		std::cout << "Float type detected in the input but it overflows\n\n";
		return ;
	}

	std::cout << "Test: " << x << std::endl;

	printChar(std::strtol(input.c_str(), NULL, 10));
	printInt(std::strtol(input.c_str(), NULL, 10));
	printFloat(std::strtol(input.c_str(), NULL, 10));
	printDouble(std::strtol(input.c_str(), NULL, 10));
}

void	ScalarConverter::convert(std::string& input)
{
	std::cout << "\t\033[32m--ScalarConverter called: --\033[0m\n\n";

	if (input.empty() || !checkInPut(input)) // If input is empty, its invalid
	{
		std::cout << "\033[33mInvalid Input\033[0m\n\n";
		return ;
	}
	if (input.length() == 1 && input[0] >= ' ' && input[0] <= '~' && !std::isdigit(input[0]))
		charConvert(input);
	if (isInt(input))
		intConvert(input);
	if (isFloat(input))
		floatConvert(input);
}
