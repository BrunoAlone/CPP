/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:46:32 by brolivei          #+#    #+#             */
/*   Updated: 2024/03/18 16:02:50 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << "-----Testing limits of MateriaSource Stack-----\n\n\n";

	for (int i = 0; i < 5; i++)
		src->learnMateria(new Ice());

	std::cout << "-----Testing unknown materia-----\n\n\n";

	src->createMateria("Rock");

	std::cout << "-----Creating a Character-----\n\n\n";

	ICharacter* me = new Character("me");
	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	me->equip(src->createMateria("ice"));

	delete bob;
	delete me;
	delete src;

	return 0;
}
