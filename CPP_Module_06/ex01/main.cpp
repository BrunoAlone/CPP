/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:04:57 by bruno             #+#    #+#             */
/*   Updated: 2024/03/26 11:03:11 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int	main()
{
	Data*		data = new Data[10];
	// uintptr_t Type of unsigned intenger that ensures to be big enough
	// to store any pointer adress
	uintptr_t	test_ptr;
	Data*		test_data_ptr;

	for (int i = 0; i < 10; i++)
	{
		data[i].id = i;
		data[i].value = i + 1;
	}

	std::cout << "\033[0;32mLet's print our structor with the data:\033[0;0m\n";

	for (int i = 0; i < 10; i++)
	{
		std::cout << "ID: " << data[i].id << std::endl;
		std::cout << "Value: " << data[i].value << std::endl << std::endl;
	}

	test_ptr = Serializer::serialize(data);

	test_data_ptr = Serializer::deserialize(test_ptr);

	std::cout << "\033[0;32mLet's compare our adress pointers:\033[0;0m\n";

	std::cout << data << std::endl;
	std::cout << test_data_ptr << std::endl;

	std::cout << "\033[0;32mLet's print our structor with the test_data_ptr:\033[0;0m\n";

	for (int i = 0; i < 10; i++)
	{
		std::cout << "ID: " << test_data_ptr[i].id << std::endl;
		std::cout << "Value: " << test_data_ptr[i].value << std::endl << std::endl;
	}

	delete[] data;
	return (0);
}
