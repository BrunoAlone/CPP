/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:25:47 by brolivei          #+#    #+#             */
/*   Updated: 2024/04/10 14:45:18 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Input error\n";
		return (2);
	}
	RPN	rpn(argv[1]);

	rpn.ReversePolishNotation();

	//RPN	teste;

	//teste.ReversePolishNotation();

	//teste = rpn;

	//teste.ReversePolishNotation();
}
