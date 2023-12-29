/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 13:15:25 by brolivei          #+#    #+#             */
/*   Updated: 2023/12/29 17:37:39 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

/*
			No ex01 é pedido que adicionemos as seguintes funções membro:

				- Constructor que recebe um const int como parametro e converte
			o seu valor para o seu correspondente fixed-point.

				- Constructor que recebe um const float como parametro e converte
			o seu valor para o seu correspondente fixed-point.

				- Uma função membro que converte e retorna o valor do fixed-point
			para o valor floating-point.

				- Uma função membro que converte e retorna o valor do fixed-point
			para int.

			É também pedido que seja adicionada uma função no ficheiro da classe
		que sobrecarregue o operador de inserção (<<). Essa sobrecarga deverá
		inserir a representação em float do numéro de ponto-fixo.
*/

class Fixed
{
private:
	int					value;
	static const int	_fractional = 8;
public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed(const int x);
	Fixed(const float y);
	Fixed	&operator=(const Fixed &other);
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed);

#endif
