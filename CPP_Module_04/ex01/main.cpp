/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:30:17 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/27 13:55:02 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

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

	for (int i = 0; i < 10; i++)
		delete array[i];


	return (0);
}
