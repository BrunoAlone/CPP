/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:40:29 by bruno             #+#    #+#             */
/*   Updated: 2024/03/28 13:29:43 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T> void	print(T x)
{
	std::cout << x << " ";
}

template <typename T> void	iter(T* array, size_t len, void (*func)(T x))
{
	for (size_t i = 0; i < len; i++)
		func(array[i]);
	std::cout << "All elements of the array where iterated" << std::endl;
}

#endif
