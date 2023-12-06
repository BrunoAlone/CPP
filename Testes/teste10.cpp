#include <iostream>

/*
			Bolean in C++;
*/

int	main()
{
	bool	IsCodingFun = true;
	bool	IsWarFun = false;
	int		x;

	//std::cout << IsCodingFun << std::endl;
	//std::cout << IsWarFun << std::endl;

	std::cout << "What is your age?: ";
	std::cin >> x;
	if (x >= 18)
		std::cout << "You are old enough to vote!" << std::endl;
	else
		std::cout << "You are not old enough to vote!" << std::endl;
	return (0);
}

/*
			USO DA DECLARACAO DE CONDICAO SWITCH EM C++:

			switch (expressao)
			{
				case valor1:
					// Código a ser executado se expressao for igual a valor1
					break;

				case valor2:
					// Código a ser executado se expressao for igual a valor2
					break;

				// Pode haver mais casos aqui...

				default:
					// Código a ser executado se nenhum dos casos anteriores for correspondido
					break;
			}

*/
