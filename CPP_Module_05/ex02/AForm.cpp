/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:33:16 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/07 14:54:25 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// Ortodox

AForm::AForm() : Name_("DefaultName"), GradeToSign_(1), GradeToExecute_(1)
{
	std::cout << "AForm: Default constructor called\n\n";
	this->Signed_ = false;
}

AForm::AForm(const AForm& other) : Name_(other.Name_), GradeToSign_(other.GradeToSign_), GradeToExecute_(other.GradeToExecute_)
{
	std::cout << "AForm: Copy constructor called\n\n";
	this->Signed_ = other.Signed_;
}

AForm&	AForm::operator=(const AForm& other)
{
	std::cout << "AForm: Copy assignemnt operator called\n\n";
	if (this != &other)
	{
		this->Signed_ = other.Signed_;
	}
	return (*this);
}

AForm::~AForm()
{
	std::cout << "AForm: Destructor called\n\n";
}

// Constructor with specified parameters

AForm::AForm(std::string name, bool Signed, const unsigned int gradeToSign,
			const unsigned int gradeToExecute) : Name_(name), Signed_(Signed),
			GradeToSign_(gradeToSign), GradeToExecute_(gradeToExecute)
{
	std::cout << "AForm: Constructor with parameters called\n\n";
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	else if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
}

// Getters

std::string	AForm::getName() const
{
	return (this->Name_);
}

bool	AForm::getSigned() const
{
	return (this->Signed_);
}

unsigned int	AForm::getGradeToSign() const
{
	return (this->GradeToSign_);
}

unsigned int	AForm::getGradeToExecute() const
{
	return (this->GradeToExecute_);
}

// Signing Function

void	AForm::beSigned(const Bureaucrat& person)
{
	std::cout << "The AForm: " << this->getName() << std::endl;
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
const char*	AForm::GradeTooHighException::what() const throw()
{
	return ("\033[1;31mGrade to High to this AForm\033[0m\n");
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return ("\033[1;31mGrade to low to this AForm\033[0m\n");
}

const char*	AForm::FormNotSignedException::what() const throw()
{
	return ("\033[1;31mForm is not signed\033[0m\n\n");
}

// Overload of the insertion

std::ostream&	operator<<(std::ostream& os, const AForm& obj)
{
	os << "\033[0;32;40m\n\tForm details: \n\n";
	os << std::left << std::setw(20) << "Name of the form: " << std::setw(20) << obj.getName() << std::endl;
	os << std::left << std::setw(20) << "It is Signed: " << std::setw(20) << obj.getSigned() << std::endl;
	os << std::left << std::setw(20) << "Grade to sign: " << std::setw(20) << obj.getGradeToSign() << std::endl;
	os << std::left << std::setw(20) << "Grade to execute: " << std::setw(20) << obj.getGradeToExecute() << "\033[0m\n\n";

	return (os);
}
