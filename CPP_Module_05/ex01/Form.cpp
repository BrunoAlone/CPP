/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:33:16 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/29 19:01:43 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Ortodox

Form::Form() : Name_("DefaultName"), GradeToSign_(1), GradeToExecute_(1)
{
	std::cout << "Form: Default constructor called\n\n";
	this->Signed_ = false;
}

Form::Form(const Form& other) : Name_(other.Name_), GradeToSign_(other.GradeToSign_), GradeToExecute_(other.GradeToExecute_)
{
	std::cout << "Form: Copy constructor called\n\n";
	this->Signed_ = other.Signed_;
}

Form&	Form::operator=(const Form& other)
{
	std::cout << "Form: Copy assignemnt operator called\n\n";
	if (this != &other)
	{
		this->Signed_ = other.Signed_;
	}
	return (*this);
}

Form::~Form()
{
	std::cout << "Form: Destructor called\n\n";
}

// Constructor with specified parameters

Form::Form(std::string name, bool Signed, const unsigned int gradeToSign,
			const unsigned int gradeToExecute) : Name_(name), Signed_(Signed),
			GradeToSign_(gradeToSign), GradeToExecute_(gradeToExecute)
{
	std::cout << "Form: Constructor with parameters called\n\n";
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	else if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
}

// Getters

std::string	Form::getName() const
{
	return (this->Name_);
}

bool	Form::getSigned() const
{
	return (this->Signed_);
}

unsigned int	Form::getGradeToSign() const
{
	return (this->GradeToSign_);
}

unsigned int	Form::getGradeToExecute() const
{
	return (this->GradeToExecute_);
}

// Signing Function

void	Form::beSigned(const Bureaucrat& person)
{
	std::cout << "The Form: " << this->getName() << std::endl;
	std::cout << "It will be signed by: \n";
	std::cout << person;

	if (person.getGrade() <= this->GradeToSign_)
	{
		this->Signed_ = true;
	}
	else if (person.getGrade() > this->GradeToSign_)
		throw GradeTooLowException();
}

// Exceptions classes
const char*	Form::GradeTooHighException::what() const throw()
{
	return ("Grade to High to this Form!!\n");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("Grade to low to this Form!!\n");
}

// Overload of the insertion

std::ostream&	operator<<(std::ostream& os, const Form& obj)
{
	os << "\033[0;32;40m\n\tForm details: \n\n";
	os << std::left << std::setw(20) << "Name of the form: " << std::setw(20) << obj.getName() << std::endl;
	os << std::left << std::setw(20) << "It is Signed: " << std::setw(20) << obj.getSigned() << std::endl;
	os << std::left << std::setw(20) << "Grade to sign: " << std::setw(20) << obj.getGradeToSign() << std::endl;
	os << std::left << std::setw(20) << "Grade to execute: " << std::setw(20) << obj.getGradeToExecute() << "\033[0m\n\n";

	return (os);
}
