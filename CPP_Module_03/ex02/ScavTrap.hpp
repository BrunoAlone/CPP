/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:45:41 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/22 13:59:47 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

/*
		A ideia deste exercicio e criar uma classe que herda metodos e atributos
	de uma outra classe. No caso a classe ScavTrap herda metodos e atributos da
	classe ClaoTrap.

		A sintax e esta: "class	ScavTrap : public ClapTrap" ao cria a classe.

		A classe ScavTrap herda tudo o que e classificado como "public"
	da classe ClapTrap e herda tambem o que e classificado como "protected".

		Ao criar um objeto da classe ScavTrap e criada uma corrente de constructor e
	distructor tipicas de classes que derivam umas das outras.

		Sendo que a classe ScavTrap deriva da classe ClapTrap,
	ao criar um objeto da classe ScavTrap o contructor da classe
	ClapTrap e chamado antes de tudo, para garantir que a classe
	base esteja inicializada antes da derivada comecar a sua inicializacao.

		Por outro lado, quando um objeto sai da memoria ou e apagado
	primeiramente o destructor da classe derivada e chamado e so depois o
	da classe base. Neste caso primeiro o destructor da classe ScavTrap
	e de seguida o da ClapTrap. Isto garante que os recursos da classe derivada
	sao limpos antes da classe base ser destruida.
*/

class	ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string& name);
		ScavTrap(const ScavTrap &other);
		ScavTrap	&operator=(const ScavTrap &other);
		~ScavTrap();

		void	attack(const std::string& target);
		void	guardGate();
};

std::ostream&	operator<<(std::ostream& os, const ScavTrap& obj);

#endif
