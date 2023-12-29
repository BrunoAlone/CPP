/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 13:20:05 by brolivei          #+#    #+#             */
/*   Updated: 2023/12/29 14:52:52 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->value = 0;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called\n";
	this->value = other.getRawBits();
}

Fixed::Fixed(const int x)
{
	std::cout << "Converting int to fixed-point value\n";
	this->value = x << _fractional;
}

Fixed::Fixed(const float y)
{
	std::cout << "Converting float to fixed-point value\n";
	this->value = static_cast<int>(roundf(y * (1 << _fractional)));
}

Fixed	&Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assigment operator called\n";
	if (this != &other)
	{
		this->value = other.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->value = raw;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->value) / (1 << _fractional));
}

int		Fixed::toInt(void) const
{
	return (this->value >> _fractional);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed)
{
	float	floatValue = fixed.toFloat();

	os << floatValue;

	return (os);
}
