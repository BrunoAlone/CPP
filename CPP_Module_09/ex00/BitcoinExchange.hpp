/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:29:46 by brolivei          #+#    #+#             */
/*   Updated: 2024/04/05 17:21:12 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>

#include <map>

class	BTC
{
	private:
		std::map<std::string, double>	RequestedData_;
		std::ifstream			RequestFile_;

		std::string				FileName_;

		void					buildRequestData();
	public:
		// Orthodox
		BTC();
		BTC(const BTC& other);
		//BTC&	operator=(const BTC& other);
		~BTC();

		// Special contructors
		BTC(const std::string FileName);


		class	FailingOpenTheFile : std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif
