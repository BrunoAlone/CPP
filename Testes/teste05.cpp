#include <iostream>

/*
int	main()
{
	std::string	FirstName = "Bruno";
	std::string	LastName = "Soares";
	std::string	FullName = FirstName + " " + LastName;
	std::cout << FullName << "\n";
}
*/

// Outra forma de concatenar strings:

int	main()
{
	std::string	FirstName = "Bruno";
	std::string	LastName = "Soares";
	std::string	FullName = FirstName.append(" ");
	FullName = FirstName.append(LastName);
	FullName = FirstName.append("\n");
	std::cout << FullName;
}
