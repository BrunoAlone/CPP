/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:43:36 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/30 12:27:37 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog: Default constructor called\n\n";
	this->type_ = "Dog";
	this->brain_ = new Brain();
}

Dog::Dog(const Dog& other) : Animal()
{
	std::cout << "Dog: Copy constructor called\n\n";
	this->type_ = other.type_;
	this->brain_ = other.brain_;
}

Dog&	Dog::operator=(const Dog& other)
{
	std::cout << "Dog: Copy assignment operator called\n\n";
	if (this != &other)
	{
		this->type_ = other.type_;
		delete brain_;
		this->brain_ = new Brain(*other.brain_);
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog: Default destructor called\n\n";
	delete this->brain_;
}

void	Dog::makeSound() const
{
	std::cout << "The dog says Bark Bark\n\n";
}
