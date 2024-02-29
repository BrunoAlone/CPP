/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:37:12 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/29 19:03:37 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void	SignForm(const Bureaucrat& worker, Form& form)
{
	try
	{
		worker.signForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}

}

int	main()
{
	/*
			If an exception is catched, in the way we are handling,
		it does not finish the construction of the object, and so,
		the destructor is not called after, becouse the object it wasn't
		created.
	*/
	Bureaucrat	Rui("Rui", 5);
	Bureaucrat	Pedro("Pedro", 120);

	std::cout << "\033[1;31mBureaucrats presentation: \033[0m\n\n";
	std::cout << Rui;
	std::cout << Pedro;

	std::cout << "\033[1;31mLet's now create some forms: \033[0m\n\n";

	Form	form1("C01", false, 145, 5);
	Form	form2("C02", false, 1, 2);

	std::cout << "\033[1;31mLet's now present the forms: \033[0m\n\n";

	std::cout << form1;
	std::cout << form2;

	std::cout << "\033[1;31mIn the last step, we try to sign the forms with out bureaucrats: \033[0m\n\n";

	SignForm(Rui, form1);
	SignForm(Rui, form2);
	
	return (0);
}
