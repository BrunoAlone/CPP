/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:29:18 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/12 14:19:06 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib> // rand() function
#include <ctime> // For time() function

class RobotomyRequestForm : public AForm
{
	private:
		const std::string	Target_;
	public:
		// Ortodox
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& other);
		RobotomyRequestForm&	operator=(const RobotomyRequestForm& other);
		~RobotomyRequestForm();

		// Constructor with target
		RobotomyRequestForm(const std::string& target);

		// Getter
		std::string	getTarget() const;

		void	execute(const Bureaucrat& executor) const;
};

#endif
