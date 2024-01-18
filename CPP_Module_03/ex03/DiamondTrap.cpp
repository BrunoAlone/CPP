/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:42:26 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/18 12:04:05 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap: Constructor called\n";
	this->Name_ = "Random";
	ClapTrap::Name_ = this->Name_ + "_clap_name";
}



DiamondTrap(const std::string& name);
DiamondTrap(const DiamondTrap& other);
DiamondTrap&	operator=(const DiamondTrap& other);
~DiamondTrap();
