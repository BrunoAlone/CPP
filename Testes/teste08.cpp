#include <iostream>

/*
		Neste pequeno programa percebemos como recolher input do
	usuario atraves da funcao cin.
*/

/*
int	main()
{
	std::string	FirstName;

	std::cout << "Type your full name: ";
	std::cin >> FirstName;
	std::cout << "You name is: " << FirstName << std::endl;
	return (0);
}
*/

/*
		Porem esta funcao considera espacos em branco, tabs, etc
	como o sinal de termino da string, o que significa que apena
	podes armazenar uma unica palavra.
*/

//		PARA RECOLHER MAIS QUE UMA PALAVRA

int	main()
{
	std::string	FullName;

	std::cout << "Type your full name: ";
	std::getline(std::cin, FullName);
	std::cout << "Your full name is: " << FullName << std::endl;
	return (0);
}
