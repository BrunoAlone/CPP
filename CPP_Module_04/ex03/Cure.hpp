/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:26:27 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/31 11:45:33 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

/*
		Class concreta que herda de AMateria

		Ela implementa o motodo "clone" e "use".
*/

class	Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure& other);
		Cure&	operator=(const Cure& other);
		~Cure();

		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif
