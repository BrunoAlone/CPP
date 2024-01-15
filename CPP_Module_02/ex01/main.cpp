/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 14:53:12 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/15 11:42:24 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed		a;
	Fixed const	b(10);
	Fixed const	c(42.42f);
	Fixed const	d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as intenger" << std::endl;
	std::cout << "b is " << b.toInt() << " as intenger" << std::endl;
	std::cout << "c is " << c.toInt() << " as intenger" << std::endl;

	// Fixed	test(floatValue);

	// std::cout << "Original float: " << floatValue << std::endl;
	// std::cout << "Fixed-point value: " << test.toFloat() << std::endl;std::endl;
	std::cout << "d is " << d.toInt() << " as intenger" << std::endl;

	// float	floatValue = 2.75;

	// Fixed	test(floatValue);

	// std::cout << "Original float: " << floatValue << std::endl;
	// std::cout << "Fixed-point value: " << test.toFloat() << std::endl;

	return (0);
}
