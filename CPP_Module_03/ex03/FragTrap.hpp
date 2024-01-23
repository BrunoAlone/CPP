/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:54:58 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/23 19:05:25 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

/*
			Usando a palavra chave "virtual" ao herdar a classe ClapTrap
		tanto na classe FragTrap como na classe ScavTrap, garantimos que
		na classe Diamond, ao herdar tanto a Scav como a Trap, usamos uma
		só instancia da classe Parent ClapTrap!! Desta forma evitamos ambiguidades
		de atributos.
*/

class	FragTrap : public virtual ClapTrap
{
	public:
		FragTrap(); // Default constructor
		FragTrap(const FragTrap& other); // Copy constructor
		FragTrap&	operator=(const FragTrap& other); // Copy assignment operator
		~FragTrap(); // Destructor

		FragTrap(const std::string& name);

		int	getAttack();

		void	attack(const std::string &target);
		void	highFiveGuys(void);
};

std::ostream&	operator<<(std::ostream& os, const FragTrap& obj);

#endif
