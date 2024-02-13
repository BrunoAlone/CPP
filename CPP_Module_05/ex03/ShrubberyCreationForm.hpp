/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:46:00 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/08 15:46:57 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "fstream"

class	ShrubberyCreationForm : public AForm
{
	private:
		const std::string	Target_;
	public:
		// Ortodox
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& other);
		virtual ~ShrubberyCreationForm();

		// Constructor with target
		ShrubberyCreationForm(std::string target);

		// Getter
		std::string	getTarget() const;

		void	execute(const Bureaucrat& executor) const;
};

#endif
