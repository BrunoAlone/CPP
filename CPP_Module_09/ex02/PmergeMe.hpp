/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:36:33 by brolivei          #+#    #+#             */
/*   Updated: 2024/04/11 15:54:35 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <iterator>

#include <vector>
#include <deque>

class	PmergeMe
{
	private:
		std::string	input_;
		clock_t		start;
		clock_t		end;

		double		timeSpendVec;
		double		timeSpendList;

		void	mergeSortVecStart(char **argv, int size);
		void	mergeSortVec(std::vector<int>& vec, int const begin, int const end);
		void	mergeVec(std::vector<int>& vec, int const left, int const mid, int const right);

		void	mergeSortDequeStart(char **argv, int size);
		void	mergeSortDeque(std::deque<int>& list, int const begin, int const end);
		void	mergeDeque(std::deque<int>& list, int const left, int const mid, int const right);

		void	justPrintBefore(char **argv, int size);
		bool	mergeParse(char **argv, int size);
	public:
		PmergeMe();
		~PmergeMe();

		int	mergeSort(char **argv, int size);
};

#endif
