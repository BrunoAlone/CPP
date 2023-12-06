#include <iostream>

/*
				ACCESS SPECIFIERS


		The "public" keyword is an access specifier. Access specifiers
	define how the members(attributes and methods) of a class can be
	accessed. If the members are "public" that means that they can be
	accessed and modified from outside the code.

		However, what if we want members to be private and hidden from
	the outside world?

		In C++, there are three access specifiers:

			- public - members are accessible from outside the class.

			- private - members cannot be accessed(or viewed) from
		outside the class.

			- protected - members cannot be accessed from outside the
		class, however, they can be accessed in inherited classes.


		EXAMPLE:
*/

class	MyClass
{
	public:		// Public access specifier
		int	x;	// Public attribute
	private:	// Private access specifier
		int	y;	// Private attribute
};

int	main()
{
	MyClass	MyObj;

	MyObj.x = 10;
	MyObj.y = 80;
	return (0);
}


/*
				NOTES:

		It is possible to access private members of a class
	using a public method inside the same class. We will explore
	that in the next test.



		It is considered good practice to declare your class
	attributes as private (as often as you can). This will reduce
	the possibility of yourself(or others) to mess up the code.
		This is also the main ingredient of the "Encapsulation" concept.



		By default all members of a class are private if you don't
	specify an access specifier.
*/
