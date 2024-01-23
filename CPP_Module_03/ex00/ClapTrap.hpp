/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:19:37 by bruno             #+#    #+#             */
/*   Updated: 2024/01/23 17:27:10 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

/*
			Esta classe tem os parametros essencias de uma classe
		escita na forma ortodoxa.

			- Default constructor
			- Copy constructor
			- Copy assignment operator
			- Default destructor

			A classe tem tambem um constructor que recebe um string
		que sera o nome da ClapTrap como parametro.

			Tem tambem tres outros metodos que sao:

				void	attack(const std::string& target);
				void	takeDamage(unsigned int amount);
				void	beRepaired(unsigned int amount);

			Os seu atributos privados sao os especificados no subject
*/

class	ClapTrap
{
	private:
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

		// Getters
		std::string	getName() const;
		int	getHitPoints() const;
		int	getEnergyPoints() const;
		int	getAttackDamage() const;

		// Member functions
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

std::ostream&	operator<<(std::ostream& os, const ClapTrap& obj);

#endif
