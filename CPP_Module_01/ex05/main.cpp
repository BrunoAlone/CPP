/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:23:45 by bruno             #+#    #+#             */
/*   Updated: 2024/01/02 14:17:32 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	harl_2_0;

	std::cout << "The debug level is called:\n\n";
	harl_2_0.complain("DEBUG");
	std::cout << "\nThe info level is called:\n\n";
	harl_2_0.complain("INFO");
	std::cout << "\nThe warning level is called:\n\n";
	harl_2_0.complain("WARNING");
	std::cout << "\nThe error level is called:\n\n";
	harl_2_0.complain("ERROR");

	return (0);
}
