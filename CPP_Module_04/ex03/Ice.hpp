/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:02:46 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/31 14:29:33 by brolivei         ###   ########.fr       */
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

		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif
