/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:33:16 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/07 14:54:25 by brolivei         ###   ########.fr       */
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
		person.signForm(*this);
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
	os << "\n\tForm details: \n\n";
	os << "\t\t" << "Name of the form: " << obj.getName() << std::endl;
	os << "\t\t" << "It is Signed: " << obj.getSigned() << std::endl;
	os << "\t\t" << "Grade to sign: " << obj.getGradeToSign() << std::endl;
	os << "\t\t" << "Grade to execute: " << obj.getGradeToExecute() << std::endl;

	return (os);
}
