/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:30:17 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/30 12:33:55 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

#include <cstdlib>

int	main()
{
	const Animal*	array[10];

	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}

	for (int i = 0; i < 10; i++)
		delete array[i];


	return (0);
}
