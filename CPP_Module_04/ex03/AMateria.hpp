/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:47:28 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/31 14:37:34 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

/*
			AMateria - Pure Abstract Class

			clone is a pure virtual function. This way, AMateria
		is an abstract class.

			"class	ICharacter" e uma definicao antecipada da
		classe ICharacter. Ela ser uma classe puramente virtual,
		entao, para usa-la nesta classe temos de dizer ao compilador
		que ela existe e que sera criada.
*/

class	ICharacter;

class	AMateria
{
	protected:
		std::string	type_;
	public:
		AMateria();
		AMateria(const AMateria& other);
		AMateria&	operator=(const AMateria& other);
		virtual ~AMateria();


		AMateria(const std::string& type);

		// Getter
		const std::string& getType() const;


		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target) = 0;
};

#endif
