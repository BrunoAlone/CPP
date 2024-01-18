/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:46:40 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/18 09:38:25 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	std::string	ClapTrapName = "Manuel";
	std::string	ScavTrapName = "Carlos";

	ScavTrap	B(ScavTrapName);
	//ClapTrap	A(ClapTrapName);

	B.attack("Serafim");
	//A.attack("Serafim");
	B.beRepaired(2);
	B.takeDamage(10);
	B.guardGate();

	std::cout << B;
	//std::cout << A;
	return (0);
}
