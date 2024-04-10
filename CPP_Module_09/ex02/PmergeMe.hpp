/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:36:33 by brolivei          #+#    #+#             */
/*   Updated: 2024/04/10 17:47:58 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

#include <vector>
#include <list>

class	PmergeMe
{
	private:
		std::string	input_;

		void	mergeSortVec(char **argv, int begin, int end);
		void	justPrintBefore(char **argv, int size);
	public:
		PmergeMe();
		~PmergeMe();

		void	mergeSort(char **argv, int size);
};

#endif
