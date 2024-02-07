/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:37:12 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/07 14:55:33 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	//int	x;

	/*
			If an exception is catched, in the way we are handling,
		it does not finish the construction of the object, and so,
		the destructor is not called after, becouse the object it wasn't
		created.
	*/

	// for (int i = 0; i < 3; i++)
	// {
	// 	std::cout << "Write the grade of the Bureaucrat: ";
	// 	std::cin >> x;
	// 	std::cout << std::endl;

	// 	try {
	// 		Bureaucrat	test1("João", x);
	// 		std::cout << test1 << std::endl;
	// 	} catch (std::exception& e)
	// 	{
	// 		std::cerr << "Exception: " << e.what() << std::endl;
	// 	}
	// }
	Form	form1;

	std::cout << form1;

	try {
		Form	form2("CS23", false, 0, 0);
	} catch (std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	try
	{
		Form		form2("C45.", false, 1, 1);
		const Bureaucrat	rui("Rui", 1);

		form2.beSigned(rui);

		std::cout << form2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	return (0);
}
