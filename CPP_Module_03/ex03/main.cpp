/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:46:40 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/18 11:13:23 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	std::string	ClapTrapName = "Manuel";
	std::string	ScavTrapName = "Carlos";

	ScavTrap	B(ScavTrapName);
	FragTrap	frag(ClapTrapName);
	//ClapTrap	A(ClapTrapName);


	B.attack("Serafim");
	frag.highFiveGuys();
	//A.attack("Serafim");
	B.beRepaired(2);
	B.takeDamage(10);
	B.guardGate();
	frag.attack("Carlos");

	std::cout << B;
	std::cout << frag;
	//std::cout << A;
	return (0);
}
