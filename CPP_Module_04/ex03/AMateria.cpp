/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:55:51 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/31 11:21:36 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria: Default constructor called\n\n";
}

AMateria::AMateria(const AMateria& other)
{
	std::cout << "AMateria: Copy constructor called\n\n";
	this->type_ = other.type_;
}

AMateria&	AMateria::operator=(const AMateria& other)
{
	std::cout << "AMateria: Copy assignment operator called\n\n";
	if (this != &other)
	{
		this->type_ = other.type_;
	}
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria: Destructor called\n\n";
}

AMateria::AMateria(const std::string& type)
{
	std::cout << "AMateria: Constructor with \"type\" called\n\n";
	this->type_ = type;
}

const std::string&	AMateria::getType() const
{
	return (this->type_);
}
