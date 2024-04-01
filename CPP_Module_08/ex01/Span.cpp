/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:40:37 by brolivei          #+#    #+#             */
/*   Updated: 2024/04/01 17:07:42 by brolivei         ###   ########.fr       */
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
		std::cout << " " << *i;
	std::cout << std::endl;
}

int	Span::longestSpan()
{
	if (this->vec.size() <= 1)
		throw NoNumbersNoSpan();

	int	min_;
	int	max_;

	std::vector<int>::iterator	first = this->vec.begin();
	std::vector<int>::iterator	last = this->vec.end();

	min_ = *std::min_element(first, last);
	max_ = *std::max_element(first, last);

	return (max_ - min_);
}

int	Span::shortestSpan()
{
	if (this->vec.size() <= 1)
		throw NoNumbersNoSpan();

	int	x = std::numeric_limits<int>::max();
	std::vector<int>			tmp(this->vec);
	std::vector<int>::iterator	it = tmp.begin();
	std::vector<int>::iterator	last = tmp.end();

	//after sort array
	std::sort(it, last);

	for (std::vector<int>::iterator i = tmp.begin() + 1; i != tmp.end(); i++)
	{
		if ((*i - *it) < x)
			x = *i - *it;
		it++;
	}
	return (x);
}

void	Span::addNumberFromRange(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	//std::cout << "Teste: " << std::distance(first, last) << std::endl;
	while (first != last)
	{
		try {
			this->addNumber(*first);
		} catch(std::exception& e) {
			std::cout << "Exception: " << e.what() << std::endl;
			return ;
		}
		first++;
	}
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
	return ("\033[31mVector is full\033[0m\n");
}

const char*	Span::NoNumbersNoSpan::what() const throw()
{
	return ("\033[31mTry to find Span, but there are no numbers or no Span.\033[0m\n");
}
