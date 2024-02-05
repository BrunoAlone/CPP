/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:47:28 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/05 16:58:11 by brolivei         ###   ########.fr       */
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

			"class	ICharacter" é uma definiçao antecipada da
		classe ICharacter. Ela é uma classe puramente virtual,
		então, para usá-la nesta classe temos de dizer ao compilador
		que ela existe e que será criada.
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
		virtual void		use(ICharacter& target);
};

#endif
