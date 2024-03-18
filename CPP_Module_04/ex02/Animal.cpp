/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:33:56 by brolivei          #+#    #+#             */
/*   Updated: 2024/03/18 15:14:56 by bruno            ###   ########.fr       */
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
