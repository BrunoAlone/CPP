/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:30:01 by brolivei          #+#    #+#             */
/*   Updated: 2023/12/12 13:43:24 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string newName)
{
	name = newName;
	weapon = NULL;
}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	weapon = &newWeapon;
}

void	HumanB::attack()
{
	if (!weapon)
		std::cout << name << " has no weapon.\n";
	else
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
