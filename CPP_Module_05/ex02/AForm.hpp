/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:26:08 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/08 15:22:57 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <iomanip>

class	Bureaucrat;

class	AForm
{
	private:
		const std::string	Name_;
		bool				Signed_;
		const unsigned int	GradeToSign_;
		const unsigned int	GradeToExecute_;
	public:
		// Ortodox
		AForm();
		AForm(const AForm& other);
		AForm&	operator=(const AForm& other);
		virtual ~AForm();

		// Getters
		std::string		getName() const;
		bool			getSigned() const;
		unsigned int	getGradeToSign() const;
		unsigned int	getGradeToExecute() const;

		// Constructor with specified parameters
		AForm(std::string name, bool Signed, const unsigned int gradeToSign,
			const unsigned int gradeToExecute);

		// Signing Function
		void	beSigned(const Bureaucrat& person);

		virtual void	execute(const Bureaucrat& executor) const = 0;

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

		class	FormNotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& os, const AForm& obj);

#endif
