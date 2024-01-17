/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:46:40 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/17 11:56:18 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	std::string	ClapTrapName = "Manuel";
	// ClapTrap	A(ClapTrapName);

	// A.attack("Jose");
	// A.takeDamage(4);
	// A.takeDamage(6);
	// A.takeDamage(1);
	// A.beRepaired(2);

	std::string	ScavTrapName = "Carlos";
	ScavTrap	B(ScavTrapName);

	B.attack("Serafim");
	B.beRepaired(2);
	B.takeDamage(10);
	B.guardGate();
	
	return (0);
}
