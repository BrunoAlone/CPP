/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:14:38 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/05 17:20:07 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria()
{
	std::cout << "Ice: Default constructor called\n\n";
	this->type_ = "ice";
}

Ice::Ice(const Ice& other)
{
	std::cout << "Ice: Copy constructor called\n\n";
	this->type_ = other.type_;
}

Ice&	Ice::operator=(const Ice& other)
{
	std::cout << "Ice: Copy assignment operator called\n\n";
	if (this != &other)
	{
		this->type_ = other.type_;
	}
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice: Default destructor called\n\n";
}

AMateria*	Ice::clone() const
{
	Ice	*clone = new Ice();

	return (clone);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
