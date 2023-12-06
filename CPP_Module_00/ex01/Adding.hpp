/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adding.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:14:43 by brolivei          #+#    #+#             */
/*   Updated: 2023/10/20 15:14:24 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADDING_HPP
#define ADDING_HPP

#include <iostream>
#include <string>

class	Adding
{
	private:
		std::string	input;
	public:
		std::string	addText(std::string msg);
		std::string	addNumber();
};

#endif
