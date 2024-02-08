/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:21:21 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/08 16:03:09 by brolivei         ###   ########.fr       */
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
		std::ofstream	outPut(this->Target_ + "_shrubbery");

		if (!outPut.is_open())
		{
			std::cerr << "Error opening the file!\n";
			return ;
		}

		outPut << "|| Apr 00 - a winter moon (1) ||\n";
		outPut << "                                                        ,\n";
		outPut << "                                            .__ ._       \_.\n";
		outPut << "                                     _, _.  '  \/   \.-  /\n";
		outPut << "                                      \/     .-_`   // |/     \,\n";
		outPut << "                     .-""""-.          \.   '   \`. ||  \.-'  /\n";
		outPut << "                    F        Y        .-.`-(   _/\ V/ \\//,-' >-'   ._,\n";
		outPut << "                   F          Y   .__/   `. \.   ' J   ) ./  / __._/\n";
		outPut << "                  J         \, I    '   _/ \  \  | |  / /  .'-'.-' `._,\n";
		outPut << "           (       L   \_.--.| \_.      ' .___ `\: | / .--'.-'     " << std::endl;
		outPut << "         \ '\    .  L   /    \\/        ._/`-.`  \ .'.' .'---./__   '\n";
		outPut << "    \__  '\ ) \._/   `-.__. ` \\_. '   .---.  \     /  /  ,   `  `\n";
		outPut << "  --'  \\  ): // \,            `-.`__.'     `- \  /   / _/-.---.__.- .\n";
		outPut << "     _.-`.'/ /'\_, ._     >--.-""'____.--""`_     '   /.\'..\' \   \   _/`\n";
		outPut << " _ .---._\ \'/ '__./__.-..  / .-|(    x_.-'___  |   :' /    _..---_' \\n";
		outPut << " .:' /`\ `. `..'.--'\      /.' /`-`._  `-,'   ` '   I '_.--'__--..___.--._.-\n";
		outPut << "     `  `. `\/'/  _.   _.-'      _.____./ .-.--""-. .-    ' _..-.---'   " << std::endl;
		outPut << "  -._ .--.\ / /-./     /   .---'-/.___. .-'       \__ .--.  `    `.     '`-" << std::endl;
		outPut << " ,--'/.-. ^.   .-.--.  ` _/    _//     ./   _..   .'  `.    \ \    |_.\n";
		outPut << "    /' | >.   ' | \._.-       '    _..'  `.' . `.       )    | |\  `\n";
		outPut << "  ./ \ \'  ) c| /  \     \_..  .--'    ,\ \_/`  :    )  (`-. `.|`\\\n";
		outPut << "   \'  / ,-.  | ` ./`  ._/ `\\'.--.,-((  `.`.__ |   _/   \    |)  `--._/`\n";
		outPut << "______'\   |  < __________  //'  //  _)   )/-._`.  (,-')  )  / \_.    /\. _____\n";
		outPut << "a:f        |  |        .__./    //  '\  |//    `.\ '\ (  (  <`   ._  '\n";
		outPut << "           >  |      _.  /   ..-\ _    _/ \_.  \ `\    \_ `---.-'__\n";
		outPut << "        . /  `-   _.'        /   `   _/|       J  /`     `-,,-----.`-.\n";
		outPut << "            '  .:'          '`      '          < `   f  I //        `�\_,\n";
		outPut << "              '                         \.     J        I/\_.        ./\n";
		outPut << "         __/                            `:     I  .:    K  `          `\n";
		outPut << "         \/ )                            `,   J         L\n";
		outPut << "          )_(_                             .  F  .-'    J\n";
		outPut << "         /    `.                           .  I  (.   . I _.-.._\n";
		outPut << "   '    <'    \ )                     _.---.J/      :'   L -'\n";
		outPut << " .:.     \. _.->/                        _.-'_.)     ` `-.`---.,_.\n";
		outPut << ":<        (    \                    .--""   .F' J) `.`L.__`-.___\n";
		outPut << ".:        |-'\_.|                          Y ..Z     ))   `--'  `-\n";
		outPut << ".         ) | > :                            . '    :'\n";
		outPut << "          / ) L_J                            .x,.\n";
		outPut << "          L_J .,                             .:<.,\n";
		outPut << "        .'`   `                               :J.,`\n";
		outPut << "                                           . ;.+K,:.\n";
		outPut << "                                               .,L+.,\n";
		outPut.close();
		std::cout << "\tThe tree has been made!!\n\n";
	}
}
