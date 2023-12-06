/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:35:43 by brolivei          #+#    #+#             */
/*   Updated: 2023/12/06 14:53:23 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*zombie1 = Zombie::newZombie("ZUZU");

	zombie1->announce();

	delete zombie1; // Liberta a memória.

	Zombie::randomChump("XUXU");

	return (0);
}
