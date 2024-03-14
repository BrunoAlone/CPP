/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:06:28 by bruno             #+#    #+#             */
/*   Updated: 2024/03/14 11:15:40 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main()
{
	Array<int>	x(10);
	Array<int>	y = x;

	std::cout << "Size of the array x: " <<x.Size() << std::endl;
	x.printArray();

	std::cout << "Size of the array y: " <<y.Size() << std::endl;
	y.printArray();

	for (int i = 0; i < 10; i++)
		x[i] = i;

	std::cout << "Printing Array X:\n";
	x.printArray();

	y = x;

	std::cout << "Printing Array Y:\n";
	y.printArray();

	std::cout << "Out of the bound in X:\n\n";

	try {
	for (int i = 0; i < 11; i++)
		x[i] = i;
	} catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
