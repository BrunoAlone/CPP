#include <iostream>

/*
		Forma ternaria de escrever if...else:
*/

int	main()
{
	// Forma usual:

	int	time = 20;
	std::string	teste;

	if (time < 18)
		std::cout << "Good day!\n";
	else
		std::cout << "Good evening.\n";

	// Forma ternaria:

	teste = (time < 18) ? "Good day.\n" : "Good evening.\n";
	std::cout << teste;
	return (0);
}
