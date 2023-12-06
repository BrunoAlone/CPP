/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialPrompt.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:37:06 by brolivei          #+#    #+#             */
/*   Updated: 2023/10/20 15:20:37 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INITIALPROMPT_HPP
#define INITIALPROMPT_HPP

#include <iostream>
#include <string>
#include <ctime>

class	InitialPrompt
{
	private:
		std::string	PromptInit;
	public:
		void	writePromptInit();
		void	writeRules();
};

#endif
