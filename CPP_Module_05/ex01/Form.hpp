/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:26:08 by brolivei          #+#    #+#             */
/*   Updated: 2024/03/20 15:33:48 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <iomanip>

class	Bureaucrat;

class	Form
{
	private:
		const std::string	Name_;
		bool				Signed_;
		const unsigned int	GradeToSign_;
		const unsigned int	GradeToExecute_;
	public:
		// Ortodox
		Form();
		Form(const Form& other);
		Form&	operator=(const Form& other);
		~Form();

		// Getters
		std::string		getName() const;
		bool			getSigned() const;
		unsigned int	getGradeToSign() const;
		unsigned int	getGradeToExecute() const;

		// Constructor with specified parameters
		Form(std::string name, bool Signed, const unsigned int gradeToSign,
			const unsigned int gradeToExecute);

		// Signing Function
		void	beSigned(const Bureaucrat& person);

		// Exceptions classes
		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& os, const Form& obj);

#endif
