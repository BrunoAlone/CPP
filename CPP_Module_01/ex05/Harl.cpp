/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:09:42 by bruno             #+#    #+#             */
/*   Updated: 2024/01/02 14:13:40 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my\
 7XL-double-cheese-triple-pickle-special-ketchup burger.\
 I really do!\n";
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put\
enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for\
years whereas you started working here since last month.\n";
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]\n";
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

		Breaking the expression "void(Harl::*func[])(void) =",
	that is the expression that declare the array of member function
	pointers for the Harl class.

		What each part does:

			- 'void': This specifies the return type of the member
		functions in the array.

			- '(Harl::*func[])': Declares an array named func where
		each element is a pointer to a member function of the Harl class.

			- '(void)': The member fucntions take no parameters.
*/

void	Harl::complain(std::string level)
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
		if (levels[i].compare(level) == 0)
		{
			(this->*func[i])();
			return ;
		}
	}

	std::cout << "No match for called lavel.\n";
}
