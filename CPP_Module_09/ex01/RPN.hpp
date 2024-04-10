/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:16:48 by brolivei          #+#    #+#             */
/*   Updated: 2024/04/10 14:42:07 by brolivei         ###   ########.fr       */
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

		std::stack<int>	exp;

		bool	isNumber(std::string& input);
		bool	isOperand(std::string& input);
	public:
		RPN();
		RPN(const RPN& other);
		RPN&	operator=(const RPN& other);
		~RPN();

		// Special constructor
		RPN(const std::string& input);

		void	ReversePolishNotation();

		class	InputError : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif
