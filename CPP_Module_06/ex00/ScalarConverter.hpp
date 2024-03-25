/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:31:59 by bruno             #+#    #+#             */
/*   Updated: 2024/03/25 16:33:26 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#include <sstream>
#include <cmath>
#include <cctype>

class	ScalarConverter
{
	private:
		enum SpecialCase
		{
			NINFF,
			PINFF,
			NINF,
			PINF,
			NAN_, // O "_" no fim é porque "NAN" entra em conflito com a biblioteca cmath
			INVALID
		};

		// Constructor in private so the class to prevent instantiation
		// Force the use as we want
		ScalarConverter();
		~ScalarConverter();

		static SpecialCase	checkSpecialCase(std::string& input);
		static void			manipulateSpecial(SpecialCase special, const std::string& input);
		static bool			checkInPut(const std::string& input);
		static bool			isInt(const std::string& input);
		static bool			isFloat(const std::string& input);

		static void			charConvert(const std::string& input);
		static void			intConvert(const std::string& input);
		static void			floatConvert(const std::string& input);
		static void			doubleConvert(const std::string& input);

	public:
		// Static keyword allow to use the function without the need of instantiate an obj
		static void	convert(std::string& input);
};

#endif
