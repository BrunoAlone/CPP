/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:25:17 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/09 16:44:21 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	main()
{
	Point	A(1, 1);
	Point	B(4, 5);
	Point	C(8, 1);
	Point	P(2, 3);

	if (bsp(A, B, C, P) == true)
		std::cout << "The point is inside the triangle!\n";
	else
		std::cout << "The point is outside the triangle!\n";
	return (0);
}
