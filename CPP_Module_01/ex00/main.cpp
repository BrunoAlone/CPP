/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:35:43 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/02 14:52:07 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*zombie1 = newZombie("ZUZU");

	zombie1->announce();

	randomChump("XUXU");
	delete zombie1; // Liberta a memória.
	return (0);
}
