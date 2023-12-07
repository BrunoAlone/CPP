/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:44:49 by brolivei          #+#    #+#             */
/*   Updated: 2023/12/07 13:48:05 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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
