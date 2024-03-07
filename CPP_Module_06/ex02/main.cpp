/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:18:03 by bruno             #+#    #+#             */
/*   Updated: 2024/03/07 17:49:57 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void	testIdentifyByPointer()
{
	Base*	A_ = new A();

	identify(A_);

	Base*	test;

	test = generate();

	identify(test);

	delete A_;
	delete test;
}

void	testIdentifyByReference()
{
	Base	*A_ = new A();

	identify(*A_); // Passing the point by reference

	Base	*test = generate();

	identify(*test);
	
	delete A_;
}

int	main()
{
	testIdentifyByPointer();

	testIdentifyByReference();
	return (0);
}
