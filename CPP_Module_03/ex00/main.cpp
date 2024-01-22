/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:46:40 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/22 12:43:53 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	std::string	name = "Manuel";
	ClapTrap	A(name);
	ClapTrap	B;

	std::cout << A;
	std::cout << B;
	A.attack("Jose");
	A.takeDamage(4);
	A.beRepaired(2);

	B.attack("Rui");

	A.takeDamage(100);

	A.beRepaired(10);
	return (0);
}
