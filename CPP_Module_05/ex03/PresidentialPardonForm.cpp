/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:36:19 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/12 17:09:31 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// Ortodox

PresidentialPardonForm::PresidentialPardonForm() :
AForm("PresidentialPardonForm", false, 25, 5), Target_("RandomTarget")
{
	std::cout << "PresidentialPardonForm: Default constructor called\n\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) :
AForm("PresidentialPardonForm", false, 25, 5), Target_(other.getTarget())
{
	std::cout << "PresidentialPardonForm: Copy constructor called\n\n";
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	std::cout << "PresidentialPardonForm: Copy assignement operator called\n\n";
	(void)other;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm: Destructor called\n\n";
}

// Constructor with Target

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) :
AForm("PresidentialPardonForm", false, 25, 5), Target_(target)
{
	std::cout << "PresidentialPardonForm: Constructor with target called\n\n";
}

std::string	PresidentialPardonForm::getTarget() const
{
	return (this->Target_);
}

void	PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	std::cout << "The AForm: " << this->getName() << std::endl;
	std::cout << "It will be executed by: \n";
	std::cout << executor;

	if (!this->getSigned())
		throw FormNotSignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();

	else
	{
		std::cout << "\033[1;32m" << this->Target_ <<
		" has been pardoned by Zaphod Beeblebrox\033[0m\n\n";
	}
}
