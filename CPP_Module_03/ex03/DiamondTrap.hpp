/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:20:25 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/23 18:48:35 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

/*
		Neste ultimo execicio deste modulo, teremos que criar
	uma classe DiamondTrap, que ira herdar tanto da classe
	FragTrap como da class ScavTrap.

		O unico atributo privado desta classe sera o nome, que o
	subject especifica, o nome dessa variavel, tem de ser exatamente
	igual ao da classe ClapTrap.

		Para que evitar o "Diamond problem" FragTrap e ScavTrap
	tem que declarar a ClapTrap de forma virtual. Isto previne
	que a ClapTrap seja duplicada, podendo causar problemas, sendo que
	Diamond trap estaria a herdar parametros de duas instancias
	diferentes da ClapTrap.
*/

class	DiamondTrap: public virtual ScavTrap, public virtual FragTrap
{
	private:
		std::string	Name_;
	public:
		DiamondTrap();
		DiamondTrap(const std::string& name);
		DiamondTrap(const DiamondTrap& other);
		DiamondTrap&	operator=(const DiamondTrap& other);
		~DiamondTrap();

		void	attack(const std::string& target);
		void	whoAmI();
};

#endif
