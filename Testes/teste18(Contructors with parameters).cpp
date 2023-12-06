#include <iostream>

class	Car						// The class
{
	public:						// Access specifier
		std::string	brand;		// Attribute
		std::string	model;		// Attribute
		int			year;		// Attribute
		Car(std::string x, std::string y, int z)	// Constructor with parameters
		{
			brand = x;
			model = y;
			year = z;
		}
};

/*
				NOTA:

		CONSTRUCTORS CAN BE DEFINED OUTSIDE THE CLASSES JUST
	LIKE THE METHODS.
*/

int	main()
{
	// 	Create Car objects and call the constructor with
	// different values
	Car	CarObj1("BMW", "X5", 1999);
	Car	CarObj2("Ford", "Focus", 1996);

	// Printing

	std::cout << CarObj1.brand << " " << CarObj1.model << " " << CarObj1.year << std::endl;
	std::cout << CarObj2.brand << " " << CarObj2.model << " " << CarObj2.year << std::endl;
	return (0);
}
