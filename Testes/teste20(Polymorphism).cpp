// Source code Geeks for Geeks

#include <iostream>

/*
		Functions with the same name but different
	input parameters
*/

class test
{
	public:
		void	func(int x)
		{
			std::cout << "value of x is " << x << std::endl;
		}

		void	func(double x)
		{
			std::cout << "value of x is " << x << std::endl;
		}

		void	func(int x, int y)
		{
			std::cout << "value of x and y is " << x
			<< ", " << y << std::endl;
		}
};

/*
		This demonstrates function overloading,
	also known as Compile-time Polymorphism

		The same function "func()" acts differently in three
	different situations, property of polymorphism.
*/

int	main()
{
	test	obj1;

	// The function being called depends on the parameters
	// passed.

	obj1.func(7);

	obj1.func(9.12);

	obj1.func(2, 4);
	return (0);
}
