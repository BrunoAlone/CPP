/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:47:45 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/23 17:45:14 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//Default constructor

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap: Default constructor called\n\n";

	Name_ = "Random_name";
	hitPoints_ = 10;
	energyPoints_ = 10;
	attackDamage_ = 0;
}

// Constructor that receives a name

ClapTrap::ClapTrap(std::string& name)
{
	std::cout << "ClapTrap: Constructor with ClapTrap name called\n\n";
	Name_ = name;
	hitPoints_ = 10;
	energyPoints_ = 10;
	attackDamage_ = 0;
}

// Copy constructor

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap: Copy constructor called\n\n";
	this->Name_ = other.Name_;
	this->hitPoints_ = other.hitPoints_;
	this->energyPoints_ = other.energyPoints_;
	this->attackDamage_ = other.attackDamage_;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap: Copy assignment operator called\n\n";
	if (this != &other)
	{
		this->Name_ = other.Name_;
		this->hitPoints_ = other.hitPoints_;
		this->energyPoints_ = other.energyPoints_;
		this->attackDamage_ = other.attackDamage_;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: Destructor called\n\n";
}

// Getters

std::string	ClapTrap::getName() const
{
	return (this->Name_);
}

int	ClapTrap::getHitPoints() const
{
	return (this->hitPoints_);
}

int	ClapTrap::getEnergyPoints() const
{
	return (this->energyPoints_);
}

int	ClapTrap::getAttackDamage() const
{
	return (this->attackDamage_);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->hitPoints_ <= 0)
	{
		std::cout << "ClapTrap " << Name_ << " has " << this->hitPoints_ << " hitPoints\n\n";
		return ;
	}
	if (this->energyPoints_ <= 0)
	{
		std::cout << "ClapTrap " << Name_ << " has 0 energyPoints\n\n";
		return ;
	}
	std::cout << "ClapTrap " << Name_;
	std::cout << " attacks " << target;
	std::cout << ", causing " << attackDamage_;
	std::cout << " points of damage!\n\n";
	energyPoints_--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "Method from ClapTrap class: \n\n";
	if (this->hitPoints_ <= 0)
	{
		std::cout << "ClapTrap " << Name_ << " has " << this->hitPoints_ << " hitPoints\n\n";
		return ;
	}
	std::cout << Name_;
	std::cout << " received " << amount << " damage.\n\n";
	hitPoints_ -= amount;
	std::cout << Name_ << " has now " << hitPoints_ << " of health\n\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "Method from ClapTrap class: \n\n";
	if (this->hitPoints_ <= 0)
	{
		std::cout << "ClapTrap " << Name_ << " has " << this->hitPoints_ << " hitPoints\n\n";
		return ;
	}
	if (this->energyPoints_ <= 0)
	{
		std::cout << this->Name_ << " has 0 energyPoints\n\n";
		return ;
	}
	std::cout << this->Name_;
	std::cout << " repaired " << amount << " hitPints.\n\n";
	hitPoints_ += amount;
	std::cout << Name_ << " has now " << hitPoints_ << " of health\n\n";
	energyPoints_--;
}

std::ostream&	operator<<(std::ostream& os, const ClapTrap& obj)
{
	os << std::endl << "Information about " << obj.getName() << ":" << std::endl;
	os << "ClapTrap Name: " << obj.getName() << std::endl;
	os << "ClapTrap Hit Points: " << obj.getHitPoints() << std::endl;
	os << "ClapTrap Energy Points: " << obj.getEnergyPoints() << std::endl;
	os << "ClapTrap Attack damage: " << obj.getAttackDamage() << std::endl << std::endl;

	return (os);
}
