/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:16:48 by brolivei          #+#    #+#             */
/*   Updated: 2024/04/09 16:30:21 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <cstdlib>

#include <stack>

class	RPN
{
	private:
		std::string		expression_;

		std::stack<std::string>	exp;

		void	ReversePolishNotation();
		int		DoOperation(int first, int second, std::string& operation);
	public:
		RPN();
		//RPN(const RPN& other);
		//RPN&	operator=(const RPN& other);
		~RPN();

		// Special constructor
		RPN(const std::string& input);
};

#endif
