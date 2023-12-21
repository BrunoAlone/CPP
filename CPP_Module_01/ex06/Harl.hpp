/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:42:34 by bruno             #+#    #+#             */
/*   Updated: 2023/12/21 11:10:28 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class	Harl
{
	private:
		enum	LogLevel
		{
			DEBUG,
			INFO,
			WARNING,
			ERROR
		};
		std::string	level[4];
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		Harl();
		LogLevel	logDefine(const std::string &calledLevel);
		void	filter(std::string calledLevel);
		void	complain(std::string calledLevel);
};

#endif
