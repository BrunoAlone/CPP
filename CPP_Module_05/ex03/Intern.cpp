/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:11:07 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/16 14:01:56 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern: Default constructor called\n\n";
	formsTypes[0] = "SHRUBBERY";
	formsTypes[1] = "ROBOTOMY";
	formsTypes[2] = "PRESIDENTIAL";
}

Intern::Intern(const Intern& other)
{
	std::cout << "Intern: Copy constructor called\n\n";
	(void)other;
	formsTypes[0] = "SHRUBBERY";
	formsTypes[1] = "ROBOTOMY";
	formsTypes[2] = "PRESIDENTIAL";
}

Intern&	Intern::operator=(const Intern& other)
{
	std::cout << "Intern: Copy assignment operator called\n\n";
	(void)other;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Intern: Destructor called\n\n";
}

AForm*	Intern::makeShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm*	Intern::makeRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm*	Intern::makePresidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm*	Intern::makeForm(std::string formName, std::string formTarget)
{
	AForm*(Intern::*func[])(std::string) =
	{
		&Intern::makeShrubbery,
		&Intern::makeRobotomy,
		&Intern::makePresidential
	};

	for (int i = 0; formName[i]; i++)
		formName[i] = std::toupper(formName[i]);
	for (int i = 0; i < 3; i++)
	{
		if (formName.find(formsTypes[i]) != std::string::npos)
		{
			std::cout << "\033[32mIntern creates " << formsTypes[i] << "\033[0m\n\n";
			return (this->*func[i])(formTarget);
		}
	}
	std::cout << "\033[33mThe form type requested( " << formName << " ) doesn't exist\033[0m\n\n";
	return (NULL);
}
