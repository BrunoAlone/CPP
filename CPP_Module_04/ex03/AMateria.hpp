/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:47:28 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/30 13:55:17 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class	AMateria
{
	protected:
		std::string	type;
	public:
		AMateria();
		AMateria(const AMateria& other);
		AMateria&	operator=(const AMateria& other);
		~AMateria();


		AMateria(std::string const & type);

		// Getter
		std::string const & getType() const;


		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif
