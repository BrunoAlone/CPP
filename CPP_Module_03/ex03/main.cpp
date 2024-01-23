/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:46:40 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/23 14:04:00 by brolivei         ###   ########.fr       */
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

	std::cout << Dia.getAttackDamage() << std::endl;

	Dia.whoAmI();
	std::cout << "\n\n-----The Traps are being destroyed-----\n\n";
	return (0);
}
