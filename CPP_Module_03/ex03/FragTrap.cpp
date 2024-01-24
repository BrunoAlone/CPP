/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:00:07 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/24 09:27:21 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTRap: Default constructor called\n\n";
	this->Name_ = "<FragTrap_Random_Name>";
	this->hitPoints_ = 100;
	this->energyPoints_ = 100;
	this->attackDamage_ = 30;
}

FragTrap::FragTrap(const std::string& name)
{
	std::cout << "FragTrap: constructor with name called\n\n";
	this->Name_ = name;
	this->hitPoints_ = 100;
	this->energyPoints_ = 100;
	this->attackDamage_ = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap()
{
	std::cout << "FragTrap: Copy constructor called\n\n";
	this->Name_ = other.Name_;
	this->hitPoints_ = other.hitPoints_;
	this->energyPoints_ = other.energyPoints_;
	this->attackDamage_ = other.attackDamage_;
}

FragTrap&	FragTrap::operator=(const FragTrap& other)
{
	std::cout << "FragTrap: Copy assignment operator called\n\n";
	if (this != &other)
	{
		this->Name_ = other.Name_;
		this->hitPoints_ = other.hitPoints_;
		this->energyPoints_ = other.energyPoints_;
		this->attackDamage_ = other.attackDamage_;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: Destructor called\n\n";
}

void	FragTrap::attack(const std::string& target)
{
	if (this->hitPoints_ <= 0)
	{
		std::cout << "FragTrap " << Name_ << " has 0 hitPoints\n\n";
		return ;
	}
	if (this->energyPoints_ <= 0)
	{
		std::cout << "FragTrap " << Name_ << " has 0 energyPoints\n\n";
		return ;
	}
	std::cout << "FragTrap " << Name_;
	std::cout << " attacks " << target;
	std::cout << ", causing " << attackDamage_;
	std::cout << " points of damage!\n\n";
	energyPoints_--;
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << this->Name_ << " request a positive high five!!!\n\n";
}

std::ostream&	operator<<(std::ostream& os, const FragTrap& obj)
{
	os << std::endl << "Information about " << obj.getName() << ":" << std::endl;
	os << "FragTrap Name: " << obj.getName() << std::endl;
	os << "FragTrap Hit Points: " << obj.getHitPoints() << std::endl;
	os << "FragTrap Energy Points: " << obj.getEnergyPoints() << std::endl;
	os << "FragTrap Attack damage: " << obj.getAttackDamage() << std::endl << std::endl;
	return (os);
}
