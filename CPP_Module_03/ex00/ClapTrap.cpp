/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:47:45 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/22 12:44:28 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//Default constructor

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called\n";
	Name_ = "Random_name";
	hitPoints_ = 10;
	energyPoints_ = 10;
	attackDamage_ = 0;
}

// Constructor that receives a name

ClapTrap::ClapTrap(std::string& name)
{
	std::cout << "Constructor with 'ClapTrap_name' called\n";
	Name_ = name;
	hitPoints_ = 10;
	energyPoints_ = 10;
	attackDamage_ = 0;
}

// Copy constructor

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called\n";
	this->Name_ = other.Name_;
	this->hitPoints_ = other.hitPoints_;
	this->energyPoints_ = other.energyPoints_;
	this->attackDamage_ = other.attackDamage_;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called\n";
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
	std::cout << "Destructor called\n";
}

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
		std::cout << "ClapTrap " << Name_ << " has 0 hitPoints\n\n";
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
	if (this->hitPoints_ <= 0)
	{
		std::cout << "ClapTrap " << Name_ << " has 0 hitPoints.\n\n";
		return ;
	}
	std::cout << "ClapTrap " << Name_;
	std::cout << " received " << amount << " points of damage.\n";
	hitPoints_ -= amount;
	std::cout << "ClapTrap " << Name_ << " has now " << hitPoints_ << " of health\n\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints_ <= 0)
	{
		std::cout << "ClapTrap " << Name_ << " has 0 hitPoints.\n\n";
		return ;
	}
	if (this->energyPoints_ <= 0)
	{
		std::cout << "ClapTrap " << Name_ << " has 0 energyPoints\n\n";
		return ;
	}
	std::cout << "ClapTrap " << Name_;
	std::cout << " repaired " << amount << " hitPints.\n";
	hitPoints_ += amount;
	std::cout << "ClapTrap " << Name_ << " has now " << hitPoints_ << " of health\n\n";
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
