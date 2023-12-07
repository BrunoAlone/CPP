/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:32:35 by brolivei          #+#    #+#             */
/*   Updated: 2023/12/07 15:51:20 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string input_name)
{
	name = input_name;
}

Zombie::~Zombie()
{
	std::cout << "Zombie" << name << "died!\n";
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ\n";
}
