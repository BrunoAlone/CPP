/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:52:49 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/30 12:25:46 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat: Default constructor called\n\n";
	this->type_ = "Cat";
	this->brain_ = new Brain();
}

Cat::Cat(const Cat& other) : Animal()
{
	std::cout << "Cat: Copy constructor called\n\n";
	this->type_ = other.type_;
	this->brain_ = other.brain_;
}

Cat&	Cat::operator=(const Cat& other)
{
	std::cout << "Cat: Copy assignment operator called\n\n";
	if (this != &other)
	{
		this->type_ = other.type_;
		delete this->brain_;
		this->brain_ = new Brain(*other.brain_);
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat: Destructor called\n\n";
	delete this->brain_;
}

void	Cat::makeSound() const
{
	std::cout << "The cat says Miauuuu Miauuuu\n\n";
}
