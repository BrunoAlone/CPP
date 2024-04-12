/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:44:54 by brolivei          #+#    #+#             */
/*   Updated: 2024/04/12 14:23:45 by brolivei         ###   ########.fr       */
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

BTC&	BTC::operator=(const BTC& other)
{
	if (this == &other)
		return (*this);
	this->FileName_ = other.FileName_;
	this->DataBase_ = other.DataBase_;
	return (*this);
}

BTC::~BTC()
{
	std::cout << "Destructor\n";

	this->RequestFile_.close();
	this->DataBaseFile_.close();
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

void	BTC::performTask(std::string& FileName)
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
		// Read from a string
		// We can use operator >> in iss, to extract values, like in std::cin
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
	std::string	originalLine;
	bool		firstLine = true;

	if (this->RequestFile_.peek() == EOF)
		throw EmptyFile();
	while (std::getline(this->RequestFile_, line))
	{
		if (firstLine)
		{
			firstLine = false;
			continue;
		}
		originalLine = line;
		for (std::string::iterator i = line.begin(); i != line.end(); i++)
		{
			if (*i == ' ')
				line.erase(i);
		}
		// Verify date

		if (checkLine(line) == false || originalLine[10] != ' ' || originalLine[12] != ' ')
		{
			std::cout << "Error: bad input => " << originalLine << std::endl;
			continue;
		}

		std::istringstream	iss(line);
		std::string			date;
		std::string			coins_number;

		if (std::getline(iss, date, '|') && std::getline(iss, coins_number, '|'))
		{
			if (std::strtod(coins_number.c_str(), NULL) < 0)
				std::cout << "Error: not a positive number.\n";
			else if (std::strtod(coins_number.c_str(), NULL) > 1000)
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

bool	BTC::checkLine(const std::string& line) const
{
	std::istringstream	iss(line);
	std::string			date, coins;

	if (!(std::getline(iss, date, '|')) || !(std::getline(iss, coins))) // If getline fails, this will be true
		return (false);

	if (date.empty() || coins.empty())
		return (false);

	if (date.length() != 10)
		return (false);

	if (date[4] != '-' || date[7] != '-')
		return (false);

	for (int i = 0; i < 10; i++)
	{
		if (i != 4 && i != 7 && !isdigit(date[i]))
			return (false);
	}

	if (isValidDate(line) == false)
		return (false);

	return (true);
}

bool	BTC::isValidDate(const std::string& date) const
{
	std::istringstream	iss(date);
	int	year, month, day;
	char	dash1, dash2;

	// When we do iss >> year, istringstream, perform verifications to see if the char passed is a digit
	// and convert it into an int, so, he copies a sequence of number into year, until he find a character that
	// is not a digit, and so on...
	if (!(iss >> year >> dash1 >> month >> dash2 >> day) || dash1 != '-' || dash2 != '-')
		return (false);

	int		monthDays[] = {
		31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
	};

	if (month == 2)
	{
		if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		{
			if (day >= 0 && day <= 29)
				return (true);
		}
	}

	if (day > monthDays[month - 1])
		return (false);
	return (true);
}

// ===============Exceptions===============

const char*	BTC::FailingOpenTheFile::what() const throw()
{
	return ("ERROR: couldn't open the file\n");
}

const char* BTC::EmptyFile::what() const throw()
{
	return ("ERROR: empty file\n");
}
