/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:09:42 by bruno             #+#    #+#             */
/*   Updated: 2023/12/15 15:32:07 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	level[0] = "DEBUG";
	level[1] = "INFO";
	level[2] = "WARNING";
	level[3] = "ERROR";
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my\
 7XL-double-cheese-triple-pickle-special-ketchup burger.\
 I really do!\n";
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put\
enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for\
years whereas you started working here since last month.\n";
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

/*
			The subject ask has to call methods of this class
		without creating a tree of if/else.

			For that, we create a array of pointers to member functions.

			In the class, we declare a private member, thar is an array
		of string, with all the possivel commands.

			After that, in the for loop, we compare the command of the
		input and to see if match with some level.

			If it does, we call the pointer to the member function that
		will execute the command.

			In this line:

				(this->*func[i])();

			Is imperative to use the keyword "this".

			In C++, the "this" pointer is a pointer that holds the memory
		adress of the current instance of the class. Inside a member
		function, "this" refers to the current object on which the member
		function is called.

			Since 'func' is an array of member function pointers, it is needed
		to specify the object on wich you want to call those member functions.

			Breakdown of the expression:

				- 'this': refers to the current object instance.
				- '->*': Syntax used for calling a member function through
			a pointer to a member function.
				- '-func[i]': Accesses the i element of the array 'func'.
*/

void	Harl::complain(std::string calledLevel)
{
	void(Harl::*func[])(void) =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	for (int i = 0; i < 4; i++)
	{
		if (level[i].compare(calledLevel) == 0)
		{
			(this->*func[i])();
			return ;
		}
	}

	std::cout << "No match for called lavel.\n";
}
