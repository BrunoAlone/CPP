/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:47:28 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/27 14:17:28 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

/*
			AMateria - Pure Abstract Class

			Clone is a pure virtual function. This way, AMateria
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

		// Constructor whith type specified
		AMateria(const std::string& type);

		// Getter
		const std::string& getType() const;


		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif
