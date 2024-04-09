/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:23:27 by brolivei          #+#    #+#             */
/*   Updated: 2024/04/09 16:34:44 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
	std::cout << "Default\n";
}

RPN::~RPN()
{
	std::cout << "Destruct\n";
}

RPN::RPN(const std::string& input) : expression_(input)
{
	std::reverse(this->expression_.begin(), this->expression_.end());
	std::istringstream	iss(this->expression_);
	std::string			token;

	while (std::getline(iss, token, ' '))
		this->exp.push(token);
	ReversePolishNotation();
}

void	RPN::ReversePolishNotation()
{
	int	y;
	int	result;

	result = atoi(this->exp.top().c_str());
	this->exp.pop();
	while (!this->exp.empty())
	{
		y = atoi(this->exp.top().c_str());
		this->exp.pop();
		result = DoOperation(result, y, this->exp.top());
		this->exp.pop();
	}
	std::cout << result << std::endl;
}

int		RPN::DoOperation(int first, int second, std::string& operation)
{
	if (operation == "+")
		return (first + second);
	else if (operation == "-")
		return (first - second);
	else if (operation == "*")
		return (first * second);
	else if (operation == "/")
		return (first / second);
	return (0);
}
