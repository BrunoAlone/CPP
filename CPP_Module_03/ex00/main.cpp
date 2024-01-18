/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:46:40 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/18 09:25:07 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	std::string	name = "Manuel";
	ClapTrap	A(name);
	ClapTrap	B;

	A.attack("Jose");
	A.takeDamage(4);
	A.takeDamage(6);
	A.takeDamage(1);
	A.beRepaired(2);

	B.attack("Rui");

	return (0);
}
