#ifndef RULES_HPP
#define RULES_HPP

#include <iostream>

class	Rules
{
	private:
		std::string	add;
		std::string	search;
		std::string	exit;
	public:
		Rules();
		std::string	getAdd();
		std::string	getSearch();
		std::string	getExit();
};

#endif
