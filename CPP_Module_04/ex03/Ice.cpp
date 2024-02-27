/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:14:38 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/27 14:29:26 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria()
{
	std::cout << "Ice: Default constructor called\n\n";
	this->type_ = "ice";
}

Ice::Ice(const Ice& other) : AMateria()
{
	std::cout << "Ice: Copy constructor called\n\n";
	this->type_ = other.type_;
}

Ice&	Ice::operator=(const Ice& other)
{
	std::cout << "Ice: Copy assignment operator called\n\n";
	(void)other;
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice: Default destructor called\n\n";
}

AMateria*	Ice::clone() const
{
	AMateria	*clone = new Ice(*this);

	return (clone);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
