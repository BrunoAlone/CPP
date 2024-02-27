/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:59:09 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/27 14:45:59 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource: Default constructor called\n\n";
	for (int i = 0; i < 4; i++)
		this->stack[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	std::cout << "MateriaSource: Copy constructor called\n\n";
	for (int i = 0; i < 4; i++)
	{
		if (this->stack[i] == NULL)
			delete this->stack[i];
		this->stack[i] = other.stack[i];
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other)
{
	std::cout << "MateriaSource: Copy assignment operator called\n\n";
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->stack[i] != NULL)
				delete this->stack[i];
		}
		for (int i = 0; i < 4; i++)
		{
			if (other.stack[i] != NULL)
				this->stack[i] = other.stack[i]->clone();
			else
				this->stack[i] = NULL;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource: Destructor called\n\n";
	for (int i = 0; i < 4; i++)
	{
		if (this->stack[i] != NULL)
			delete this->stack[i];
	}
}

void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->stack[i] == NULL)
		{
			this->stack[i] = m;
			break;
		}
		if (i == 3)
		{
			std::cout << "MateriaSource: Stack is full\n\n";
			delete m;
		}
	}
}

AMateria*	MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->stack[i] != NULL)
		{
			if (this->stack[i]->getType().compare(type) == 0)
			{
				return this->stack[i]->clone();
			}
		}
	}
	std::cout << "UnKnown Materia!\n\n";
	return (0);
}
