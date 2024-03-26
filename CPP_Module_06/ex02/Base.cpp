/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:06:07 by bruno             #+#    #+#             */
/*   Updated: 2024/03/26 11:51:24 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
	std::cout << "Base: Destructor called\n\n";
}

Base*	generate(void)
{
	srand(static_cast<unsigned int>(time(NULL)));
	switch (rand() % 3)
	{
		case 0:
			std::cout << "Generate instance A\n\n";
			return (new A());
		case 1:
			std::cout << "Generate instance B\n\n";
			return (new B());
		case 2:
			std::cout << "Generate instance C\n\n";
			return (new C());
	}
	return (NULL);
}

/*
		dynamic_cast: used to convert a base class pointer or reference
	to a pointer or reference of aderived class.

		dynamic cast perfom verifications before do the cast,
	the verifications are made in runtime type information based
	on the virtual table. So, to cast this way, the base class has
	to have at least one virtual function.

		dynamic_cast, when try to cast a base pointer to a derived
	class pointer, it returns the pointer if it's correct, or NULL
	pointer if not.
*/

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "This type of base is A\n\n";
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "This type of base is B\n\n";
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "This tape of base is C\n\n";
	else
		std::cout << "Not a base type\n\n";
}

/*
		Working with references, dynamic cast throw an exception
	"std::bad_cast		dynamic_cast: used to convert a base class pointer or reference
	to a pointer or reference of aderived class.

		dynamic cast perfom verifications before do the cast,
	the verifications are made in runtime type information based
	on the virtual table. So, to cast this way, the base class has
	to have at least one virtual function.

		dynamic_cast, when try to cast a base pointer to a derived
	class pointer, it returns the pointer if it's correct, or NULL
	pointer if not." in the case we try to cast a reference to a derived
	class that it's not correct.

		Strong tool to convert pointers or references to base classes
	into pointers or references of derived classes.

*/

void	identify(Base& p)
{
	// Here we cast the exception if the cast is not allowed

	// Because we dont use the result of the dynamic cast, we need
	// to implicit cast that result to void, so the compiler dont
	// complain.
	try {
		(void)(dynamic_cast<A&>(p));
		std::cout << "This type of base is A\n\n";
	}
	catch(std::exception &e) {

	}
	try {
		(void)(dynamic_cast<B&>(p));
		std::cout << "This type of base is B\n\n";
	}
	catch(std::exception &e) {

	}
	try {
		(void)(dynamic_cast<C&>(p));
		std::cout << "This type of base is C\n\n";
	}
	catch(std::exception &e) {

	}
}
