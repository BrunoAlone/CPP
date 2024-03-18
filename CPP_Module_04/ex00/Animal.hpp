/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:30:47 by brolivei          #+#    #+#             */
/*   Updated: 2024/03/18 14:08:13 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

/*
			Neste exercicio é nos pedido para implementar uma
		classe base chamada Animal.

			É nos dito, que esta classe tem um atributo protected
		"std::string type";

			Esta classe servirá como base para as classes "Dog" e
		"Cat", dando uma interface comum para estas classes derivadas.

			Ela está escritada de forma ortodoxa, como já é comum.
		Tem o seu constructor default que inicializará o atributo
		"type".

			Neste caso, como esta classe funcionará como uma classe
		base para outras classes derivas dela, o seu destructor tem de
		ser virtual. Ao colocar este destructor virtual, assegurámos que
		toda a memória é libertada de forma apropriada quando sao apagados
		objetos das classes derivadas através de ponteiros da classe
		base.

			O polimorfismo permite que objectos das classes
		derivadas sejam tratadas como objetos da classe base,
		quando são acessadas através de ponteiros ou por referência
		da classe base. Quando temos um ponteiro ou uma referência
		para uma classe base que aponta para um objecto de uma classe
		derivada, o C++, permite que chamemos funcões da classe derivada
		através do ponteiro da classe base.

			Porque virtual destructor???:

			O problema de não ter virtual destructor é que, quando um
		ponteiro para uma classe base é usado para referênciar um objeto de
		uma classe derivada, e a classe base não tem um destructor virtual,
		c++ pode levar a comportamentos inesperados durante a destruição de
		objetos.
			Sem um destructor virtual, quando se usa a keyword "delete" num
		objeto através do ponteiro da classe base, e esse objeto for uma classe
		derivada, apenas o destructor da classe base é chamado. Isso pode levar
		a leaks de memória e comportamento indefinido.

			Ao declarar o destructor da classe base como virtual, estamos a indicar
		ao compilador de C++ que deve ver na tabela virtual para determinar o verdadeiro
		tipo de objeto que está a ser apagado.
			Isto assegura que a ordem de destruição é sequenciada de forma correta,
		começando pela classe mais derivada e ir subindo pela hierarquia.

			Com um destructor virtual na classe base, quando se apaga um objeto
		através de um ponteiro da classe base, o destructor correto, da classe
		derivada é chamado.

			Em suma, usar um destructor virtual é uma prática mandatória quando
		se trabalha com polimorfismo em C++. Garante que os destructors corretos são
		chamados durante a destruição de objetos, promevendo assim uma limpeza apropriada
		e prevenindo leaks de memória.


			Porque a função makeSound() está também de forma virtual?

			Como a função makeSound() vai ter um comportamento variado consoante
		a classe derivada, ou seja, cada uma vai ter a sua propria implementação,
		coloca-la como virtual, indica ao compilador que ela será reescrita nas
		classes derivas, criando um vínculo dinâmico a cada uma delas.

			A classe Dog, terá um vínculo à sua própria implementação da makeSound()
		por exemplo...

			Quando se usa um ponteiro para uma classe base para nos referirmos a um
		objeto de uma classe derivada e chamarmos o método "makeSound",a versão correta
		desse método está vinculado ao tipo de objeto de classe derivada. Isto permite escrever
		código que trabalha com objetos de diferentes tipos através de uma classe base
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
