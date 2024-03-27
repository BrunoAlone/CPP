/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:33:07 by bruno             #+#    #+#             */
/*   Updated: 2024/03/27 17:09:59 by brolivei         ###   ########.fr       */
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
		// Ortodox
		Array();
		Array(Array& other);
		Array&	operator=(Array& other);
		~Array();

		// Constructor

		Array(int n);

		// Methods
		void	printArray();
		size_t	Size() const;

		// Overload []
		T&	operator[](unsigned int index);


		class	outOfBoundsException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

template <typename T> Array<T>::Array() : size_(0)
{
	std::cout << "Default constructor called\n";
	array = new T[0]; // Allocate memory for array
}

template <typename T> Array<T>::Array(Array& other) : size_(other.Size())
{
	std::cout << "Copy constructor called\n";
	this->array = new T[other.Size()];
	for (unsigned int i = 0; i < other.Size(); i++) // Size_ is an unsigned int
		this->array[i] = other[i];
}

template <typename T> Array<T>&	Array<T>::operator=(Array& other)
{
	std::cout << "Copy assignment operator called\n";
	if (this == &other)
		return (*this);
	this->size_ = other.Size();
	delete[] this->array;
	this->array = new T[size_];
	for (unsigned int i = 0; i < size_; i++)
		this->array[i] = other[i];
	return (*this);
}

template <typename T> Array<T>::Array(int n) : size_(n)
{
	std::cout << "Constructor with size called\n";
	this->array = new T[n];
	for (int i = 0; i < n; i++)
		this->array[i] = T(); // T() calls the defautl constructor of the type in question.
							  // For example, if T is an INT, that place of the array will be 0 (The default constructor of the INT).
}

template <typename T> Array<T>::~Array()
{
	std::cout << "Destructor called\n";

	delete[] this->array;
}

template <typename T> size_t	Array<T>::Size() const
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

template <typename T> T&	Array<T>::operator[](unsigned int index)
{
	if (index >= this->size_)
		throw outOfBoundsException();
	else
		return (this->array[index]);
}

template <typename T> const char* Array<T>::outOfBoundsException::what() const throw()
{
	return ("Index outOfBound.\n");
}

#endif
