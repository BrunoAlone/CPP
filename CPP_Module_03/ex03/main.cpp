/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:46:40 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/24 09:26:37 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	std::string	DiaName = "Rogerio";

	std::cout << "-----The Trap are being created-----\n\n";
	DiamondTrap	Dia(DiaName);

	std::cout << "\n\n-----The Trap parameters-----\n\n";
	std::cout << "HitPoints: " << Dia.getHitPoints() << std::endl;
	std::cout << "EnergyPoints: " << Dia.getEnergyPoints() << std::endl;
	std::cout << "AttackDamage: " << Dia.getAttackDamage() << std::endl;

	std::cout << "\n\n-----The Trap Attack-----\n\n";
	Dia.attack("Jaime");

	std::cout << "\n\n-----The DiamondTrap using specials-----\n\n";
	Dia.guardGate();
	Dia.highFiveGuys();

	std::cout << "\n\n-----The DiamondTrap whoAmI-----\n\n";
	Dia.whoAmI();

	std::cout << "\n\n-----The Trap are being destroyed-----\n\n";
	return (0);
}
