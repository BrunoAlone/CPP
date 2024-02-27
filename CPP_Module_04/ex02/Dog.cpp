/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:43:36 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/27 13:57:14 by bruno            ###   ########.fr       */
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
	this->brain_ = new Brain(*other.brain_);
}

Dog&	Dog::operator=(const Dog& other)
{
	std::cout << "Dog: Copy assignment operator called\n\n";
	if (this != &other)
	{
		this->type_ = other.type_;
		delete brain_;
		this->brain_ = new Brain(*other.brain_); // Deep Copy: Create a new brain, not just point to the already created brain
		// from the other object.
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

Brain*	Dog::getBrain() const
{
	return (this->brain_);
}
