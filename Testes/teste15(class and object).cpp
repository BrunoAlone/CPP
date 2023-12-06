#include <iostream>

// CREATE A CLASS

class	MyClass 				// The Class
{
	public:						// Access specifier
		int			MyNum;		// Attribute (int variable)
		std::string	MyString;	// Attribute (string variable)
};


/*
			EXPLANATIONS

	- The "class" keyword is used to create a class called MyClass.

	- The "public" keyword is an access specifier, wich specifies
that members (attributes and methods) of the class are accessible
from outside the class.

	- Inside the class, there is an intenger variable MyNum and a
string variable MyString. When variables are declared within a
class, they are called attributes.

	- At last, end the class definition with a semicolon ";".

*/

int	main()
{
	MyClass	MyObj;	// Create an object of MyClass

	// Access attributes and set values
	MyObj.MyNum = 15;
	MyObj.MyString = "Hello!!";

	// Print attribute values
	std::cout << MyObj.MyNum << std::endl;
	std::cout << MyObj.MyString << std::endl;
	return 0;
}
