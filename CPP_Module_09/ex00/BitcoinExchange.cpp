/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:44:54 by brolivei          #+#    #+#             */
/*   Updated: 2024/04/05 17:22:06 by brolivei         ###   ########.fr       */
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
	this->RequestFile_.open(FileName);
	if (!RequestFile_.is_open())
		throw FailingOpenTheFile();
	buildRequestData();
}

void	BTC::buildRequestData()
{
	std::string	line;
	int			key;

	while (std::getline(this->RequestFile_, line))
	{
		std::istringstream
		//this->RequestedData_[key] =
	}
}

const char*	BTC::FailingOpenTheFile::what() const throw()
{
	return ("ERROR: couldn't open the file\n");
}
