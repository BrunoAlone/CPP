/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 13:20:05 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/15 11:44:21 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->value = 0;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called\n";
	this->value = other.getRawBits();
}

/*
		Queremos então converter o x para o fixed-point number
	com 8 bits reservados para o número decimal.

		Então, teremos que entroduzir, esses 8 bits a partir do
	LSB (LOWEST SIGNIFICANT BIT).

		Imaginemos o número 2 (dois):

			INT	x = 2; Em binário (10);

			Em fixed point com 8 bits decimais: 10'.'00000000

		Do lado direito do ponto temos a parte inteira '10' que é o
	nosso 2. E do lado esquerdo temos a parte decimal '00000000'
	que são 8 bits, a zero.
*/

Fixed::Fixed(const int x)
{
	std::cout << "Int constructor called\n";
	this->value = x << _fractional;
	// Equivalente: this->value = x * 256;
	//std::cout << "Depois da conversão: " << value << std::endl;
}

/*
		Aqui a mesma coisa mas convertendo para um int, pois queremos
	guardar na variavel value.
*/

Fixed::Fixed(const float y)
{
	std::cout << "Float constructor called\n";
	this->value = static_cast<int>(roundf(y * (1 << _fractional)));
	//Equivalent: this->value = static_cast<int>(roundf(y * 256));
	//std::cout << "Depois da conversão: " << value << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assigment operator called\n";
	if (this != &other)
	{
		this->value = other.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->value = raw;
}

/*
		Depois para converter novamente para um INT ou FLOAT,
	fazemos o inverso, ao inves de multiplicar por 2⁸, dividimos
	por 2⁸!!!!!
*/

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->value) / (1 << _fractional));
}

int		Fixed::toInt(void) const
{
	return (this->value >> _fractional);
}

/*
			Explicação detalhada da função que se segue.

		1 - Sobrecarregar o Operador de Inserção('<<'):

			Isto pede para que se forneça uma implementação personalizada
		para o operador '<<' na classe.

		2 - Inserir a representação em float:

			Dentro do operador '<<' sobrecarregado, converte o valor de
		ponto fixo para a sua forma em float.
			Insere estye valor em float no objeto de fluxo de saída passado
		como parâmetro.

		Na seguinte implementação a função "operator<<" converte o valor
	de ponto fixo para a sua representação em float usando a função já
	existente "toFloat()" e de seguida insere esse valor no fluxo de
	saída fornecido (os).

		std::ostream&	operator<<(std::ostream& os, const Fixed& fixed): Esta
	implementação é padronizada para manipular este operador específico!
	Ela segue uma convenção que tem de ser respeitada.

		Então, no caso especifico da sobrecarga do operador "<<":

			A função recebe sempre estes dois parâmetros:

				- "std::ostream& os": Representa o objeto do fluxo de saída
			(exemplo: std::cout, um arquívo de saída...). Tem que ser passado
			como referência para se poder manípular o objeto em si e não uma copia.

				- "const Fixed& fixed": Objeto da classe que é chamado. Deve ser
			passado como referência constante para que garanta que não é modificado
			no processo.

				Ao usar então este operador num objeto desta classe como "std::cout << obj"
			o compilador automaticamente mapeia para a chamada desta função de subrecarga,
			fornecendo std::cout como o primeiro argumento e o objeto como o segundo.

				ISTA SINTAXE É CONVENCIONAL E TEM DE SER RESPEITADA.
*/

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed)
{
	// Converte o fixed-point value para float.
	float	floatValue = fixed.toFloat();
	//static_cast<void>(fixed);

	// Inserção no fluxo de saída.
	os << floatValue;
	//os << "Que coisa linda";

	return (os);
}

/*
				Funções tipo "operator<simbolo>"


		A sobrecarga de operadores permite que seja personalizado
	um comportamento de um determinado operador em dados personalizados
	como as classes. Ou seja, operador como "+, -, *, /, ==, etc" podem
	ser usados como objetos da classe de maneira personalizada.

		Quando se sobrecarrega um operador estamos basicamente a fornacer
	uma implementação especial para esse operador nos objetos da nossa
	classe. Para isso existe então esta função especial "operator".

		Na função acima temos que:

			- "operator<<" é a função que sobrecarga o operador de inserção ('<<').

			- "std::ostream&" é o tipo de retorno, indica que esta função retorna
		uma referência para um objeto de fluxo de saída ('std::ostream').

			- "os" é o objeto de fluxo de saída passado como parâmetro.

			- "const Fixed& fixed" é o objeto da classe passado como parâmetro.

		Esta função permite então que usemos esse operador para objetos desta classe
	em contexto de saída como "std::cout << objectFromThisClass".


		De uma forma geral, sempre que criamos uma função do tipo "operator<simbolo>"
	estámos a indicar como os objetos desta classe devem ser tratados perante
	essas operações.

		É uma ferramenta poderosa do C++. Por exemplo, usando "operato=="
	permite definir como é dois objetos são comparados por igualdade!!!
*/
