/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:25:17 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/11 10:45:58 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	main()
{
	Point	A(1, 1);
	Point	B(5, 1);
	Point	C(3, 4);
	Point	P(3, 1);

	if (bsp(A, B, C, P) == true)
		std::cout << "The point is inside the triangle!\n";
	else
		std::cout << "The point is outside the triangle!\n";
	return (0);
}
