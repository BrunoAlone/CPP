/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:08:11 by bruno             #+#    #+#             */
/*   Updated: 2024/03/28 13:43:57 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

/*
		Keyword template:

		Template are expanded at compiler time.

		The ideia is to pass the data type, or the compiler it self
	detects it, so we don't need to write the same function
	for diferent data types.

		This declaration: "template <typename T>" tells the compiler
	that this function is a template that will receive a type
	"T", that will be defined when the function is called.
*/

template <typename T> void	Swap(T& x, T& y)
{
	T	z;

	z = x;
	x = y;
	y = z;
}

template <typename T> T	min(T x, T y)
{
	if (x == y)
		return (y);
	else
		return ((x < y)? x: y);
}

template <typename T> T	max(T x, T y)
{
	if (x == y)
		return (y);
	else
		return ((x > y)? x: y);
}

#endif
