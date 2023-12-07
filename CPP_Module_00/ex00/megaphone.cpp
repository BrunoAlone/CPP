/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:18:09 by brolivei          #+#    #+#             */
/*   Updated: 2023/12/07 12:56:58 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int	x;

	x = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	else
	{
		while (x < argc)
		{
			std::string	str(argv[x]);
			for (int i = 0; str[i]; i++)
				str[i] = std::toupper(str[i]);
			std::cout << str;
			x++;
		}
	}
	std::cout << std::endl;
	return (0);
}
