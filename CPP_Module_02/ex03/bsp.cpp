/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:58:11 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/15 12:29:28 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

	// Area do triangulo dados os seus vartices:
	// Dados os pontos A(x1, y1), B(x2, y2) e C(x3, y3)

	// A = 1/2(mod(x1(y2-y3) + x2(y3-y1) + x3(y1-y2)))

Fixed	areaCalculation(Point const a, Point const b, Point const c)
{
	Fixed	result;

	result = (a.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - a.getY()))
	+ (c.getX() * (a.getY() - b.getY()));

	result = result * Fixed(0.5f);

	return (result);
}

/*
			Um ponto está contido em um segmento de reta se obedecer aos
		seguintes parametro:

			Existindo um segmento AB, e um ponto P(x, y):

			1 º: Xp pertence ao intervalo de [Xa, Xb];
			2 º: Yp pertence ao intervalo de [Ya, Yb];
			3 º: Yp - Ya = ((Yb - Ya) / (Xb - Xa)) * (Xp - Xa)

			Cumprindo todos estes parametros o ponto P pertence ao segmento de reta
		AB.
*/

bool	checkPointInSeg(Point const a, Point const b, Point const p)
{
	int	control = 0;
	Fixed	minY = Fixed::min(a.getY(), b.getY());
	Fixed	maxY = Fixed::max(a.getY(), b.getY());
	Fixed	minX = Fixed::min(a.getX(), b.getX());
	Fixed	maxX = Fixed::max(a.getX(), b.getX());

	if (p.getX() >= minX && p.getX() <= maxX)
		control++;
	if (p.getY() >= minY && p.getY() <= maxY)
		control++;
	if ((p.getY() - a.getY()) == ((b.getY() - a.getY()) / (b.getX() - a.getX())) * (p.getX() - a.getX()))
		control++;
	if (control == 3)
		return (true);
	return (false);
}

bool	bsp(Point const a, Point const b, Point const c, Point const p)
{
	Fixed	totalArea;
	Fixed	areaPAB;
	Fixed	areaPAC;
	Fixed	areaPCB;
	Fixed	areaSoma;

	if (checkPointInSeg(a, b, p) || checkPointInSeg(b, c, p) || checkPointInSeg(c, a, p))
	{
		std::cout << "The point collides with one of the line segments\n";
		return (false);
	}
	totalArea = areaCalculation(a, b, c);
	if (totalArea < 0)
		totalArea = totalArea * -1;

	areaPAB = areaCalculation (p, a, b);
	if (areaPAB < 0)
		areaPAB = areaPAB * -1;

	areaPAC = areaCalculation(p, a, c);
	if (areaPAC < 0)
		areaPAC = areaPAC * -1;

	areaPCB = areaCalculation(p, c, b);
	if (areaPCB < 0)
		areaPCB = areaPCB * -1;

	areaSoma = areaPAB + areaPAC + areaPCB;

	std::cout << "Total Area: " << totalArea << std::endl;
	std::cout << "areaSoma: " << areaSoma << std::endl;
	if (areaSoma == totalArea)
		return (true);
	return (false);
}
