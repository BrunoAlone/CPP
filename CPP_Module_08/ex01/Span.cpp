/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:40:37 by brolivei          #+#    #+#             */
/*   Updated: 2024/03/28 15:06:09 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N_(0)
{
	std::cout << "Default\n";
}

// Span::Span(const Span& other) : N_(other.getN())
// {
// 	std::vector<int>::iterator	it;

// 	it = other.getVec().begin();
// }

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
	if (this->vec.size() == N_)
	{
		std::cout << "Vector is full\n";
		return;
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

// ==========Getter==========

unsigned int	Span::getN() const
{
	return (this->N_);
}

std::vector<int>	Span::getVec() const
{
	return (this->vec);
}
