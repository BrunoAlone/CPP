/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:01:26 by bruno             #+#    #+#             */
/*   Updated: 2023/12/15 15:24:57 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class	Harl
{
	private:
		std::string	level[4];
		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);
	public:
		Harl();
		void	complain(std::string calledLevel);
};

#endif
