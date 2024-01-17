/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:28:46 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/17 10:53:40 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap: default constructor called\n\n";

	Name_ = "Random Name";
	hitPoints_ = 100;
	energyPoints_ = 50;
	attackDamage_ = 20;
}

ScavTrap::ScavTrap(std::string& name)
{
	std::cout << "ScavTrap: constructor with name called\n\n";

	Name_ = name;
	hitPoints_ = 100;
	energyPoints_ = 50;
	attackDamage_ = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	std::cout << "ScavTrap: copy constructor called\n\n";

	this->Name_ = other.Name_;
	this->hitPoints_ = other.hitPoints_;
	this->energyPoints_ = other.energyPoints_;
	this->attackDamage_ = other.attackDamage_;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap: copy assignment operator called\n\n";

	if (this != &other)
	{
		this->Name_ = other.Name_;
		this->hitPoints_ = other.hitPoints_;
		this->energyPoints_ = other.energyPoints_;
		this->attackDamage_ = other.attackDamage_;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: destructor called\n\n";
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->hitPoints_ <= 0)
	{
		std::cout << "ScavTrap " << this->Name_ << " has 0 hitPoints\n\n";
		return ;
	}
	if (this->energyPoints_ <= 0)
	{
		std::cout << "ScavTrap " << this->Name_ << " has 0 energyPoints\n\n";
		return ;
	}
	std::cout << "ScavTrap " << this->Name_;
	std::cout << " attacks " << target;
	std::cout << ", causing " << attackDamage_;
	std::cout << " points of damage!\n\n";
	energyPoints_--;
}

void	ScavTrap::guardGate()
{
	if (this->hitPoints_ <= 0)
	{
		std::cout << "ScavTrap " << this->Name_ << " is dead...\n\n";
		return ;
	}
	std::cout << "ScavTrap " << this->Name_ << " is now in Gate keeper mode!!!\n\n";
}
