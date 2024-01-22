/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:42:26 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/22 14:15:56 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap: Constructor called\n";
	this->Name_ = "Random";
	ClapTrap::Name_ = this->Name_ + "_clap_name";
	this->hitPoints_ = FragTrap::hitPoints_;
	this->energyPoints_ = ScavTrap::energyPoints_;
	this->attackDamage_ = FragTrap::attackDamage_;
}

DiamondTrap::DiamondTrap(const std::string& name)
{
	std::cout << "DiamondTrap: Constructor with name called\n";
	this->Name_ = name;
	ClapTrap::Name_ = this->Name_ + "_clap_name";
	this->hitPoints_ = FragTrap::hitPoints_;
	this->energyPoints_ = ScavTrap::energyPoints_;
	this->attackDamage_ = FragTrap::attackDamage_;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(), FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap: Copy constructor called\n";
	this->Name_ = other.Name_;
	ClapTrap::Name_ = this->Name_ + "clap_name";
	this->hitPoints_ = other.hitPoints_;
	this->energyPoints_ = other.energyPoints_;
	this->attackDamage_ = other.attackDamage_;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other)
{
	std::cout << "DiamondTrap: Copy assignment operator called\n";
	if (this != &other)
	{
		this->Name_ = other.Name_;
		ClapTrap::Name_ = this->Name_ + "clap_name";
		this->hitPoints_ = other.hitPoints_;
		this->energyPoints_ = other.energyPoints_;
		this->attackDamage_ = other.attackDamage_;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: Destructor called\n";
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My name is " << this->Name_ << std::endl;
	std::cout << "Wait... Or is it " << ClapTrap::Name_ << std::endl;
	std::cout << "WHO AM IIIIIII!?!?!?!?!?!?\n\n";
}
