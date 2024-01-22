/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:46:40 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/22 13:53:32 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	std::string	ScavTrapName = "Carlos";
	std::string	ScavTrapName2 = "Joao";

	ScavTrap	A(ScavTrapName);
	ScavTrap	B(ScavTrapName2);


	A.attack("Serafim");
	A.beRepaired(2);
	A.takeDamage(10);
	A.guardGate();

	std::cout << A;

	B.attack("Serafim");
	B.takeDamage(30);
	B.beRepaired(10);

	std::cout << B;
	return (0);
}
