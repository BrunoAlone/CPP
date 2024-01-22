/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:54:58 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/22 13:58:58 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
		FragTrap(); // Default constructor
		FragTrap(const FragTrap& other); // Copy constructor
		FragTrap&	operator=(const FragTrap& other); // Copy assignment operator
		~FragTrap(); // Destructor

		FragTrap(const std::string& name);

		void	attack(const std::string &target);
		void	highFiveGuys(void);
};

std::ostream&	operator<<(std::ostream& os, const FragTrap& obj);

#endif
