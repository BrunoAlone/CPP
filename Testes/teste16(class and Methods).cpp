#include <iostream>

// METHODS ARE FUNCTIONS THAT BELONGS TO THE CLASS



// WE CAN CREATE METHODS INSIDE AND OUTSIDE THE CLASS:

class	MyClass						// The class
{
	public:							// Access specifier
		void	MyMethod()			// Method/function defined inside the class
		{
			std::cout << "Hello";
		}
		void	MySecondMethod();	//Method/function declaration
};

// Method/function definition outside the class
void	MyClass::MySecondMethod()
{
	std::cout << " World!!\n";
}

int	main()
{
	MyClass	MyObj;

	MyObj.MyMethod();
	MyObj.MySecondMethod();
	return (0);
}
