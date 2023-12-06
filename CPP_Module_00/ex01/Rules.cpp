/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rules.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:21:22 by brolivei          #+#    #+#             */
/*   Updated: 2023/10/23 14:47:46 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rules.hpp"

Rules::Rules()
{
	add = "ADD";
	search = "SEARCH";
	exit = "EXIT";
}

std::string	Rules::getAdd()
{
	return(add);
}
std::string	Rules::getSearch()
{
	return(search);
}
std::string	Rules::getExit()
{
	return(exit);
}
