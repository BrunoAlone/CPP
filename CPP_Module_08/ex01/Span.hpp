/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:32:41 by brolivei          #+#    #+#             */
/*   Updated: 2024/03/28 15:02:57 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class	Span
{
	private:
		const unsigned int		N_;
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

		// Getter

		unsigned int		getN() const;
		std::vector<int>	getVec() const;
};

#endif
