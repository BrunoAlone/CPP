/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:04:57 by bruno             #+#    #+#             */
/*   Updated: 2024/03/06 17:45:41 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int	main()
{
	Data*		data = new Data[10];
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

	delete[] data;
	return (0);
}
