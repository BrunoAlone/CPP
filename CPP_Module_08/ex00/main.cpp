/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:51:46 by bruno             #+#    #+#             */
/*   Updated: 2024/04/03 14:05:49 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <cstdlib>
#include <vector>
#include <list>
#include <deque>
//#include <iterator> // For std::next();

void	testWithVector()
{
	std::cout << "--------------STD::VECTOR--------------\n\n\n";
	std::cout << "Let's create a vector: " << std::endl;

	std::vector<int>	container; // Way to declare a vector. We have to say what type of variables
	// we will store on it.

	std::cout << "\tOur vector is created. Vectors are like dynamic arrays. We can keep putting \n";
	std::cout << "elements to it and the language do all the work for us, making grow the array\n";
	std::cout << "as we keep adding elements to it. Other particularity is that, the adress of the\n";
	std::cout << "first element will move together with all the rest of the elements if there is\n";
	std::cout << "no space to keep the vector all in one line in the memory. All the elements must\n";
	std::cout << "keep together in a row. We can access the elements by the index or through an\n";
	std::cout << " iterator\n\n";

	std::cout << "Now, let's fill our vector with 10 ints, randomly generated, between 1 and 10.\n";

	for (int i = 0; i < 10; i++)
	{
		container.push_back(std::rand() % 10 + 1); // The push_back method will add a new element to our
		// vector at the end of it.
	}

	std::cout << "And let's print the elements of our vector:\n";
	for (std::vector<int>::iterator i = container.begin(); i != container.end(); i++)
	{
		if ((i + 1) == container.end()) // With vector iterator (OurIterator + 1) works, but I don't know way ahah
			std::cout << *i << std::endl;
		else
			std::cout << *i << ", ";
	}

	easyfind(container, 5);
}

void	testWithList()
{
	std::cout << "\n\n\n--------------STD::LIST--------------\n\n\n";

	std::cout << "Let's now, use another type of container, that is a std::list!\n\n";

	std::list<int>	containerList;

	std::cout << "\tContainer type list, are like double linked lists. And so, they are way faster\n";
	std::cout << "to add new elements in the begging or the end, or even in the middle, but, they are\n";
	std::cout << "slower to find a particular element by is position. We can't access elements through\n";
	std::cout << "index...\n";
	std::cout << "\tWe can access them through iterators.\n\n";

	for (int i = 0; i < 10; i++)
		containerList.push_back(std::rand() % 10 + 1);

	std::cout << "After we create our containter type list, we fill it with ten number. Let's print it:\n\n";

	std::list<int>::iterator	tmp;
	for (std::list<int>::iterator i = containerList.begin(); i != containerList.end(); i++)
	{
		//if (std::next(i) == containerList.end()) // We cant do just (i + 1). Iterator are more abstract than pointers.
		// std::next(OurIterator) will return the next iterator after "OurIterator".
		// CANT USE NEXT BECAUSE ITS C++ 11
		tmp = i;
		tmp++;
		if (tmp == containerList.end())
			std::cout << *i << std::endl;
		else
			std::cout << *i << ", ";
	}
	easyfind(containerList, 5);
}

void	testWithDeque()
{
	std::cout << "\n\n\n--------------STD::DEQUE--------------\n\n\n";

	std::cout << "\tstd::deque are the unification of vector with list.\n\n";

	std::deque<int>	containerDeque;

	for (int i = 0; i < 10; i++)
		containerDeque.push_back(std::rand() % 10 + 1);

	std::deque<int>::iterator	tmp;
	for (std::deque<int>::iterator i = containerDeque.begin(); i != containerDeque.end(); i++)
	{
		tmp = i;
		tmp++;
		if (tmp == containerDeque.end())
			std::cout << *i << std::endl;
		else
			std::cout << *i << ", ";
	}

	easyfind(containerDeque, 5);
}

int	main()
{
	std::srand(time(NULL));
	testWithVector();
	testWithList();
	testWithDeque();
	return (0);
}
