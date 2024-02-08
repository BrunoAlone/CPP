/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:37:12 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/08 14:38:57 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	/*
			If an exception is catched, in the way we are handling,
		it does not finish the construction of the object, and so,
		the destructor is not called after, becouse the object it wasn't
		created.
	*/
	Form	form1;

	std::cout << form1;

	try {
		Form	form2("CS23", false, 0, 0);
	} catch (std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	try
	{
		Form		form3("C45.", false, 5, 5);
		Form		form4("F3", false, 1, 1);
		const Bureaucrat	rui("Rui", 5);

		form3.beSigned(rui);
		form4.beSigned(rui);

		std::cout << form3;
		std::cout << form4;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}

	return (0);
}
