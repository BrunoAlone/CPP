// ************************************************************************** //
//                                                                            //
//                tests.cpp for GlobalBanksters United                        //
//                Created on  : Thu Nov 20 23:45:02 1989                      //
//                Last update : Wed Jan 04 09:23:52 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include <vector>
#include <algorithm>
#include <functional>
#include "Account.hpp"


int		main( void ) {

	typedef std::vector<Account::t>							  accounts_t; // Define um vetor de Account::t
	typedef std::vector<int>								  ints_t; // Define um veter de Ints.
	typedef std::pair<accounts_t::iterator, ints_t::iterator> acc_int_t;
	/*
			"std::pair" e um tipo de dado em C++ que armazena dois elementos.

			Neste caso, armazena dois iteradores para o vector de accounts_t e
		para o vetor de ints_t.
	*/

	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 }; // Inicializa uma array de ints.
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) ); // Linha equivalente a "size_t const			amounts_size = sizeof(amounts) / sizeof(int)"
	accounts_t				accounts( amounts, amounts + amounts_size );
	/*
			Cria um vetor de objetos do tipo 'Account', chamado 'accounts'.
			Cada objeto Account dentro do vetor e inicializado com um valor correspondente
		da array amounts.
	*/
	accounts_t::iterator	acc_begin	= accounts.begin(); // Inicializa um iterador a apontar para o inicio do vetor accounts
	accounts_t::iterator	acc_end		= accounts.end(); // Inicializa um iterador a apontar para o fim do vetor accounts

	int	const			d[]			= { 5, 765, 564, 2, 87, 23, 9, 20 }; // Inicializa uma array de ints chamada d.
	size_t const		d_size( sizeof(d) / sizeof(int) ); // Inizializa uma variavel size_t chamada d_size, com o tamanho de d.
	ints_t				deposits( d, d + d_size ); // Inicializa um vetor de Ints, chamado deposits, com os valores de d.
	ints_t::iterator	dep_begin	= deposits.begin(); // Cria um iterador que aponta pra o inicio do vetor deposits.
	ints_t::iterator	dep_end		= deposits.end(); // Cria um iterador que aponta para o fim do vetor deposits.

	int	const			w[]			= { 321, 34, 657, 4, 76, 275, 657, 7654 }; // Inicializa uma array de ints chamada de w.
	size_t const		w_size( sizeof(w) / sizeof(int) ); // Uma variavel sizet chama de w_size que guarda o tamanho de w.
	ints_t				withdrawals( w, w + w_size ); // Cria um vetor de Ints chamado de withdrawls, com os valores de w.
	ints_t::iterator	wit_begin	= withdrawals.begin(); // Cria um iterador que aponta para o inicio de withdrawals
	ints_t::iterator	wit_end		= withdrawals.end(); // Cria um iterador que aponta para o fim de withdrawals

	Account::displayAccountsInfos(); // Calls a functionAccountsInfos of the Account class.
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );
	/*
			Usa std::for_each para aplicar a funcao 'displayStatus' a cada elemento
		no alcance defenido por acc_begin e acc_end.

			std::for_each: e uma funcao que itera sobre um intervalo de elementos e aplica
		uma funcao ou operacao a cada elemento.

			std::mem_fun_ref( &Account::displayStatus ) ): Cria um objeto de funcao
		adaptadora que permite chamar o metodo 'displayStatus' em instancias de Account.
	*/

	for ( acc_int_t it( acc_begin, dep_begin );
		  it.first != acc_end && it.second != dep_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeDeposit( *(it.second) );
	}
	/*
			Loop que itera sobre dois conjuntos de dados em simultaneo, (acc_begin, dep_begin).
			Que como vimos em cima, acc_begin, aponta para o inicio do vetor de objectos accounts,
		e dep_begin, aponta pra o inicio da array de ints d.

			Para cada elementos correspondente chama o metodo makeDeposit da instancia Account
		apontada por acc_begin, e usa o valor apontado por dep_begin como argumento.
	*/

	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	for ( acc_int_t it( acc_begin, wit_begin );
		  it.first != acc_end && it.second != wit_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeWithdrawal( *(it.second) );
	}

	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	return 0;
}


// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //
