/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:20:56 by bruno             #+#    #+#             */
/*   Updated: 2024/03/28 14:14:06 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

/*
		=====Iterators=====

	Iterators provide a way to run through elements in a
container, like std::vector, std::list, std::deque, without
exposing the underlying implementation details of the container.

	They act like pointers, allowing to access elements in the
container.

	Initialization: Here, in this easyfind function, we use
"typename T" because we are doing a template to work with all
type of containers. But, in reality, to declare a iterator we
do like this:

			- std::vector<int>::iterator	ourIterator;

			We are saying, that, our type of container is a "vector"
		that will store integers, and we want an iterator to it.

			- ourIterator = ourContainer.begin();

			"begin()" will return an iterator pointing to the beggining
		of ourContainer, and it will be assigned to ourIterator.

			- ourIterator = ourContainer.end();

			"end()", on the contrary of "begin" will return an iterator
		pointing to the end of ourContainer.

			- We can move the iterator through our container incrementing or
		decrementing it (i++ or i--).

			- As he is a pointer to the elements of our container, by dereference,
		we can access to the element of our container that he is pointing.

			- They support comparison operator, that way we can do stuff like:

				While(ourIterator != ourContainer.end())
*/

template <typename T> int	easyfind(T C, int x)
{
	// The same has sayng: std::vector<int>::iterator; For example
	typename T::iterator	it;

	// find return the C.end() i fthe element "x" is not found.
	it = find(C.begin(), C.end(), x);

	if (it != C.end())
	{
		std::cout << "It was found the occurrence of " << x << " in the container.\n";
		return (0);
	}
	//for (typename T::iterator i = C.begin(); i != C.end(); ++i)
	//{
		// if (*i == x)
		// {
		// 	std::cout << "It was found the occurrence of " << x << " in the container.\n";
		// 	return (0);
		// }
	//}
	return (std::cout << "Occurrence of: " << x << " not found\n", 1);
}

#endif
