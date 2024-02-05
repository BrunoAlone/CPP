/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:30:47 by brolivei          #+#    #+#             */
/*   Updated: 2024/02/05 15:20:30 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

/*
			Neste exercicio e nos pedido para implementar uma
		classe base chamada Animal.

			E nos dito, que esta classe tem um atributo protected
		"std::string type";

			Esta classe servira como base para as classes "Dog" e
		"Cat", dando uma interface comum para estas classes derivadas.

			Ela esta escritada da forma ortodoxa, como ja e comum.
		Tem o seu constructor default que inicializara o atributo
		"type".

			Neste caso, como esta classe funcionara como uma classe
		base para outras classes derivas dela, o seu destructor tem de
		ser virtual. Ao colocar este destructor virtual, assegura que
		toda a memoria e libertada de forma apropriada quando sao apagados
		objetos das classes derivadas atravez de ponteiros da classe
		base.

			O polimorfismo permite que objectos das classes
		derivadas sejam tratadas como objetos da classe base,
		quando sao acessadas atraves de ponteiros ou por referencia
		da classe base. Quando temos um ponteiro ou uma referencia
		para uma classe base que aponta para um objecto de uma classe
		derivada, C++, permite que chamemos funcoes da classe derivada
		atraves do ponteiro da classe base.

			Porque virtual destructor???:

			O problema de nao ter virtual destructor sao que, quando um
		ponteiro para uma classe base, e usado para referenciar um objeto de
		uma classe derivada, e a classe base nao tem um destructor virtual,
		c++ pode levar a comportamentos inexperados durante a destruicao de
		objetos.
			Sem um destructor virtual, quando se usa a keyword "delete" num
		objeto atraves do ponteiro da classe base, e esse objeto for uma classe
		derivada, apenas o destructor da classe base e chamada. Isso pode levar
		a leaks de memoria e comportamento indefinido.

			Ao declarar o destructor da classe base como virtual, estamos a indicar
		ao compilador de C++ que deve ver na tabela virtual para determinar o verdadeiro
		tipo de objeto que esta a ser apagado.
			Isto assegura que a ordem de destruicao e sequenciada de forma correta,
		comecando pela classe mais derivada e ir subindo pela hierarquia.

			Com um destructor virtual na classe base, quando se apaga um objeto
		atraves de um ponteiro da classe base, o destructor correto, da classe
		derivada e chamado.

			Em suma, usar um destructor virtual e uma pratica mandatoria quando
		se trabalha com polimorfismo em C++. Garante que os destructors corretos sao
		chamados durante a destruicao de objetos, promevendo assim uma limpeza apropriada
		e prevenindo leaks de memoria.


			Porque a funcao makeSound() esta tambem de forma virtual?

			Como a funcao makeSound() vai ter um comportamento variado consoante
		a classe detivada, ou seja, cada uma vai ter a sua propria implementacao,
		colocala como virtual, indicamos ao computador que ela sera reescrita nas
		classes derivas, criando um vinculo dinamico a cada uma delas.

			A classe Dog, tera um vinculo a sua propria implementacao da makeSound()
		por exemplo...

			Quando se usa um ponteiro para uma classe base para nos referirmos a um
		objeto de uma classe derivada e chamarmos o metodo "makeSound",a versao correta
		desse metodo esta vinculado ao tipo de objeto de classe derivada. Isto permite escrever
		codigo que trabalda com objetos de diferentes tipos atraves de uma classe base
		comum.
*/

class	Animal
{
	protected:
		std::string	type_;
	public:
		Animal();
		Animal(const Animal& other);
		Animal&	operator=(const Animal& other);
		virtual ~Animal();

		//Getter
		std::string	getType() const;

		virtual void	makeSound() const;
};

#endif
