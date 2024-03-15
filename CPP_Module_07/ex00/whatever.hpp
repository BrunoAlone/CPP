/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:08:11 by bruno             #+#    #+#             */
/*   Updated: 2024/03/13 13:31:45 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

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
