/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 11:05:33 by bruno             #+#    #+#             */
/*   Updated: 2024/01/15 10:42:11 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
				Fixed::Fixed()


		Este será o nosso "contructor".

		Como é pedido no exercício inicializa a variavél "value" a 0.
*/

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->value = 0;
}

/*

				Fixed::Fixed(const Fixed &other)

		Aqui temos o nosso "copy constructor".

		A sua sintax é: ClassName(const ClassName& other);

		"other" é o objeto que queremos copiar, e o "copy constructor"
	é responsável por criar o novo objeto que será uma copia do "other".

*/

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called\n";
	this->value = other.getRawBits();
}

/*
					Fixed	&Fixed::operator=(const Fixed &other)

			Aqui temos o nosso "Copy assignment Operator"

			Retorna uma referencia para o objeto modificado.

			(sobreposição de operador explicado no exercício seguinte)
*/

// Fixed	&Fixed::operator=(const Fixed &other) = default; -> possivel com c++11
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
