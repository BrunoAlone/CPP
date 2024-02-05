/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:00:09 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/05 18:08:45 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "Character: Default constructor called\n\n";
	this->Name_ = "RandomName";
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	for (int i = 0; i < 10; i++)
		this->RubbishBin[i] = NULL;
}

Character::Character(const std::string& name)
{
	std::cout << "Character: Constructor with \"name\" called\n\n";
	this->Name_ = name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	for (int i = 0; i < 10; i++)
		this->RubbishBin[i] = NULL;
}

Character::Character(const Character& other)
{
	std::cout << "Character: Copy constructor called\n\n";
	this->Name_ = other.Name_;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = other.inventory[i];
	for (int i = 0; i < 10; i++)
		this->RubbishBin[i] = other.RubbishBin[i];
}

Character&	Character::operator=(const Character& other)
{
	std::cout << "Character: Copy assignment operator called\n\n";
	if (this != &other)
	{
		this->Name_ = other.Name_;
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
				delete this->inventory[i];
			this->inventory[i] = other.inventory[i]; // Gotta fix this, I think this is not deep copy....
		}
		for (int i = 0; i < 10; i++)
		{
			if (this->RubbishBin[i])
				delete this->RubbishBin[i];
			this->RubbishBin[i] = other.RubbishBin[i];
		}
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
	for (int i = 0; i < 10; i++)
	{
		if (this->RubbishBin[i])
			delete this->RubbishBin[i];
	}
}

const std::string&	Character::getName() const
{
	return (this->Name_);
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			break;
		}
		std::cout << "The backpack is full\n\n";
	}
}

void	Character::unequip(int idx)
{
	AMateria	*tmp;

	if (idx < 0 || idx >= 4)
	{
		std::cout << "That slot doesn't exist\n\n";
		return ;
	}
	else if (this->inventory[idx])
	{
		tmp = this->inventory[idx];
		for (int i = 0; i < 10; i++)
		{
			if (this->RubbishBin[i] == NULL)
			{
				this->RubbishBin[i] = tmp;
				this->inventory[idx] = NULL;
				return ;
			}
			if (i == 9)
			{
				std::cout << "Rubbish Bin is full, can't drop it\n\n";
				return ;
			}
		}
	}
	std::cout << "That slot is empty\n\n";
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4)
		std::cout << "No slot with that number in the bag\n\n";
	else if (this->inventory[idx] == NULL)
		std::cout << "Empty slot\n\n";
	else
		this->inventory[idx]->use(target);
}
