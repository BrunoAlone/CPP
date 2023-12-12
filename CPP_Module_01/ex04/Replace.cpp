/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:27:56 by brolivei          #+#    #+#             */
/*   Updated: 2023/12/12 16:28:57 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string filename, std::string string1, std::string string2)
{
	fileName = filename;
	s1 = string1;
	s2 = string2;
}

std::string	Replace::getFilename()
{
	return (fileName);
}

std::string	Replace::getS1()
{
	return (s1);
}

std::string	Replace::getS2()
{
	return (s2);
}

/*
			O exercio pede para abrirmos um ficheiro de texto, e ao ler o seu
		conteudo, modificar todas as ocorrencia de S1 por S2.(Existe a proibição
		de usar std::string::replace).

			Neste função, usamos então a classe ifstream(classe que permite ler
		de ficheiros) e usamos classe ofstream(classe que permite escrever em ficheiros).

			std::ifstream	inputF(fileName.c_str()); - Nesta linha criamos então o
		objeto que nos irá permitir ler do ficheiro que passamos como parametro. O
		Constructor desta classe recebe uma string C type, ou seja um ponteiro para
		o byte de memoria dessa string, daí o uso de "c_str()".

			std::ofstream	outputF((fileName + ".replace").c_str()); - Agora, criamos o
		objecto que permite escrever em ficheiros. Caso o ficheiro não exista, esta class
		irá cria-lo com o nome fornecido.

		Nota: Ambos os constructors destas classes já abrem os ficheiros, logo não há necessidade
		do uso da função ".open()".

			Com o metodo ".is_open()" certificamos que os ficheiros foram abertos sem problema.

			A função "getline" extrai uma linha da stream dada, e guarda na variavel std::string
		que é o segundo parametro. Ela pára quando encontra o caractere "\n" ou EOF. Se encontrar EOF
		termina o processo.

		while ((i = line.find(s1, i)) != std::string::npos):

			Neste loop, a variável i será o nosso iterador da string.
			A função "find" é usada para procurar uma substr dentro de uma
		string. Ela recebe a substr e a posição na qual queremos começar
		a procurar.

			Se essa substr for encontrada, a função find, retorna a posição
		do primeiro caractere dessa substr. Caso não encontre, retorna uma
		constante "npos", que significa "no position".

			line.erase(i, s1.length()) - Apaga a partir de i a quantidade de
		memoria s1.length().

			line.insert(i, s2) - Insere, a partir da posição i, a string s2 em
		line.

		outputF << line << "\n" - Escreve a linha no ficheiro outputF.
*/

void	Replace::replaceFile()
{
	std::ifstream	inputF(fileName.c_str()); // Opening the inputFile
	std::ofstream	outputF((fileName + ".replace").c_str()); // Opening or creating the output file.

	if (!inputF.is_open())
	{
		std::cerr << "Error when try to open inputFile: " << fileName << std::endl;
		return ;
	}
	if (!outputF.is_open())
	{
		std::cerr << "Error when try to create or just open outputFile: " << fileName + ".replace" << std::endl;
		return ;
	}

	std::string	line;
	while (std::getline(inputF, line))
	{
		size_t	i = 0;
		while ((i = line.find(s1, i)) != std::string::npos)
		{
			line.erase(i, s1.length());
			line.insert(i, s2);
			i += s2.length();
		}
		outputF << line << "\n";
	}
	inputF.close();
	outputF.close();
}
