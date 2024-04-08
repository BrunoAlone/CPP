/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:44:54 by brolivei          #+#    #+#             */
/*   Updated: 2024/04/08 15:27:12 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BTC::BTC()
{
	std::cout << "Default\n";
}

BTC::BTC(const BTC& other)
{
	std::cout << "Copy\n";

	this->FileName_ = other.FileName_;
}

BTC::~BTC()
{
	std::cout << "Destructor\n";

	this->RequestFile_.close();
}

BTC::BTC(const std::string FileName)
{
	this->FileName_ = FileName;
	this->RequestFile_.open(FileName.c_str());
	if (!RequestFile_.is_open())
		throw FailingOpenTheFile();
	extractDataBase();
	performExchange();
}

// ===============//===============

void	BTC::extractDataBase()
{
	this->DataBaseFile_.open("../cpp_09/data.csv");
	if (!DataBaseFile_.is_open())
		throw FailingOpenTheFile();

	std::string	line;

	while (std::getline(DataBaseFile_, line))
	{
		std::istringstream	iss(line);
		std::string			Date, Exchange;

		if (std::getline(iss, Date, ',') && std::getline(iss, Exchange, ','))
		{
			try {
				this->DataBase_[Date] = std::strtod(Exchange.c_str(), NULL);
			} catch(std::exception& e) {
				std::cout << e.what() << std::endl;
			}
		}

	}
}

// ===============//===============

void	BTC::performExchange()
{
	std::string	line;
	bool		firstLine = true;

	while (std::getline(this->RequestFile_, line))
	{
		if (firstLine)
		{
			firstLine = false;
			continue;
		}
		for (std::string::iterator i = line.begin(); i != line.end(); i++)
		{
			if (*i == ' ')
				line.erase(i);
		}
		std::istringstream	iss(line);
		std::string			date;
		std::string			coins_number;

		if (std::getline(iss, date, '|') && std::getline(iss, coins_number, '|'))
		{
			if (std::strtod(coins_number.c_str(), NULL) < 0)
				std::cout << "Error: not a positive number.\n";
			if (std::strtod(coins_number.c_str(), NULL) > 1000)
				std::cout << "Error: too large a number\n";
			else
			{
				for (this->it = this->DataBase_.begin(); it != this->DataBase_.end(); it++)
				{
					if (it->first == date)
					{
						double result = it->second * std::strtod(coins_number.c_str(), NULL);
						std::cout << it->first << " => " << coins_number << " = ";
						std::cout << result << std::endl;
						break;
					}
					else if (it->first < date)
						continue;
					else if (it->first > date)
					{
						it--;
						double result = it->second * std::strtod(coins_number.c_str(), NULL);
						std::cout << date << " => " << coins_number << " = ";
						std::cout << result << std::endl;
						break;
					}
				}
			}
		}
	}
}

const char*	BTC::FailingOpenTheFile::what() const throw()
{
	return ("ERROR: couldn't open the file\n");
}
