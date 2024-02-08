/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:37:12 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/07 11:17:01 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	int	x;

	/*
			If an exception is catched, in the way we are handling,
		it does not finish the construction of the object, and so,
		the destructor is not called after, becouse the object it wasn't
		created.
	*/

	for (int i = 0; i < 3; i++)
	{
		std::cout << "Write the grade of the Bureaucrat: ";
		std::cin >> x;
		std::cout << std::endl;

		try {
			Bureaucrat	test1("João", x);
			std::cout << test1 << std::endl;
		} catch (std::exception& e)
		{
			std::cout << "Exception: " << e.what() << std::endl;
		}
	}

	return (0);
}
