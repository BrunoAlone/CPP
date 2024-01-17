/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:47:45 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/17 11:57:55 by brolivei         ###   ########.fr       */
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
	std::cout << " it received " << amount << " damage.\n\n";
	hitPoints_ -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints_ <= 0)
	{
		std::cout << "ClapTrap " << this->Name_ << " has 0 hitPoints.\n\n";
		return ;
	}
	if (this->energyPoints_ <= 0)
	{
		std::cout << "ClapTrap " << this->Name_ << " has 0 energyPoints\n\n";
		return ;
	}
	std::cout << "ClapTrap " << this->Name_;
	std::cout << " repaired " << amount << " hitPints.\n\n";
	hitPoints_ += amount;
	energyPoints_--;
}
