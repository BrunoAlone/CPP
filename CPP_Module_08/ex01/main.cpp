/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:57:12 by brolivei          #+#    #+#             */
/*   Updated: 2024/03/28 15:06:31 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int	main()
{
	Span	TEST(3);

	TEST.addNumber(2);
	TEST.addNumber(3);
	TEST.addNumber(4);
	TEST.addNumber(5);

	TEST.printVector();
	return (0);
}
