/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:52:19 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/11 10:56:46 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

/*
			Está classe está escrita na forma canónica
		como é especificado no subject.

			Nos seu membros privados tem dois objetos privados
		Fixed, que serão as duas coordenadas dos ponto (x, y).

			Tem um default constructor que inicializa as coordenadas
		a 0.

			Um constructor que recebe dois floating point numbers
		e inicializa o x e y com eles.

			Um copy constructor, que cria uma copia de um objeto Point ja existente.

			Um copy assignment operator overload, que iguala um objeto
		já existente a outro.

			Um default destructor.

			Dois getter, um para X e outro para Y.
*/

class	Point
{
	private:
		const Fixed	x_;
		const Fixed	y_;
	public:
		Point();
		Point(const Fixed x, const Fixed y);
		Point(const Point &other);
		Point&	operator=(const Point &other);
		~Point();

		// Get
		Fixed	getX() const;
		Fixed	getY() const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
