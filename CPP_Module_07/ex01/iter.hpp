/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:40:29 by bruno             #+#    #+#             */
/*   Updated: 2024/03/13 14:13:03 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T> void	print(T x)
{
	std::cout << x << std::endl;
}

template <typename T> void	iter(T* array, size_t len, void (*func)(T))
{
	for (size_t i = 0; i < len; i++)
		func(array[i]);
	std::cout << "All elements of the array where itereted" << std::endl;
}

#endif
