/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:30:17 by brolivei          #+#    #+#             */
/*   Updated: 2024/03/18 14:08:19 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal*	meta = new Animal();
	const Animal*	dog = new Dog();
	// É possivel declarar um ponteiro Animal() e aponta-lo para uma instância da classe Dog porque Dog() deriva de Animal
	//e então existe uma relação de polimorfismo entre estas classes. Este é o conceito principal deste exercício.
	const Animal*	cat = new Cat();

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	dog->makeSound();
	cat->makeSound();
	meta->makeSound();

	delete meta;
	delete dog;
	delete cat;

	std::cout << "\n\nTesting now the WrongAnimal and WrongCat:\n\n\n";

	std::cout << "Crating the pointer WrongAnimal whith the derived class WrongCat:\n\n";
	const WrongAnimal*	wrongCat = new WrongCat();

	std::cout << cat->getType() << " " << std::endl;
	wrongCat->makeSound();

	std::cout << "As the function 'makeSound' is not virtual ";
	std::cout << "the implementation called is from the parent class.\n\n";

	delete wrongCat;

	return (0);
}

/*
			Importance of this:

			Polymorphism:
		Polymorphism allows you to treat objects of derived classes as objects of the base class, providing a unified interface.
		The makeSound() function is polymorphic, meaning that the appropriate version of the function is called based on the
	actual type of the object pointed to by the base class pointer.

			Flexibility:
		Using pointers to a base class allows you to create more flexible and extensible code. You can add new derived classes
	without modifying the code that uses the base class pointers.

			Code Reusability:
		The same code that works with pointers to the base class can work with any derived class that inherits from that base
	class. This promotes code reusability.

			Virtual Functions:
		The makeSound() function being declared as virtual in the base class (Animal) allows it to be overridden in the
	derived classes (Dog and Cat). This enables dynamic dispatch, meaning that the appropriate function is called based on
	the actual type of the object at runtime.
*/
