/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:30:17 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/05 16:33:48 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main()
{
	//const Animal	ani; Error: You cant declare an object of abstrct class
	//const Animal*	meta = new Animal();
	const Animal*	dog = new Dog();
	const Animal*	cat = new Cat();

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	dog->makeSound();
	cat->makeSound();
	//meta->makeSound();

	//delete meta;
	delete dog;
	delete cat;

	std::cout << "\n\nTesting now the WrongAnimal and WrongCat:\n\n\n";

	std::cout << "Crating the pointer WrongAnimal whith the derived class WrongCat:\n\n";
	const WrongAnimal*	wrongCat = new WrongCat();

	std::cout << wrongCat->getType() << " " << std::endl;
	wrongCat->makeSound();

	delete wrongCat;
	return (0);
}
