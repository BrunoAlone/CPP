/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:02:46 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/27 14:24:18 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

/*
		Class concreta que herda de AMateria

		Ela implementa o motodo "clone" e "use".
*/

class	Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice& other);
		Ice&	operator=(const Ice& other);
		~Ice();

		virtual AMateria*	clone() const;
		virtual void		use(ICharacter& target);
};

#endif
