/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:06:07 by bruno             #+#    #+#             */
/*   Updated: 2024/03/07 17:59:04 by bruno            ###   ########.fr       */
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

void	identify(Base& p)
{
	try {
		(void)(dynamic_cast<A&>(p));
		std::cout << "This type of base is A\n\n";
	}
	catch(std::exception &e) {
		std::cout << "Not an A\n\n";
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
