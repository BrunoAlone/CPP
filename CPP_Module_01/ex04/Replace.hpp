/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:24:27 by brolivei          #+#    #+#             */
/*   Updated: 2023/12/12 15:33:29 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>

class	Replace
{
	private:
		std::string	fileName;
		std::string	s1;
		std::string	s2;
	public:
		Replace(std::string filename, std::string string1, std::string string2);
		void		replaceFile();
		std::string	getFilename();
		std::string	getS1();
		std::string	getS2();
};

#endif
