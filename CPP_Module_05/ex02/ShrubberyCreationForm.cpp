/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:21:21 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/12 17:14:39 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", false, 145, 137), Target_("RandomTarget")
{
	std::cout << "ShrubberyCreationForm: Default constructor called\n\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) :
AForm(other.getName(), false, other.getGradeToSign(), other.getGradeToExecute()),
Target_(other.getTarget())
{
	std::cout << "ShrubberyCreationForm: Copy constructor called\n\n";
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	std::cout << "ShrubberyCreationForm: Copy assignment operator called\n\n";
	(void)other;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm: Destructor called\n\n";
}

// Constructor with target

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
AForm("ShrubberyCreationForm", false, 145, 137),
Target_(target)
{
	std::cout << "ShrubberyCreationForm: Constructor with \"Target\" called\n\n";
}

// Getter

std::string	ShrubberyCreationForm::getTarget() const
{
	return (this->Target_);
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	std::cout << "The AForm: " << this->getName() << std::endl;
	std::cout << "It will be executed by: \n";
	std::cout << executor;

	if (!this->getSigned())
		throw FormNotSignedException();
	if (executor.getGrade() <= this->getGradeToExecute())
	{
		std::ofstream	outPut((this->Target_ + "_shrubbery").c_str()); // std::ofstream : Create an output file

		if (!outPut.is_open()) // Verify if the file was correctly open.
		{
			std::cerr << "Error opening the file!\n";
			return ;
		}
		outPut << "                                    # #### ####" << std::endl;
		outPut << "                                ### \\/#|### |/####" << std::endl;
		outPut << "                               ##\\/#/ \\||/##/_/##/_#" << std::endl;
		outPut << "                             ###  \\/###|/ \\/ # ###" << std::endl;
		outPut << "                           ##_\\_#\\_\\## | #/###_/_####" << std::endl;
		outPut << "                          ## #### # \\ #| /  #### ##/##" << std::endl;
		outPut << "                           __#_--###`  |{,###---###-~" << std::endl;
		outPut << "                                     \\ }{" << std::endl;
		outPut << "                                      }}{" << std::endl;
		outPut << "                                      }}{" << std::endl;
		outPut << "                                 ejm  {{}" << std::endl;
		outPut << "                                , -=-~{ .-^- _" << std::endl;
		outPut << "                                      `}" << std::endl;
		outPut << "                                       {" << std::endl;
		outPut.close(); // Close the file
		std::cout << "\t\033[1mThe tree has been made!!\033[0m\n\n";
	}
	else
		throw GradeTooLowException();
}
