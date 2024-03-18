/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:33:56 by brolivei          #+#    #+#             */
/*   Updated: 2024/03/18 14:12:36 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type_("Animal")
{
	std::cout << "Animal: Default constructor called\n\n";
}

// Protected memebrs are accessible on derived classes
Animal::Animal(const Animal& other) : type_(other.type_)
{
	std::cout << "Animal: Copy constructor called\n\n";
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
	std::cout << "Animal: Default Destructor called\n\n";
}

std::string	Animal::getType() const
{
	return (this->type_);
}

void	Animal::makeSound() const
{
	std::cout << "Every animal make a sound!!!\n\n";
}
