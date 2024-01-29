/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:43:36 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/29 13:11:14 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog: Default constructor called\n\n";
	this->type_ = "Dog";
}

Dog::Dog(const Dog& other) : Animal()
{
	std::cout << "Dog: Copy constructor called\n\n";
	this->type_ = other.type_;
}

Dog&	Dog::operator=(const Dog& other)
{
	std::cout << "Dog: Copy assignment operator called\n\n";
	if (this != &other)
	{
		this->type_ = other.type_;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog: Default destructor called\n\n";
}

void	Dog::makeSound() const
{
	std::cout << "The dog says Bark Bark\n\n";
}
