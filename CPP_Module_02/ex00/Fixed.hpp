/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 11:13:36 by bruno             #+#    #+#             */
/*   Updated: 2023/12/29 17:15:29 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

/*
			Neste primeiro exercicio do modulo 02 é pedido que criemos uma classe
		da forma canónica.

			Uma classe escrita de forma canónica contém sempre as seguintes caracteristicas:

				- "Default constructor" : Inicializa o objeto de forma padrão.

				- "Copy constructor" : Constructor chamado quando é criado um objeto
				que será a copia de um objeto já criado. O seu proposito é criar um
				objeto usando os valores de um objeto já existente do mesmo tipo.

				- "Copy assignemnt operator" : Usado para copiar os valores de um objeto
				para outro do mesmo tipo já existente. É chamado quando usamos o sinal
				de atribuição (=) entre dois objetos do mesmo tipo.

				- "Destructor".
*/

class	Fixed
{
	private:
		int					value; // Intenger to store a fixed-point number value
		static const int	fractional = 8; // Number of fractional bits.
	public:
		Fixed(); // Default constructor that initializes the fixed-point number value to 0.
		Fixed(const Fixed &other); // Copy constructor
		Fixed	&operator=(const Fixed &other); // Copy assignment operator overload
		~Fixed(); // Destructor
		int		getRawBits(void) const; // Return the raw value of the fixed-point value.
		void	setRawBits(int const raw); // Set the raw value of the fixed-point number
};

#endif
