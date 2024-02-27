/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:29:27 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/27 14:29:13 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria()
{
	std::cout << "Cure: Default constructor called\n\n";
	this->type_ = "cure";
}

Cure::Cure(const Cure& other) : AMateria()
{
	std::cout << "Cure: Copy constructor called\n\n";
	this->type_ = other.type_;
}

Cure&	Cure::operator=(const Cure& other)
{
	std::cout << "Cure: Copy assignment operator called\n\n";
	(void)other;
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure: Default destructor called\n\n";
}

AMateria*	Cure::clone() const
{
	AMateria	*clone = new Cure(*this);

	return (clone);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
