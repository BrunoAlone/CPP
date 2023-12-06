#include <iostream>

int	main()
{
	std::string	txt = "Hello\n";
	std::cout << txt[0] << "\n";

	// Change the value of a specific character:

	txt[0] = 'J';
	std::cout << txt;
}
