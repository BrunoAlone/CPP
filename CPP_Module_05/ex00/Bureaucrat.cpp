/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:35:51 by brolivei          #+#    #+#             */
/*   Updated: 2024/03/20 15:29:47 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Ortodox Constructors and destructors

Bureaucrat::Bureaucrat() : Name_("RandomName"), Grade_(150)
{
	std::cout << "Bureaucrat: Default constructor called\n\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : Name_(other.Name_),
Grade_(other.getGrade())
{
	std::cout << "Bureaucrat: Copy constructor called\n\n";
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat& other)
{
	std::cout << "Bureaucrat: Copy assignment operator called\n\n";
	if (this != &other) // Good practice that avoid shit like deallocate memory and then
	//assign it, if it's the same object
		this->Grade_ = other.getGrade();
	// Name is as const atribbute so we cant change it.
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat: Destructor called\n\n";
}

// Adaptive constructors

Bureaucrat::Bureaucrat(const std::string name, const unsigned int grade) : Name_(name)
{
	std::cout << "Bureaucrat: Adaptive constructor called\n\n";
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		this->Grade_ = grade;
}

// Getters

std::string	Bureaucrat::getName() const
{
	return (this->Name_);
}

unsigned int	Bureaucrat::getGrade() const
{
	return (this->Grade_);
}

void	Bureaucrat::incrementGrade()
{
	if (this->Grade_ == 1)
		throw GradeTooHighException(); // Throw the exception when te problem arise
	else
		this->Grade_ -= 1;
}

void	Bureaucrat::decrementGrade()
{
	if (this->Grade_ == 150)
		throw GradeTooLowException(); // Throw the exception when te problem arise
	this->Grade_ += 1;
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& obj)
{
	os << obj.getName();
	os << ", bureaucrat grade ";
	os << obj.getGrade() << "." << std::endl;

	return (os);
}

//Exceptions

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("The Bureaucrat Grade is to high.\n\n");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("The Bureaucrat Grade is to low.\n\n");
}
