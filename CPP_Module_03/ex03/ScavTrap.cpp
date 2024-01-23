/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:28:46 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/23 14:05:07 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap: default constructor called\n\n";

	this->Name_ = "Random Name";
	this->hitPoints_ = 100;
	this->energyPoints_ = 50;
	this->attackDamage_ = 20;
}

ScavTrap::ScavTrap(std::string& name)
{
	std::cout << "ScavTrap: constructor with name called\n\n";

	this->Name_ = name;
	this->hitPoints_ = 100;
	this->energyPoints_ = 50;
	this->attackDamage_ = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap()
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

// Getters

std::string	ScavTrap::getName() const
{
	return (this->Name_);
}

int	ScavTrap::getHitPoints() const
{
	return (this->hitPoints_);
}

int	ScavTrap::getEnergyPoints() const
{
	return (this->energyPoints_);
}

// int	ScavTrap::getAttackDamage() const
// {
// 	return (this->attackDamage_);
// }

// Methods

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
	std::cout << ", causing " << this->attackDamage_;
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

std::ostream&	operator<<(std::ostream& os, const ScavTrap& obj)
{
	os << std::endl << "Information about " << obj.getName() << ":" << std::endl;
	os << "ScavTrap Name: " << obj.getName() << std::endl;
	os << "ScavTrap Hit Points: " << obj.getHitPoints() << std::endl;
	os << "ScavTrap Energy Points: " << obj.getEnergyPoints() << std::endl;
	os << "ScavTrap Attack damage: " << obj.getAttackDamage() << std::endl << std::endl;

	return (os);
}
