/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:37:12 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/08 16:39:41 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	/*
			If an exception is catched, in the way we are handling,
		it does not finish the construction of the object, and so,
		the destructor is not called after, becouse the object it wasn't
		created.
	*/
	ShrubberyCreationForm	Form1;

	Bureaucrat				Bur1("Rui", 1);

	Form1.beSigned(Bur1);

	Form1.execute(Bur1);

	return (0);
}
