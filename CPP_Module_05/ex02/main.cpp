/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:37:12 by brolivei          #+#    #+#             */
/*   Updated: 2024/03/04 14:07:54 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	Bureaucrat	John("John", 70);
	Bureaucrat	Wilson("Wilson", 1);

	ShrubberyCreationForm	tree("Home");
	RobotomyRequestForm		robot("Mom");
	PresidentialPardonForm	pardon("Mr Something");

	std::cout << John << std::endl;
	std::cout << Wilson << std::endl;
	std::cout << tree << std::endl;
	std::cout << robot << std::endl;
	std::cout << pardon << std::endl;

	try
	{
		John.signForm(robot);
		John.executeForm(robot);

		Wilson.executeForm(robot);

		Wilson.signForm(tree);
		Wilson.executeForm(tree);

		Wilson.executeForm(pardon);

		Wilson.signForm(pardon);
		Wilson.executeForm(pardon);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}

	std::cout << tree << std::endl;
	std::cout << robot << std::endl;
	std::cout << pardon << std::endl;
	return (0);
}
