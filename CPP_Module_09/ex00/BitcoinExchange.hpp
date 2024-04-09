/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:29:46 by brolivei          #+#    #+#             */
/*   Updated: 2024/04/09 12:21:33 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>

#include <map>

class	BTC
{
	private:
		std::ifstream					RequestFile_;
		std::string						FileName_;

		std::ifstream					DataBaseFile_;

		std::map<std::string, double>	DataBase_;
		std::map<std::string, double>::iterator	it;

		void	extractDataBase();
		void	performExchange();
		bool	checkLine(const std::string& line) const;
		bool	isValidDate(const std::string& date) const;
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
