/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:39:50 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/05 16:24:36 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
	private:
		Brain*	brain_;
	public:
		Dog();
		Dog(const Dog& other);
		Dog&	operator=(const Dog& other);
		~Dog();

		void	makeSound() const;

		Brain*	getBrain() const;
};

#endif
