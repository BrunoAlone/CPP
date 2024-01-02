/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:47:12 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/02 12:04:00 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*horde = zombieHorde(10, "Manel");

	if (horde)
	{
		for (int i = 0; i < 10; i++)
			horde[i].announce();
		delete [] horde; // "delete []" is used to free arrays
	}
	return (0);
}
