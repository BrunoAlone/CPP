/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:57:12 by brolivei          #+#    #+#             */
/*   Updated: 2024/03/28 16:38:04 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

void	addToVector(Span& TEST, int x)
{
	try {
		TEST.addNumber(x);
	} catch(std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
}

int	main()
{
	Span	TEST(3);

	addToVector(TEST, 2);
	addToVector(TEST, 3);
	addToVector(TEST, 4);
	addToVector(TEST, 5);

	TEST.printVector();

	Span	TEST_Copy(TEST);

	TEST_Copy.printVector();

	Span	TEST_OPERATOR_ASSIGNMENT;

	TEST_OPERATOR_ASSIGNMENT = TEST;

	TEST_OPERATOR_ASSIGNMENT.printVector();
	return (0);
}
