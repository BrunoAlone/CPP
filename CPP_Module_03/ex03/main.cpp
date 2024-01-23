/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:46:40 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/23 18:25:07 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	std::string	ClapName = "Jose";
	std::string	ScavName = "Manuel";
	std::string	FragName = "Ricardo";
	std::string	DiaName = "Rogerio";

	std::cout << "-----The Traps are being created-----\n\n";
	ClapTrap	Clap(ClapName);
	ScavTrap	Scav(ScavName);
	FragTrap	Frag(FragName);
	DiamondTrap	Dia(DiaName);

	std::cout << "\n\n-----The Traps Attack-----\n\n";
	Clap.attack("Jaime");
	Scav.attack("Jaime");
	Frag.attack("Jaime");
	Dia.attack("Jaime");

	std::cout << "\n\n-----The DiamondTrap using specials-----\n\n";
	Dia.guardGate();
	Dia.highFiveGuys();

	std::cout << "\n\n-----The DiamondTrap whoAmI-----\n\n";
	Dia.whoAmI();
	
	std::cout << "\n\n-----The Traps are being destroyed-----\n\n";
	return (0);
}
