/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:34:26 by brolivei          #+#    #+#             */
/*   Updated: 2024/03/04 13:53:00 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
AForm("RobotomyRequestForm", false, 72, 45), Target_("RandomTarget")
{
	std::cout << "RobotomyRequestForm: Default constructor called\n\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) :
AForm("RobotomyRequestForm", other.getSigned(), 72, 45), Target_(other.getTarget())
{
	std::cout << "RobotomyRequestForm: Copy constructor called\n\n";
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	std::cout << "RobotomyRequestForm: Copy assignment operator called\n\n";
	(void)other;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm: Destructor called\n\n";
}

// Constructor with target

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) :
AForm("RobotomyRequestForm", false, 72, 45), Target_(target)
{
	std::cout << "RobotomyRequestForm: Constructor with target called\n\n";
}

// Getter

std::string	RobotomyRequestForm::getTarget() const
{
	return (this->Target_);
}

void	RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	std::cout << "The AForm: " << this->getName() << std::endl;
	std::cout << "It will be executed by: \n";
	std::cout << executor;

	if (!this->getSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();

	else
	{
		srand(static_cast<unsigned int>(time(NULL)));
		if ((rand() % 100 + 1) % 2 == 0)
			std::cout << "\033[1;32m" << this->Target_ << " has been robotomized\033[0m\n\n";
		else
			std::cout << "\033[1;31mRobotomy Failed\n\n";
	}
}

/*
		The "srand()"" function initializes the random number generator
	with a seed value.
		In C++, the "rand()" function generates pseudorandom numbers, wich
	means the sequence of numbers it produces appears random but is actually
	deterministic, based on an initial seed value.

		By calling "srand()" with "time(NULL)" as an argument, we are seeding
	the random number generator with the current time. Since time is constantly
	changing, this ensures that each time we run the program, we get a different
	value, leading to a different sequence of pseudorandom numbers.
*/
