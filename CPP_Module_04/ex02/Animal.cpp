/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:33:56 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/05 16:33:39 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal: Default constructor called\n\n";
}

Animal::Animal(const Animal& other)
{
	std::cout << "Animal: Copy constructor called\n\n";
	this->type_ = other.type_;
}

Animal&	Animal::operator=(const Animal& other)
{
	std::cout << "Animal: Copy assignment operator called\n";
	if (this != &other)
	{
		this->type_ = other.type_;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal: Destructor constructor called\n\n";
}

std::string	Animal::getType() const
{
	return (this->type_);
}

// void	Animal::makeSound() const
// {
// 	std::cout << "Every animal make a sound!!!\n\n";
// }
