/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:18:09 by brolivei          #+#    #+#             */
/*   Updated: 2023/10/12 11:18:36 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int	x, i;

	x = 1;
	i = 0;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	else
	{
		while (x < argc)
		{
			while (argv[x][i])
			{
				if (argv[x][i] >= 'a' && argv[x][i] <= 'z')
					argv[x][i] -= 32;
				i++;
			}
			i = 0;
			x++;
		}
	}
	x = 1;
	while (x < argc)
	{
		std::cout << argv[x];
		x++;
	}
	std::cout << std::endl;
	return (0);
}
