/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:06:28 by bruno             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/03/27 17:15:45 by brolivei         ###   ########.fr       */
=======
/*   Updated: 2024/03/28 10:35:49 by brolivei         ###   ########.fr       */
>>>>>>> bf6bae0 (Something)
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

void	testDefault()
{
	std::cout << "Let's create an Object Array with int type: " << std::endl;

	Array<int>	x(10);

	std::cout << "Size of the created array: " << x.Size() << std::endl;

	x.printArray();
}

void	testCopyAndAssignment()
{
	std::cout << "Let's create an Object Array and give values to it's array: " << std::endl;

	Array<char>	c(10);
	char	ch = 'a';

	for (unsigned int i = 0; i < c.Size(); i++)
		c[i] = ch + i;
	c.printArray();

	std::cout << "Now, let's create another object calling copy constructor!" << std::endl;

	Array<char>	b(c);

	std::cout << "And let's print this new object and observe that it's equal to the first one!:" << std::endl;

	b.printArray();

	std::cout << "Now using copy assignement:" << std::endl;

	Array<char>	d;

	d = c;

	std::cout << "Let's again, print this new one:" << std::endl;

	d.printArray();

	std::cout << "And to observe that is a deep copy:" << std::endl;

	for (unsigned int i = 0; i < c.Size(); i++)
		c[i] = c[i] + i;
	for (unsigned int i = 0; i < b.Size(); i++)
		b[i] = b[i] + i + 10;
	for (unsigned int i = 0; i < d.Size(); i++)
		d[i] = d[i] + i - 10;

	std::cout << "After modifying all the object, let's print them: " << std::endl;

	std::cout << "c -> "; c.printArray();
	std::cout << "b -> "; b.printArray();
	std::cout << "d -> "; d.printArray();
}

void	testExceptionOfTheLimits()
{
	Array<int>	x(10);

	for (int i = 0; i < 10; i++)
		x[i] = i;

	std::cout << "We create an array with ten numbers:" << std::endl;

	x.printArray();

	std::cout << "Now lest try to access an index that does not exist, for example, 11:\n" << std::endl;

	try{
		x[11] = 10;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "As we see an exception was catch.\n";
}

int	main()
{
<<<<<<< HEAD
	//int*	a = new int();

	//std::cout << *a << std::endl;
	//testDefault();
	testCopyAndAssignment();
	//testExceptionOfTheLimits();
=======
	testDefault();
	testCopyAndAssignment();
	testExceptionOfTheLimits();
>>>>>>> bf6bae0 (Something)


	return (0);
}
