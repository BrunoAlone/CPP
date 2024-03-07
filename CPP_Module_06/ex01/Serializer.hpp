/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:51:45 by bruno             #+#    #+#             */
/*   Updated: 2024/03/07 15:06:10 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <stdint.h> // We have to use the library from C, because we need to compile with c++98.

// <cstdint> it's only after c++11

typedef struct s_data
{
	int	id;
	int	value;
}				Data; // We create a simple data struct just to test the conversions


class Serializer
{
	public:
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};

#endif
