/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:23:27 by brolivei          #+#    #+#             */
/*   Updated: 2024/04/10 14:44:35 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
	//std::cout << "Default\n";
}

RPN::RPN(const RPN& other) : expression_(other.expression_)
{
}

RPN&	RPN::operator=(const RPN& other)
{
	if (this == &other)
		return (*this);
	this->expression_ = other.expression_;
	while (!this->exp.empty())
		this->exp.pop();
	return (*this);
}

RPN::~RPN()
{
	//std::cout << "Destruct\n";
}

RPN::RPN(const std::string& input) : expression_(input)
{
}

bool	RPN::isNumber(std::string& input)
{
	std::string::iterator	it = input.begin();

	while (it != input.end())
	{
		if (!isdigit(*it))
			return (false);
		it++;
	}

	if (input.size() > 1)
		throw InputError();
	return (true);
}

bool	RPN::isOperand(std::string& token)
{
	if (token == "+" || token == "-" || token == "*" || token == "/")
		return (true);
	else
		throw InputError();
}

void	RPN::ReversePolishNotation()
{
	if (this->expression_.empty())
		return ;
	std::istringstream	iss(this->expression_);
	std::string			token;

	try {
		while (iss >> token)
		{
			if (isNumber(token))
				this->exp.push(atoi(token.c_str()));
			else if (isOperand(token))
			{
				int	op2 = this->exp.top();
				this->exp.pop();
				int	op1 = this->exp.top();
				this->exp.pop();

				if (token == "+")
				{
					std::cout << op1 << " + " << op2 << " = " << op1 + op2 <<std::endl;
					this->exp.push(op1 + op2);
				}
				else if (token == "-")
				{
					std::cout << op1 << " - " << op2 << " = " << op1 - op2 <<std::endl;
					this->exp.push(op1 - op2);
				}
				else if (token == "*")
				{
					std::cout << op1 << " x " << op2 << " = " << op1 * op2 <<std::endl;
					this->exp.push(op1 * op2);
				}
				else if (token == "/")
				{
					std::cout << op1 << " / " << op2 << " = " << op1 / op2 <<std::endl;
					this->exp.push(op1 / op2);
				}
				else
					throw InputError();
			}
		}
		std::cout << this->exp.top() << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what();
		return ;
	}
}

const char*	RPN::InputError::what() const throw()
{
	return ("Error\n");
}
