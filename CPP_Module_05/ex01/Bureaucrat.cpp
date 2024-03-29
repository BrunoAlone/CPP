/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:35:51 by brolivei          #+#    #+#             */
/*   Updated: 2024/03/20 16:31:42 by bruno            ###   ########.fr       */
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
	if (this != &other)
		this->Grade_ = other.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat: Destructor called\n\n";
}

// Adaptative constructors

Bureaucrat::Bureaucrat(const std::string name, const unsigned int grade) : Name_(name)
{
	std::cout << "Bureaucrat: Constructor with \"Name\" and \"Grade\" called\n\n";
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
		throw GradeTooHighException();
	else
		this->Grade_ -= 1;
}

void	Bureaucrat::decrementGrade()
{
	if (this->Grade_ == 150)
		throw GradeTooLowException();
	this->Grade_ += 1;
}

// Signing Form
void	Bureaucrat::signForm(Form& form) const
{
	//form.beSigned(*this);
	//if (form.getSigned())
	//	std::cout << "\033[0;32m" << this->Name_ << " signed " << form.getName() << "\n\n\033[0m";
	//else
	//	std::cout << "\033[0;31m" << this->Name_ << " couldn't sign " << form.getName() <<
	//	"because his level is to low...\n\n\033[0m";
	try{
		form.beSigned(*this);
		std::cout << "\033[0;32m" << this->Name_ << " signed " << form.getName() << "\n\n\033[0m";
	} catch (std::exception& e) {
		std::cout << "\033[0;31m" << this->Name_ << " couldn't sign " << form.getName() <<
		" because his level is to low...\n\n\033[0m";

		std::cout << "Exception: " << e.what() << std::endl;
	}
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& obj)
{
	os << "\033[0;32m" << obj.getName();
	os << ", bureaucrat grade ";
	os << obj.getGrade() << ".\033[0m" << "\n\n";

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
