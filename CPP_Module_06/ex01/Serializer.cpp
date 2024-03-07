/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:00:22 by bruno             #+#    #+#             */
/*   Updated: 2024/03/07 15:44:33 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

/*
		reinterpret_cast:

			reinterpret_cast is a type of casting used in c++.

			- Convert a pointer of some data type into a pointer
			of another data type.

			Propose for using it:

			1. Can type cast any pointer to any other data type
			2. Used to work with bits.
			3. Binary serialization/deserialization: When reading
			or writing binary data to a file or network stream,
			you often need to interpret the raw bytes as specific
			types. Type punning allows you to reinterpret the
			binary data as different types for serialization
			and deserialization purposes.
*/

uintptr_t	Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr)); // Convert the Data pointer to unsignInteger
}

Data*		Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw)); // Convert the information in unsignIntenger to a Data structor pointer.
}
