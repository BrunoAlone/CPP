#include <iostream>

/*
			CONSTRUCTORS


	A constructor in C++ is a special method that is automatically
called when an object of a class is created.

	To create a constructor, use the same name as the class,
followed by parentheses ():

	NOTE: THE CONSTRUCTOR HAS THE SAME NAME AS THE CLASS, IT IS
ALWAYS PUBLIC, AND IT DOES NOT HAVE ANY RETURN VALUE.

*/

class	MyClass		// The Class
{
	public:			// Access specifier
		MyClass()	// Constructor
		{
			std::cout << "Hello World!";
		}
};

int	main()
{
	MyClass	MyObj;	// Create an object of Myclass (this will call the constructor)
	return (0);
}
