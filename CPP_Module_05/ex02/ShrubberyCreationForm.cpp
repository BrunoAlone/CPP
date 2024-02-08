/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:21:21 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/08 16:49:52 by bruno            ###   ########.fr       */
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
	if (executor.getGrade() <= this->getGradeToExecute())
	{
		std::ofstream	outPut((this->Target_ + "_shrubbery").c_str());

		if (!outPut.is_open())
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
		outPut.close();
		std::cout << "\tThe tree has been made!!\n\n";
	}
	else
		throw GradeTooLowException();
}
