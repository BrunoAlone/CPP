/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:42:26 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/23 18:41:47 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*
		O atributos vao ser coletados das parent class.

		O subject especifica:
			- O nome passado num constructor ou dado no
		default constructor.

			- O nome da instancia ClapTrap, tera que ser
		o parametro dado ao constructor + "_clap_name" como
		sufixo.

			- HitPoints vem da instancia de FragTrap.

			- EnergyPoints da ScavTrap.

			- Attack Damege da FragTrap.

			- E a funcao attack() e a da classe ScavTrap
*/

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap: Constructor called\n";
	this->Name_ = "Random";
	ClapTrap::Name_ = this->Name_ + "_clap_name";
	this->hitPoints_ = FragTrap::hitPoints_;
	this->energyPoints_ = ScavTrap::energyPoints_;
	this->attackDamage_ = FragTrap::attackDamage_;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap: Constructor with name called\n";
	this->Name_ = name;
	ClapTrap::Name_ = this->Name_ + "_clap_name";
	this->hitPoints_ = FragTrap::hitPoints_;
	this->energyPoints_ = ScavTrap::energyPoints_;
	this->attackDamage_ = FragTrap::attackDamage_;
	std::cout << "Damage from Dia: " << this->attackDamage_ << std::endl;
	std::cout << "Energy from Dia: " << this->energyPoints_ << std::endl;
	std::cout << "HitPoints from Dia: " << this->hitPoints_ << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(), ScavTrap(), FragTrap()
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
	std::cout << "DiamondTrap: Destructor called\n\n";
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
