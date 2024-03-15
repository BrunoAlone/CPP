/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:50:15 by bruno             #+#    #+#             */
/*   Updated: 2024/03/13 14:15:40 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int	main()
{
	int	array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	::iter(array, 10, ::print);

	std::string	array_string[3] = {"Hello", "World", "!"};

	::iter(array_string, 3, ::print);

	return (0);
}
