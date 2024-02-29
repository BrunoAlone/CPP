/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:37:12 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/29 14:16:33 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	*test[3];

	/*
			If an exception is catched, in the way we are handling,
		it does not finish the construction of the object, and so,
		the destructor is not called after, becouse the object it wasn't
		created.
	*/

	for (int i = 0; i < 3; i++)
	{
		int	x;
		std::cout << "Write the grade of the Bureaucrat: ";
		std::cin >> x;
		std::cout << std::endl;

		try
		{
			//Bureaucrat	test1("João", x);
			//std::cout << test1 << std::endl;
			test[i] = new Bureaucrat("João", x);
		}
		catch (std::exception& e)
		{
			test[i] = NULL;
			std::cout << "Exception: " << e.what() << std::endl;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		if (test[i] != NULL)
			std::cout << *test[i];
	}

	for (int i = 0; i < 3; i++)
		delete test[i];

	return (0);
}
