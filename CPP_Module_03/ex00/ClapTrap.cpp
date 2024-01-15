/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:47:45 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/15 12:59:05 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//Default constructor

ClapTrap::ClapTrap()
{
	Name_ = "Random_name";
	hitPoints_ = 10;
	energyPoints_ = 10;
	attackDamage_ = 10;
}

// Constructor that receives a name

ClapTrap::ClapTrap(std::string &name)
{
	Name_ = name;
	hitPoints_ = 10;
	energyPoints_ = 10;
	attackDamage_ = 10;
}

// Copy constructor

ClapTrap::ClapTrap(const ClapTrap &other)
{
	this->Name_ = other.Name_;
	this->hitPoints_ = other.hitPoints_;
	this->energyPoints_ = other.energyPoints_;
	this->attackDamage_ = other.attackDamage_;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
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
	
}
