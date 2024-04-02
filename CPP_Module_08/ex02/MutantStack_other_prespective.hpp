/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack_other_prespective.hpp                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:20:58 by brolivei          #+#    #+#             */
/*   Updated: 2024/04/02 13:18:31 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_OTHER_PRESPECTIVE_HPP
#define MUTANTSTACK_OTHER_PRESPECTIVE_HPP

#include <iostream>
#include <stack>
#include <iterator>

/*
		typedef typename std::stack<T>::container_type::iterator	it;

		Intended to represent iterator over the underlying container type of
	the std::stack, accessed via the "container_type".


*/

template <typename T>
class	MutantStack
{
	private:
		std::stack<T>	stack;
	public:
		// Orthodox
		MutantStack();
		MutantStack(const MutantStack& other);
		MutantStack&	operator=(const MutantStack& other);
		~MutantStack();

		// Typedef for iterator
		typedef typename std::stack<T>::container_type::iterator	it;

		// Return for iterators
		it	begin();
		it	end();

		// std::stack member functions
		bool	empty() const;
		size_t	size() const;
		T&		top() const;
		void	push(const T& val);
		void	pop();
		void	swap(MutantStack& other);

		template <typename... Args> void	emplace(Args&&... args);
};

// Orthodox definition

template <typename T> MutantStack<T>::MutantStack()
{
	std::cout << "Default\n";
}

template <typename T> MutantStack<T>::MutantStack(const MutantStack& other) : stack(other)
{
	std::cout << "Copy constructor\n";
}

template <typename T> MutantStack<T>&	MutantStack<T>::operator=(const MutantStack& other)
{
	std::cout << "Copy assignment\n";
	if (this != &other)
		this->stack = other.stack;
	return (*this);
}

template <typename T> MutantStack<T>::~MutantStack()
{
	std::cout << "Destructor\n";
}

// Iterators

template <typename T>typename MutantStack<T>::it	MutantStack<T>::begin()
{
	return (this->stack.c.begin());
}

template <typename T>typename MutantStack<T>::it	MutantStack<T>::end()
{
	return (this->stack.c.end());
}

// Member function from std::stack

template <typename T>bool	MutantStack<T>::empty() const
{
	return (this->stack.empty());
}

template <typename T>size_t	MutantStack<T>::size() const
{
	return (this->stack.size());
}

template <typename T>T&	MutantStack<T>::top() const
{
	return (this->stack.top());
}

template <typename T>void	MutantStack<T>::push(const T& val)
{
	this->stack.push(val);
}

template <typename T>void	MutantStack<T>::pop()
{
	this->stack.pop();
}

template <typename T>void	MutantStack<T>::swap(MutantStack& other)
{
	swap(this->stack, other.stack);
}

template <typename T>
template <typename... Args>void	MutantStack<T>::emplace(Args&&... args)
{
	this->stack.emplace(std::forward<Args>(args)...);
}

#endif
