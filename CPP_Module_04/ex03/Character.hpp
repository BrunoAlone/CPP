/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:51:52 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/27 14:34:56 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

/*
		Concrete class implementing the 'ICharacter' interface.
*/

class	Character : public ICharacter
{
	private:
		std::string	Name_;
		AMateria	*inventory[4];
		AMateria	*RubbishBin[10];
	public:
		Character();
		Character(const Character& other);
		Character&	operator=(const Character& other);
		~Character();

		// Constructor taking is name as parameter
		Character(const std::string& name);

		const std::string&	getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif
