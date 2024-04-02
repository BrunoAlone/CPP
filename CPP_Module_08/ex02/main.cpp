/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:02:56 by brolivei          #+#    #+#             */
/*   Updated: 2024/04/02 16:15:11 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "MutantStack.hpp"

void	newTest(MutantStack<int, std::list<int> > ms)
{
	while (!ms.empty())
	{
		std::cout << "[ " << ms.top() << " ]";
		ms.pop();
	}
	std::cout << std::endl;
}

void	testWithVector()
{
	std::vector<int>	vec;

	vec.push_back(5);
	vec.push_back(5);

	std::cout << vec[vec.size() - 1] << std::endl;

	vec.pop_back();

	std::cout << vec.size() << std::endl;

	vec.push_back(3);
	vec.push_back(5);
	vec.push_back(737);
	vec.push_back(0);

	std::vector<int>::iterator	it = vec.begin();
	std::vector<int>::iterator	ite = vec.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		it++;
	}
}

int	main()
{
	MutantStack<int, std::list<int> >	ms; // Here, we are not using the default
	// type of container int he stack, we are using list container

	ms.push(5);
	ms.push(5);

	std::cout << ms.top() << std::endl;

	ms.pop();

	std::cout << ms.size() << std::endl;

	ms.push(3);
	ms.push(5);
	ms.push(737);
	ms.push(0);

	MutantStack<int, std::list<int> >::iterator	it = ms.begin();
	MutantStack<int, std::list<int> >::iterator	ite = ms.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		it++;
	}
	std::stack<int, std::list<int> >	sta(ms);

	testWithVector();
	newTest(ms);
	return (0);
}
