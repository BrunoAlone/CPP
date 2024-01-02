/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:01:26 by bruno             #+#    #+#             */
/*   Updated: 2024/01/02 14:03:28 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class	Harl
{
	private:
		std::string	levels[4];
		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);
	public:
		Harl();
		void	complain(std::string level);
};

#endif
