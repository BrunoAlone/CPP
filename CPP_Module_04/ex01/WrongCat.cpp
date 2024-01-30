/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:20:35 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/30 11:21:50 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat: Default constructor called\n\n";
	this->type_ = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal()
{
	std::cout << "WrongCat: Copy constructor called\n\n";
	this->type_ = other.type_;
}

WrongCat&	WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat: Copy assignment operator called\n\n";
	if (this != &other)
	{
		this->type_ = other.type_;
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: Destructor called\n\n";
}

void	WrongCat::makeSound() const
{
	std::cout << "The WrongCat says Miauuuu Miauuuu\n\n";
}
