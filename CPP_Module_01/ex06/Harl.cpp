/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 10:42:39 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/02 14:23:59 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	level[0] = "DEBUG";
	level[1] = "INFO";
	level[2] = "WARNING";
	level[3] = "ERROR";
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my\
 7XL-double-cheese-triple-pickle-special-ketchup burger.\
 I really do!\n";
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put\
enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for\
years whereas you started working here since last month.\n";
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain(std::string calledLevel)
{
	void(Harl::*func[])(void) =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	for (int i = 0; i < 4; i++)
	{
		if (level[i].compare(calledLevel) == 0)
		{
			while (i < 4)
			{
				(this->*func[i])();
				i++;
			}
			if (i == 4)
				return ;
		}
	}
}

Harl::LogLevel	Harl::logDefine(const std::string &calledLevel)
{
	Harl::LogLevel	logLevel;
	if (calledLevel == "DEBUG")
		logLevel = Harl::DEBUG;
	else if (calledLevel == "INFO")
		logLevel = Harl::INFO;
	else if (calledLevel == "WARNING")
		logLevel = Harl::WARNING;
	else if (calledLevel == "ERROR")
		logLevel = Harl::ERROR;
	else
		logLevel = Harl::NOMATCH;
	return (logLevel);
}

void	Harl::filter(std::string calledLevel)
{
	LogLevel	loglevel;

	loglevel = logDefine(calledLevel);
	switch (loglevel)
	{
	case DEBUG:
		Harl::complain("DEBUG");
		break;
	case INFO:
		Harl::complain("INFO");
		break;
	case WARNING:
		Harl::complain("WARNING");
		break;
	case ERROR:
		Harl::complain("ERROR");
		break;
	default:
		std::cout << "No matching level.\n";
		break;
	}
}

