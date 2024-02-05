/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:29:27 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/05 17:25:48 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Cure: Default constructor called\n\n";
	this->type_ = "Cure";
}

Cure::Cure(const Cure& other)
{
	std::cout << "Cure: Copy constructor called\n\n";
	this->type_ = other.type_;
}

Cure&	Cure::operator=(const Cure& other)
{
	std::cout << "Cure: Copy assignment operator called\n\n";
	// if (this != &other)
	// {
	// 	this->type_ = other.type_;
	// }
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure: Default destructor called\n\n";
}

AMateria*	Cure::clone() const
{
	Cure	*clone = new Cure(*this);

	return (clone);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
