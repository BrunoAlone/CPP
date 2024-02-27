/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:26:27 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/27 14:24:37 by bruno            ###   ########.fr       */
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

		virtual AMateria*	clone() const;
		virtual void		use(ICharacter& target);
};

#endif
