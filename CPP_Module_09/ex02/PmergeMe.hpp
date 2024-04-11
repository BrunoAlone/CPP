/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:36:33 by brolivei          #+#    #+#             */
/*   Updated: 2024/04/11 11:20:19 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <ctime>

#include <vector>
#include <list>

class	PmergeMe
{
	private:
		std::string	input_;
		clock_t		start;
		clock_t		end;

		double		timeSpendVec;

		void	mergeSortVecStart(char **argv, int size);
		void	mergeSortVec(std::vector<int>& vec, int const begin, int const end);
		void	mergeVec(std::vector<int>& vec, int const left, int const mid, int const right);

		void	justPrintBefore(char **argv, int size);
	public:
		PmergeMe();
		~PmergeMe();

		void	mergeSort(char **argv, int size);
};

#endif
