/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:40:37 by brolivei          #+#    #+#             */
/*   Updated: 2024/03/28 16:45:30 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N_(0)
{
	std::cout << "Default\n";
}

Span::Span(const Span& other) : N_(other.getN())
{
	std::cout << "Copy\n";
	for (std::vector<int>::const_iterator it = other.getVec().begin(); it != other.getVec().end(); it++)
		this->addNumber(*it);
}

Span&	Span::operator=(const Span& other)
{
	std::cout << "Assignment\n";
	if (this == &other)
		return (*this);
	this->N_ = other.getN();
	for (std::vector<int>::const_iterator it = other.getVec().begin(); it != other.getVec().end(); it++)
		this->addNumber(*it);
	return (*this);
}

Span::~Span()
{
	std::cout << "Destructor\n";
}

// ==========Special Constructors==========

Span::Span(unsigned int N) : N_(N)
{
	std::cout << "Constructor: Maximum of integers accepted\n";
}

// ==========Member Functions==========

void	Span::addNumber(const int x)
{
	if (this->vec.size() == this->N_)
	{
		std::cout << "The maximum size of this vector is " << this->N_ << std::endl;
		throw LimitOfElementsReached();
	}
	else
		this->vec.push_back(x);
}

void	Span::printVector()
{
	for (std::vector<int>::iterator i = this->vec.begin(); i != this->vec.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;
}

int	longestSpan()
{
	
}

// ==========Getter==========

unsigned int	Span::getN() const
{
	return (this->N_);
}

const std::vector<int>&	Span::getVec() const
{
	return (this->vec);
}

// ==========Exception==========

const char*	Span::LimitOfElementsReached::what() const throw()
{
	return ("Vector is full\n");
}
