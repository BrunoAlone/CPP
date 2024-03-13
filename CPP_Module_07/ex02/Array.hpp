/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:33:07 by bruno             #+#    #+#             */
/*   Updated: 2024/03/13 17:19:48 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T> class Array
{
	private:
		T*	array;
		unsigned int	size_;
	public:
		Array();
		Array(Array& other);
		//Array&	operator=(Array& other);
		Array(int n);
		~Array();

		// Methods
		void	printArray();
		size_t	Size();

		// Getter
		T*	getArray();

};

template <typename T> Array<T>::Array() : size_(0)
{
	std::cout << "Default constructor called\n\n";
	array = new T[0]; // Allocate memory for array
}

template <typename T> Array<T>::Array(Array& other)
{
	std::cout << "Copy constructor called\n\n";
	if (other.getArray() != NULL)
	{
		this->array = new T[other.Size()];
		for (size_t i = 0; i < other.Size(); i++)
			this->array[i] = other.getArray()[i];
	}
}

template <typename T> Array<T>::Array(int n) : size_(n)
{
	this->array = new T[n];
	for (int i = 0; i < n; i++)
		this->array[i] = T(); // T() calls the defautl constructor of the type in question.
							  // For example, if T is an INT, that place of the array will be 0 (The default constructor of the INT).
}

template <typename T> Array<T>::~Array()
{
	std::cout << "Destructor called\n\n";

	delete[] this->array;
}

template <typename T> size_t	Array<T>::Size()
{
	return (this->size_);
}

template <typename T> void	Array<T>::printArray()
{
	std::cout << "Printing array:\n";
	if (this->array != NULL)
	{
		for (size_t i = 0; i < Array::Size(); i++)
			std::cout << this->array[i] << " ";
		std::cout << std::endl;
	}
}

template <typename T> T*	Array<T>::getArray()
{
	return (this->array);
}

#endif
