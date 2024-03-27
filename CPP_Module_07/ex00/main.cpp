/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:22:07 by bruno             #+#    #+#             */
/*   Updated: 2024/03/27 15:37:21 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

int	main()
{
	int	a = 2;
	int	b = 3;

	// We dont need to explicitly tell the type of the variable.
	// C++ is capable of deducing the types based on the arguments.

	// The "::" are used to avoid conflits with other namespaces
	// Using those charecters tells the compiler we are calling
	// that function from our global namespece (Every global function or
	// variable that we declare out side the main), in our case
	// the file "whatever.hpp"
	::Swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max ( a, b ) = " << ::max(a, b) << std::endl;

	std::string	c = "chaine1";
	std::string d = "chaine2";

	::Swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;

	return (0);
}
