/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:57:12 by brolivei          #+#    #+#             */
/*   Updated: 2024/04/04 10:39:34 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include "Span.hpp"

void	bigTest()
{
	Span	sp(10000);

	std::srand(time(NULL));
	for (int i = 0; i < 10001; i++)
	{
		try{
			sp.addNumber(std::rand() % 100);
		} catch(std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	//sp.printVector();
}

void	testingAddNumber()
{
	Span				sp(11000);
	std::vector<int>	test;

	std::srand(time(NULL));
	for (int i = 0; i < 11000; i++)
		test.push_back(std::rand() % 11000);

	sp.addNumberFromRange(test.begin(), test.end());

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	//sp.printVector();
}

void	TestEmptyVector()
{
	Span	sp;

	try {
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

void	TestCopyAssignment()
{
	std::cout << "\n\n==========Test Copy assignment==========\n\n";
	Span	sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	Span	test;

	test = sp;
	test.printVector();
}

int	main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	sp.printVector();
	bigTest();
	testingAddNumber();
	TestEmptyVector();
	TestCopyAssignment();
	return 0;
}
