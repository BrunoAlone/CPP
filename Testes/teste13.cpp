#include <iostream>

/*
		ARRAYS IN C++:
*/

int	main()
{
	std::string	teste[4]; // Declaracao de uma array de 4 strings
	int	num[4]; // Declaracao de uma array de 4 ints.

	teste[0] = "teste0";
	teste[1] = "teste1";
	teste[2] = "teste2";
	teste[3] = "teste3";
	num[0] = 0;
	num[1] = 1;
	num[2] = 2;
	num[3] = 3;


	std::cout << teste[2] << std::endl;
	std::cout << "The size of the num array is: " << sizeof(num) / sizeof(int) << std::endl;

	// Iterar uma array usando sizeof

	for (int i = 0; i < sizeof(num) / sizeof(int); i++)
		std::cout << num[i] << std::endl;
	return (0);
}
