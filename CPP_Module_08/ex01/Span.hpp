/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:32:41 by brolivei          #+#    #+#             */
/*   Updated: 2024/03/28 16:42:47 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class	Span
{
	private:
		unsigned int		N_;
		std::vector<int>	vec;
	public:
		// Orthodox
		Span();
		Span(const Span& other);
		Span&	operator=(const Span& other);
		~Span();

		// Other constructors
		Span(unsigned int N);

		// Member functions
		void	addNumber(const int x);
		void	printVector();

		int		shortestSpan();
		int		longestSpan();
		// Getter

		unsigned int		getN() const;
		const std::vector<int>&	getVec() const;

		// Exception class

		class	LimitOfElementsReached : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif
