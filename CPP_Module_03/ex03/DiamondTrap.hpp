/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:20:25 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/22 15:12:45 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

/*
		Neste ultimo execicio deste modulo, teremos que criar
	uma classe DiamondTrap, que ira herdar tanto da classe
	FragTrap como da class ScavTrap
*/

class	DiamondTrap: public FragTrap, public ScavTrap
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
