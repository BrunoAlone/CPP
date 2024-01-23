/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:46:40 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/23 17:57:36 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	std::string	ClapTrapName = "Carlos";
	std::string	ScavTrapName = "Joao";

	std::cout << "-----ClapTrap is being created-----\n\n";
	ClapTrap	Clap(ClapTrapName);

	std::cout << "\n\n-----ScavTrap is being created-----\n\n";
	ScavTrap	Scav(ScavTrapName);

	std::cout << "\n\n-----They attack Coiso-----\n\n";
	Clap.attack("Coiso");
	Scav.attack("Coiso");

	std::cout << "\n\n-----They receive damage-----\n\n";
	Clap.takeDamage(10);
	Scav.takeDamage(10);

	std::cout << "\n\n-----They reapair them selfs-----\n\n";
	Clap.beRepaired(5);
	Scav.beRepaired(5);

	std::cout << "\n\n-----Scav uses is special method-----\n\n";
	Scav.guardGate();

	std::cout << "\n\n-----ClapTrap and Scav information-----\n\n";
	std::cout << Clap;
	std::cout << Scav;

	std::cout << "\n\n-----And they are destroyed-----\n\n";
	return (0);
}
