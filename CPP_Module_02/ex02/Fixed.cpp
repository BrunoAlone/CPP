/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:02:01 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/08 17:01:22 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->value_ = 0;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called\n";
	this->value_ = other.getRawBits();
}

Fixed::Fixed(const int x)
{
	std::cout << "Int constructor called\n";
	this->value_ = x << _fractional;
}

Fixed::Fixed(const float y)
{
	std::cout << "Float constructor called\n";
	this->value_ = static_cast<int>(roundf(y * (1 << _fractional)));
}

// Operators

Fixed	&Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assigment operator called\n";
	if (this != &other)
	{
		this->value_ = other.getRawBits();
	}
	return (*this);
}

//Destructor

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

// Get and Set

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->value_);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->value_ = raw;
}

// Conversion of Fixed Point to readable value

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->value_) / (1 << _fractional));
}

int	Fixed::toInt(void) const
{
	return (this->value_ >> _fractional);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed)
{
	float	floatValue = fixed.toFloat();

	os << floatValue;

	return (os);
}
