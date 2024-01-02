/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:12:08 by brolivei          #+#    #+#             */
/*   Updated: 2023/12/22 11:31:00 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*strPTR = &str;
	std::string	&strREF = str;

	std::cout << "The memory address of the string variable is:\n";
	std::cout << &str << std::endl;

	std::cout << "The memory address held by stringPTR is:\n";
	std::cout << strPTR << std::endl;

	std::cout << "The memory address held by stringREF is:\n";
	std::cout << &strREF << std::endl;

	std::cout << "The value of the string variable is:\n";
	std::cout << str << std::endl;

	std::cout << "The value pointed to by stringPTR:\n";
	std::cout << *strPTR << std::endl;

	std::cout << "The value pointed to by stringREF:\n";
	std::cout << strREF << std::endl;
	return (0);
}
