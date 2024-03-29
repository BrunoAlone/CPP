/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:37:12 by brolivei          #+#    #+#             */
/*   Updated: 2024/03/04 14:14:07 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	Bureaucrat	John("John", 70);
	Bureaucrat	Wilson("Wilson", 1);
	Intern		Pedrinho;

	AForm	*tree;
	AForm	*robot;
	AForm	*pardon;
	AForm	*test;

	tree = Pedrinho.makeForm("ShrubberyCreation request", "Home");
	robot = Pedrinho.makeForm("Robotomy request", "Home");
	pardon = Pedrinho.makeForm("PresidentialPardon request", "Home");
	test = Pedrinho.makeForm("NotExistentForm request", "Side");

	std::cout << John << std::endl;
	std::cout << Wilson << std::endl;
	std::cout << *tree << std::endl;
	std::cout << *robot << std::endl;
	std::cout << *pardon << std::endl;

	John.signForm(*robot);
	John.executeForm(*robot);

	Wilson.executeForm(*robot);

	Wilson.signForm(*tree);
	Wilson.executeForm(*tree);

	Wilson.executeForm(*pardon);

	Wilson.signForm(*pardon);
	Wilson.executeForm(*pardon);
	
	(void)test;
	std::cout << *tree << std::endl;
	std::cout << *robot << std::endl;
	std::cout << *pardon << std::endl;

	delete tree;
	delete robot;
	delete pardon;
	
	return (0);
}
