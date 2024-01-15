/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:25:17 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/15 12:17:39 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	main()
{
	Point	A(0, 0);
	Point	B(3, 0);
	Point	C(1.5f, 3);
	Point	P0(1.5f, 1);
	Point	P1(1.5f, 2);
	Point	P2(1.5f, 3);

	std::cout << "Has to be inside:\n";
	if (bsp(A, B, C, P0) == true)
		std::cout << "The point is inside the triangle!\n";
	else
		std::cout << "The point is outside the triangle!\n";


	std::cout << "Has to be inside:\n";
	if (bsp(A, B, C, P1) == true)
		std::cout << "The point is inside the triangle!\n";
	else
		std::cout << "The point is outside the triangle!\n";

	std::cout << "Has to be outside:\n";
	if (bsp(A, B, C, P2) == true)
		std::cout << "The point is inside the triangle!\n";
	else
		std::cout << "The point is outside the triangle!\n";
	return (0);
}
