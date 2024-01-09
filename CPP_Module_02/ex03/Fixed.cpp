/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:02:01 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/09 15:27:45 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors

Fixed::Fixed()
{
	//std::cout << "Default constructor called\n";
	this->value_ = 0;
}

Fixed::Fixed(const Fixed& other)
{
	//std::cout << "Copy constructor called\n";
	this->value_ = other.getRawBits();
}

Fixed::Fixed(const int x)
{
	//std::cout << "Int constructor called\n";
	this->value_ = x << _fractional;
}

Fixed::Fixed(const float y)
{
	//std::cout << "Float constructor called\n";
	this->value_ = static_cast<int>(roundf(y * (1 << _fractional)));
}

// Operators

Fixed	&Fixed::operator=(const Fixed& other)
{
	//std::cout << "Copy assigment operator called\n";
	if (this != &other)
	{
		this->value_ = other.getRawBits();
	}
	return (*this);
}

//Destructor

Fixed::~Fixed()
{
	//std::cout << "Destructor called\n";
}

// Get and Set

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called\n";
	return (this->value_);
}

void	Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called\n";
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

// Overload the 6 comparison operators

bool	Fixed::operator>(const Fixed& other) const
{
	return (this->value_ > other.value_);
}

bool	Fixed::operator<(const Fixed& other) const
{
	return (this->value_ < other.value_);
}

bool	Fixed::operator>=(const Fixed& other) const
{
	return (this->value_ >= other.value_);
}

bool	Fixed::operator<=(const Fixed& other) const
{
	return (this->value_ <= other.value_);
}

bool	Fixed::operator==(const Fixed& other) const
{
	return (this->value_ == other.value_);
}

bool	Fixed::operator!=(const Fixed& other) const
{
	return (this->value_ != other.value_);
}

// Overload arithmetic operators

Fixed	Fixed::operator+(const Fixed& other) const
{
	Fixed	new_obj;

	new_obj.value_ = this->value_ + other.value_;

	return (new_obj);
}

Fixed	Fixed::operator-(const Fixed& other) const
{
	Fixed	new_obj;

	new_obj.value_ = this->value_ - other.value_;

	return (new_obj);
}

/*
			Operação de multiplicação:

	O uso do cast para long long é para pervenir o overflow durante a
multiplicação!!

	Opós a multiplicação é necessária a divisão por 2^fractional_ para
ajustar o resultado, pois, numa multiplicação com numeros inteiros da
forma comum é necessário esse ajuste.

	Exemplo:

		a * b = (a.fractional * b.fractional) * 2¹⁶

		Com a multiplicação são duplicados os bits para a parte
	decimal, entao é necessario o shifting para voltar ao normal.
*/

Fixed	Fixed::operator*(const Fixed& other) const
{
	Fixed	new_obj;

	new_obj.value_ = (static_cast<long long>(this->value_) * other.value_) >> _fractional;

	return (new_obj);
}

Fixed	Fixed::operator/(const Fixed& other) const
{
	Fixed	new_obj;

	new_obj.value_ = (static_cast<long long>(this->value_) << _fractional) / other.value_;

	return (new_obj);
}

// Overload increment/decrement

Fixed&	Fixed::operator++()
{
	++this->value_;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	result = *this;
	++(*this);
	return (result);
}

Fixed&	Fixed::operator--()
{
	--this->value_;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	result = *this;
	--(*this);
	return (result);
}

// Min and Max functions

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	return ((a.value_ < b.value_) ? a : b);
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	return ((a.value_ < b.value_) ? a : b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	return ((a.value_ > b.value_) ? a : b);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	return ((a.value_ > b.value_) ? a : b);
}
