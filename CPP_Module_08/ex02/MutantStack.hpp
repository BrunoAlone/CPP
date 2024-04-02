/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:18:53 by brolivei          #+#    #+#             */
/*   Updated: 2024/04/02 16:41:23 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <iterator>
#include <stack>
#include <deque>

/*
		typedef typename std::stack::container_type::iterator	it;

		Intended to represent iterator over the underlying container type
	of std::stack, accessed via the container_type
*/

template <typename T, typename container = std::deque<T> > class	MutantStack : public std::stack<T, container>
{
	public:
		// Orthodox
		MutantStack();
		MutantStack(const MutantStack& other);
		MutantStack&	operator=(const MutantStack& other);
		~MutantStack();

		typedef typename std::stack<T, container>::container_type::iterator	iterator;

		iterator	begin();
		iterator	end();
};

// Orthodox

template <typename T, typename container>MutantStack<T, container>::MutantStack()
{}

template <typename T, typename container>MutantStack<T, container>::MutantStack(const MutantStack& other) : std::stack<T, container>(other)
{

}

template <typename T, typename container>MutantStack<T, container>&	MutantStack<T, container>::operator=(const MutantStack& other)
{
	if (this != &other)
		std::stack<T, container>::operator=(other);
	return (*this);
}

template <typename T, typename container> MutantStack<T, container>::~MutantStack()
{
	std::cout << "Destructor\n";
}

// Iterators

template <typename T, typename container>typename MutantStack<T, container>::iterator	MutantStack<T, container>::begin()
{
	return (this->c.begin());
}

template <typename T, typename container>typename MutantStack<T, container>::iterator	MutantStack<T, container>::end()
{
	return (this->c.end());
}


#endif
