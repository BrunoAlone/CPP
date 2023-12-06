/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:26:09 by brolivei          #+#    #+#             */
/*   Updated: 2023/12/06 14:51:37 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string input_name)
{
	name = input_name;
}

Zombie::~Zombie()
{
	std::cout << name << " his dead!!!" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

/*
		Nesta função, a palavra comando "new" é responsável por alocar dinamicamente
	memória para o objeto "Zombie" que está a ser criado ao ser chamado o constructor
	da classe Zombie. O operador "new" retorna um ponteiro para a memória alocada.
		Desta forma, podemos então, usar este objeto criado, fora desta função, pois
	está alocado dinamicamente.

		Nota: É importante depois desta alocação, dar free da memória alocada.
			  Para esse efeito podemos usar o operador "delete".
*/

Zombie	*Zombie::newZombie(std::string name)
{
	return new Zombie(name);
}

void	Zombie::randomChump(std::string name)
{
	Zombie	randomZombie(name);
	randomZombie.announce();
}
