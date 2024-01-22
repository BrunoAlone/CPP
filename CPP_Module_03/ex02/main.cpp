/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:46:40 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/22 14:13:45 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	std::string	ClapTrapName = "Manuel";
	std::string	ScavTrapName = "Carlos";
	std::string FragTrapName = "Roberto";

	std::cout << "-----ClapTrap being created-----\n\n\n";
	ClapTrap	Clap(ClapTrapName);

	std::cout << "\n\n\n-----ScavTrap being created-----\n\n\n";
	ScavTrap	Scav(ScavTrapName);

	std::cout << "\n\n\n-----FragTrap being created-----\n\n\n";
	FragTrap	Frag(FragTrapName);

	std::cout << "\n\n\n-----And they attack Serafim-----\n\n\n";
	Clap.attack("Serafim");
	Scav.attack("Serafim");
	Frag.attack("Serafim");

	std::cout << "\n\n\n-----And they are under attack Serafim-----\n\n\n";
	Clap.takeDamage(9);
	Scav.takeDamage(23);
	Frag.takeDamage(44);

	std::cout << "\n\n\n-----Scav and Frag using specials-----\n\n\n";
	Scav.guardGate();
	Frag.highFiveGuys();
	
	std::cout << "\n\n\n-----Ending the experience-----\n\n\n";

	return (0);
}
