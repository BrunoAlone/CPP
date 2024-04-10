/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:40:48 by brolivei          #+#    #+#             */
/*   Updated: 2024/04/10 23:57:55 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{}

PmergeMe::~PmergeMe()
{}

void	PmergeMe::mergeSort(char **argv, int size)
{
	justPrintBefore(argv, size);
	mergeSortVec(argv, 0, size - 1);
}

void	PmergeMe::mergeSortVec(char **argv, int begin, int end)
{
	std::vector<int>			vec;
	std::vector<int>::iterator	it;

	for (int i = 1; i < end + 1; i++)
		vec.push_back(atoi(argv[i]));

	// Follow: https://www.geeksforgeeks.org/merge-sort/
}

void	PmergeMe::justPrintBefore(char **argv, int size)
{
	std::vector<int>			vec;
	std::vector<int>::iterator	it;

	for (int i = 1; i < size; i++)
		vec.push_back(atoi(argv[i]));
	std::cout << std::setw(9) << std::left <<"Before:";
	for (it = vec.begin(); it != vec.end(); it++)
		std::cout << " " << *it;
	std::cout << std::endl;
}
