/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:07:35 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/02 12:29:21 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(std::string weaponName)
{
	setType(weaponName);
}

const std::string	&Weapon::getType()
{
	return (type); // In c++, returning "type" already return the reference
}

void	Weapon::setType(std::string newType)
{
	type = newType;
}
