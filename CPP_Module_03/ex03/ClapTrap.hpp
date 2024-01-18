/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:19:37 by bruno             #+#    #+#             */
/*   Updated: 2024/01/18 09:29:30 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{
	protected:
		std::string	Name_;
		int			hitPoints_;
		int			energyPoints_;
		int			attackDamage_;
	public:
		ClapTrap();
		ClapTrap(std::string& name);
		ClapTrap(const ClapTrap &other);
		ClapTrap	&operator=(const ClapTrap &other);
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		// Get
		std::string	getName() const;
		int	getHitPoints() const;
		int	getEnergyPoints() const;
		int	getAttackDamage() const;
};

std::ostream&	operator<<(std::ostream& os, const ClapTrap& obj);

#endif
