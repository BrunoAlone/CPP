/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:51:52 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/31 14:44:34 by brolivei         ###   ########.fr       */
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

		Character(const std::string& name);

		const std::string&	getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif
