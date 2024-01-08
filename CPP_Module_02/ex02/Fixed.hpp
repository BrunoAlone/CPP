/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:53:44 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/08 16:01:44 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int			value_;
		static const int	_fractional = 8;
	public:
		Fixed();
		Fixed(const Fixed &other);

		// Conversion constructor to Fixed point value
		Fixed(const int x);
		Fixed(const float y);

		// Operator
		Fixed	&operator=(const Fixed &other);

		// Destructor
		~Fixed();

		// Get and set
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		// Conversion of Fixed point to readable value
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed);

#endif
