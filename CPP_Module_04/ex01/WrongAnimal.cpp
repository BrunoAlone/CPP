/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:16:15 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/30 11:18:03 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal: Default constructor called\n\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "WrongAnimal: Copy constructor called\n\n";
	this->type_ = other.type_;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "WrongAnimal: Copy assignment operator called\n";
	if (this != &other)
	{
		this->type_ = other.type_;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: Destructor constructor called\n\n";
}

std::string	WrongAnimal::getType() const
{
	return (this->type_);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Every WrongAnimal make a sound!!!\n\n";
}
