/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:42:33 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/30 12:02:03 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain: Default Constructor called\n\n";
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain: Copy Constructor called\n\n";
	for (int i = 0; i < 100; i++)
		this->ideas_[i] = other.ideas_[i];
}

Brain&	Brain::operator=(const Brain& other)
{
	std::cout << "Brain: Copy assignment operator called\n\n";
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas_[i] = other.ideas_[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain: Destructor called\n\n";
}
