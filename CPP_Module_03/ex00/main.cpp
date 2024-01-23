/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:46:40 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/23 17:42:25 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	std::string	name = "Manuel";

	std::cout << "-----ClapTrap is being created-----\n\n";
	ClapTrap	A(name);

	std::cout << "\n\n-----ClapTrap information-----\n\n";
	std::cout << A;

	std::cout << "\n\n-----ClapTrap attack Jose-----\n\n";
	A.attack("Jose");

	std::cout << "\n\n-----ClapTrap take damage-----\n\n";
	A.takeDamage(4);

	std::cout << "\n\n-----ClapTrap repaired him self-----\n\n";
	A.beRepaired(2);

	std::cout << "\n\n-----ClapTrap take damage and die-----\n\n";
	A.takeDamage(100);

	std::cout << "\n\n-----ClapTrap try to repair him self when is already dead-----\n\n";
	A.beRepaired(10);

	std::cout << "\n\n-----ClapTrap is destroyed-----\n\n";
	return (0);
}
