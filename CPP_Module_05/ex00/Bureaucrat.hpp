/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:30:52 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/29 13:52:36 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class	Bureaucrat
{
	private:
		const std::string	Name_;
		unsigned int		Grade_;
	public:
		// Ortodox
		Bureaucrat();
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat&	operator=(const Bureaucrat& other);
		~Bureaucrat();

		// Adaptative constructors
		Bureaucrat(const std::string name, const unsigned int grade);

		//Getters
		std::string		getName() const;
		unsigned int	getGrade() const;

		void	incrementGrade();
		void	decrementGrade();

		// Exception classes
		/*
				Does are exception classes!

				They public inherit from 'std::exception'. This type
			of class is Standard on CPP for this type of classes.

				This class (std::exception) it's an interface that declares
			a member function 'what()' wich returns a C-string describing
			the exception.

				The most custom exception classes in C++ inherit from this
			interface 'std::exception'.
		*/
		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw(); // Member function from std::exception
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		/*
				Declaring this exceptions classes inside the classes
			that are related with that exception, it's a good practice.

				By defining them inside the Bureaucrat class, we are
			encapsuling them within the scope of the Bureaucrat class.

				In other side, defining them inside the Bureaucrat class,
			allows the exceptions classes to access private members from
			the Bureaucrat class directly if needed.
		*/
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& obj);

#endif
