/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:40:48 by brolivei          #+#    #+#             */
/*   Updated: 2024/04/11 11:26:35 by brolivei         ###   ########.fr       */
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

	mergeSortVecStart(argv, size);
}

// ===============VECTOR===============

void	PmergeMe::mergeSortVecStart(char **argv, int size)
{
	// Starting the process with vector container
	this->start = clock();
	std::vector<int>			vec;
	std::vector<int>::iterator	it;

	for (int i = 1; i < size; i++)
		vec.push_back(atoi(argv[i]));

	mergeSortVec(vec, 0, vec.size() - 1);

	std::cout << std::setw(9) << std::left << "After: ";
	for (it = vec.begin(); it != vec.end(); it++)
		std::cout << " " << *it;
	std::cout << std::endl;
	this->end = clock();
	this->timeSpendVec = (double(this->end - this->start) / CLOCKS_PER_SEC) * 1000000;
	std::cout << "Time to process a range of " << vec.size();
	std::cout << " elements with std::vector<int> : " << this->timeSpendVec;
	std::cout << " microseconds" << std::endl;
}

void	PmergeMe::mergeSortVec(std::vector<int>& vec, int const begin, int const end)
{
	if (begin >= end)
		return ;

	int	mid = begin + (end - begin) / 2;
	mergeSortVec(vec, begin, mid);
	mergeSortVec(vec, mid + 1, end);
	mergeVec(vec, begin, mid, end);
}

void	PmergeMe::mergeVec(std::vector<int>& vec, int const left, int const mid, int const right)
{
	int	const subVecOne = mid - left + 1;
	int	const subVecTwo = right - mid;

	std::vector<int>	leftVec(subVecOne);
	std::vector<int>	rightVec(subVecTwo);

	for (int i = 0; i < subVecOne; i++)
		leftVec[i] = vec[left + i];
	for (int j = 0; j < subVecTwo; j++)
		rightVec[j] = vec[mid + 1 + j];

	int	indexOfSubVecOne = 0;
	int	indexOfSubVecTwo = 0;
	int	indexOfMergeVec = left;

	while (indexOfSubVecOne < subVecOne && indexOfSubVecTwo < subVecTwo)
	{
		if (leftVec[indexOfSubVecOne] <= rightVec[indexOfSubVecTwo])
		{
			vec[indexOfMergeVec] = leftVec[indexOfSubVecOne];
			indexOfSubVecOne++;
		}
		else
		{
			vec[indexOfMergeVec] = rightVec[indexOfSubVecTwo];
			indexOfSubVecTwo++;
		}
		indexOfMergeVec++;
	}

	while (indexOfSubVecOne < subVecOne)
	{
		vec[indexOfMergeVec] = leftVec[indexOfSubVecOne];
		indexOfSubVecOne++;
		indexOfMergeVec++;
	}

	while (indexOfSubVecTwo < subVecTwo)
	{
		vec[indexOfMergeVec] = rightVec[indexOfSubVecTwo];
		indexOfSubVecTwo++;
		indexOfMergeVec++;
	}
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
