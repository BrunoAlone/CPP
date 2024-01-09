/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:53:44 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/09 13:39:14 by brolivei         ###   ########.fr       */
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

		// Copy assignment operator
		Fixed	&operator=(const Fixed& other);

		// Destructor
		~Fixed();

		// Get and set
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		// Conversion of Fixed point to readable value
		float	toFloat(void) const;
		int		toInt(void) const;

		// Overload the 6 comparison operators

		bool	operator>(const Fixed& other) const;
		bool	operator<(const Fixed& other) const;
		bool	operator>=(const Fixed& other) const;
		bool	operator<=(const Fixed& other) const;
		bool	operator==(const Fixed& other) const;
		bool	operator!=(const Fixed& other) const;

		// Overload arithmetic operators

		Fixed	operator+(const Fixed& other) const;
		Fixed	operator-(const Fixed& other) const;
		Fixed	operator*(const Fixed& other) const;
		Fixed	operator/(const Fixed& other) const;

		// Overload increment/decrement

		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);

		static Fixed&	min(Fixed& a, Fixed& b);
		static const Fixed&	min(const Fixed& a, const Fixed& b);
		static Fixed&	max(Fixed& a, Fixed& b);
		static const Fixed&	max(const Fixed& a, const Fixed& b);
};

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed);

#endif
