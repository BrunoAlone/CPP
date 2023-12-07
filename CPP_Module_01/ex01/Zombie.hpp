/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:59:29 by brolivei          #+#    #+#             */
/*   Updated: 2023/12/07 15:41:49 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class	Zombie
{
	private:
		std::string	name;
	public:
		Zombie();
		Zombie(std::string input_name);
		~Zombie();
		void	announce(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
