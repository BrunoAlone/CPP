/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:31:59 by bruno             #+#    #+#             */
/*   Updated: 2024/03/05 15:17:38 by bruno            ###   ########.fr       */
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
	public:
		static void	convert(std::string& input);

		static SpecialCase	checkSpecialCase(std::string& input);
		static void	manipulateSpecial(SpecialCase special, const std::string& input);
};

#endif
