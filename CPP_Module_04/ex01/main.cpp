/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:30:17 by brolivei          #+#    #+#             */
/*   Updated: 2024/03/18 14:48:48 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

//void testNew(Dog& other)
//{
//	Dog	tmp = other;
//	std::cout << "Destruction of hte tmp.\n";
//}

int	main()
{
	const Animal*	array[10];

	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}

	const Cat*	cat = new Cat();

	cat->getBrain()->setIdeas();

	cat->getBrain()->ideasTell();

	std::cout << "Now, let's call the copy constructor of the cat: \n";

	const Cat*	cat2 = new Cat(*cat);

	std::cout << "Now, we delete the first cat, and see, that the second one, has his own brain with is own thoughts:\n\n";

	delete cat;

	cat2->getBrain()->ideasTell();

	delete cat2;

	std::cout << "\tDeleting our array: \n\n";
	for (int i = 0; i < 10; i++)
		delete array[i];

	//Dog	basic;
	//testNew(basic);
	//std::cout << "The basic will be destructed only after this msg.\n";
	return (0);
}
