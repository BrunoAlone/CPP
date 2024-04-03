/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:18:53 by brolivei          #+#    #+#             */
/*   Updated: 2024/04/03 15:01:25 by brolivei         ###   ########.fr       */
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

/*
		Declaration of class template.

		It's a template with two parameters, T and container.

		T will be the type of variable that our stack will store.
		conatiner, it's the type of container that stack will use.
	If it's not specified when instatiating MutantStack, the default
	will be std::deque. Like the original std::stack :)
*/
template <typename T, typename container = std::deque<T> > class	MutantStack : public std::stack<T, container>
{
	public:
		// Orthodox
		MutantStack();
		MutantStack(const MutantStack& other);
		MutantStack&	operator=(const MutantStack& other);
		~MutantStack();

		// typedef typename std::stack<T, container>::container_type::iterator	iterator; // Here, we define a type, called, iterator for
		// our class. We call the type of stack that we are dealing (std::stack<T, container>), them we access to the type of container
		// used in that stack (alias from std::stack -> container_type, that represents the type of container in the stack), and than we
		// access the iterator type of that container.
		typedef typename container::iterator	iterator;

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
	// The c member is inherited from std::stack and represents the container
	// used on the stack.
	return (this->c.begin());
}

template <typename T, typename container>typename MutantStack<T, container>::iterator	MutantStack<T, container>::end()
{
	return (this->c.end());
}


#endif
