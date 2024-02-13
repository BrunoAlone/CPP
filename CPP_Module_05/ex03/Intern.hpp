/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:04:12 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/13 12:17:31 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class	Intern
{
	private:
		std::string formsTypes[3];
	public:
		// Ortodox
		Intern();
		Intern(const Intern& other);
		Intern&	operator=(const Intern& other);
		~Intern();

		// Specific Method
		AForm*	makeForm(std::string formName, std::string formTarget);
		AForm*	makeShrubbery(std::string target);
		AForm*	makeRobotomy(std::string target);
		AForm*	makePresidential(std::string target);
};

#endif
