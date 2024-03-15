/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste22(containers).cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:52:06 by bruno             #+#    #+#             */
/*   Updated: 2024/03/15 10:16:39 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <vector>
#include <list>
#include <chrono>
#include <deque>
#include <set>

// Example of using containers:

// Based on the video: https://www.youtube.com/watch?v=6OoSgY6NVVk

/*
			This little program shows how vector move through memory
		while they are groing, changing the place of all the elements
		in the container to a place in memory where they fit all together.

			Interesting notice that, while he is groing, depending on the
		rhythm we are adding data to him, he starts to move to place where
		he know he have more 5 spaces for example. If the rhythm increases
		he start moving to places where he has more 50 places free in front
		of him, for example.
*/

//int	main()
//{
//	// Lambda function to roll a die
//	auto roll = []() { return rand() % 6 + 1; }; // Point 1 of explanations

//	// Create Container
//	std::vector<int> container; // Point 2 of explanations

//	// Add 1 item
//	container.push_back(roll()); // Point 3 of explanations

//	// Pointer to the first element of the container
//	const int* pAdressOfTheOriginalItemZero = &(*container.begin()); // Point 4 of explanations

//	std::chrono::duration<double> durInsertTime(0); // Point 5 of explanations

//	do
//	{
//		// Get Adress of first item
//		const int* pAdressOfItemZero = &(*container.begin());

//		// conatiner.size() return the size of the conatiner
//		std::cout << "Containers " << container.size() << " elements, took " <<
//			std::chrono::duration_cast<std::chrono::microseconds>(durInsertTime).count() << "us\n";

//		for (const auto& i : container) // Iterate all over the container
//		{
//			const int*	pAddressOfItemX = &i;
//			int	pItemOffset = pAddressOfItemX - pAdressOfItemZero;
//			int	pItemOffsetOriginal = pAddressOfItemX - pAdressOfTheOriginalItemZero;
//			std::cout << "Offset From Orinal: " << pItemOffsetOriginal << "  Offset From Zero: " << pItemOffset <<
//				"  Content: " << container[i] << std::endl;
//		}

//		auto tp1 = std::chrono::high_resolution_clock::now();
//		container.push_back(roll());
//		auto tp2 = std::chrono::high_resolution_clock::now();
//		durInsertTime = (tp2 - tp1);
//	} while (getc(stdin));
//	return (0);
//}

// ==========Explanations==========

/*
	Point 1 -> Lambda functions:

		Is feature in many programming languages. Allows to define
	anonymous functions inline, meaning that we can create small,
	one-off functions without needing to formally define them.

		In c++, lambda functions were introduced in the c++11 standard.

		Typically used in situations where is needed a simple and short
	function.

	Basic Syntax:

		[capture clause](parameters) -> return_type { function_body }

		- The capture clause is optional and allows to capture variables
	from the surrounding scope by value [=] or by reference [&].

		- The parameters are optional and represent the input arguments.

		- The return type is optional and specifies the return type of the
	function. It can be omitted if the return type can be deduced by the compiler.

		- The function body contains the code that will be executed when the
	lambda fucntion is called.

		In conclusion, Lambda function provide a concise and convenient way to define
	small, local functions inline within the code, making your code more expressive
	and readable.


	Line explained: auto roll = []() { return rand() % 6 + 1; };

		- 'auto': This keyword indicates that the type of
	variable 'roll' will be automatically deduced by the compiler.
	In this case, it will be deduced to be a lambda function object.

		- 'roll': The name of the variable that will hold the lambda function.

		- []: This part indicates that the lambda function does not capture any
	variables from its surrounding scope.

		- (): This indicates that the lambda function takes no args.

		- { return rand() % 6 + 1; }: the body of the function.

		So when we call 'roll()' it will execute this lambda function and
	return a random values between 1 and 6.
*/

/*
	Point 2 - Vector container

		Here we create a container of type std::vector<int>.

	Line explained: std::vector<int> container;

		- std::vector: This is a standard library container in C++.
	It represents a dynamic array that can resize itself automatically
	when elements are added or removed.

		- <int>: this specifies the type of elements that the vector will
	hold. In this case, it's int, indicating that the vector will store integer
	values.

		- container: The name given to the vector.
*/

/*
	Point 3 - push_back()

	void push_back (const value_type& val);

		push_back() function adds a new element at the end of the vector,
	after its current last element. The content of 'val' is copied(or moved)
	to the new element.

		This increases the conatainer size by one, wich reallocates the allocated
	storage space if -and only if- the new vector size surpasses the current vector
	capacity.
*/

/*
	Point 4:
	const int*	pAddressOfOriginalItemZero = &(*container.begin());

		- 'container.begin()': This function return an iterator pointing to
	the beginning of the vector, wich represents the first element.

		- '*container.begin()': Dereferencing the iterator retrieves the value
	of the first element in the vector.

		- '&(*container.begin())': The adress-of operator '&' is then applied
	to the dereferenced iterator, yielding the memory address where the first
	element of the vector is stored.
*/

/*
	Point 5: std::chrono::duration<double> durInsertTime(0);

		This line of code declares a variable named 'durInsertTime'
	of type 'std::chrono::duration<double>'.

		- 'std::chrono::duration': Class template provided be the <chrono>
	heades in C++11. Represents a duration of time.

		- <double>: Specifies the type of the duration's underlying
	representation. Indicates that the duration will be represented using
	floating-point numbers.

		- '(0)': Initializes the variable with 0.

		So, this line, creates a duration object and initialize him with zero
	seconds.
*/


// ===============Same Program but with std::list container===============


//int	main()
//{
//	// Lambda function to roll a die
//	auto roll = []() { return rand() % 6 + 1; }; // Point 1 of explanations

//	// Create Container
//	std::list<int> container; // Point 2 of explanations

//	// Add 1 item
//	container.push_back(roll()); // Point 3 of explanations

//	// Pointer to the first element of the container
//	const int* pAdressOfTheOriginalItemZero = &(*container.begin()); // Point 4 of explanations

//	std::chrono::duration<double> durInsertTime(0); // Point 5 of explanations

//	do
//	{
//		// Get Adress of first item
//		const int* pAdressOfItemZero = &(*container.begin());

//		// conatiner.size() return the size of the conatiner
//		std::cout << "Containers " << container.size() << " elements, took " <<
//			std::chrono::duration_cast<std::chrono::microseconds>(durInsertTime).count() << "us\n";

//		for (const auto& i : container) // Iterate all over the container
//		{
//			const int*	pAddressOfItemX = &i;
//			int	pItemOffset = pAddressOfItemX - pAdressOfItemZero;
//			int	pItemOffsetOriginal = pAddressOfItemX - pAdressOfTheOriginalItemZero;
//			std::cout << "Offset From Orinal: " << pItemOffsetOriginal << "  Offset From Zero: " << pItemOffset <<
//				"  Content: " << i << std::endl;
//		}

//		auto tp1 = std::chrono::high_resolution_clock::now();
//		container.push_back(roll());
//		auto tp2 = std::chrono::high_resolution_clock::now();
//		durInsertTime = (tp2 - tp1);
//	} while (getc(stdin));
//	return (0);
//}

// ===============Same Program but with std::deque container===============

//int	main()
//{
//	// Lambda function to roll a die
//	auto roll = []() { return rand() % 6 + 1; }; // Point 1 of explanations

//	// Create Container
//	std::deque<int> container; // Point 2 of explanations

//	// Add 1 item
//	container.push_back(roll()); // Point 3 of explanations

//	// Pointer to the first element of the container
//	const int* pAdressOfTheOriginalItemZero = &(*container.begin()); // Point 4 of explanations

//	std::chrono::duration<double> durInsertTime(0); // Point 5 of explanations

//	do
//	{
//		// Get Adress of first item
//		const int* pAdressOfItemZero = &(*container.begin());

//		// conatiner.size() return the size of the conatiner
//		std::cout << "Containers " << container.size() << " elements, took " <<
//			std::chrono::duration_cast<std::chrono::microseconds>(durInsertTime).count() << "us\n";

//		for (const auto& i : container) // Iterate all over the container
//		{
//			const int*	pAddressOfItemX = &i;
//			int	pItemOffset = pAddressOfItemX - pAdressOfItemZero;
//			int	pItemOffsetOriginal = pAddressOfItemX - pAdressOfTheOriginalItemZero;
//			std::cout << "Offset From Orinal: " << pItemOffsetOriginal << "  Offset From Zero: " << pItemOffset <<
//				"  Content: " << i << std::endl;
//		}

//		auto tp1 = std::chrono::high_resolution_clock::now();
//		container.push_back(roll());
//		auto tp2 = std::chrono::high_resolution_clock::now();
//		durInsertTime = (tp2 - tp1);
//	} while (getc(stdin));
//	return (0);
//}

// ===============Same Program but with std::set container===============

int	main()
{
	// Lambda function to roll a die
	auto roll = []() { return rand() % 6 + 1; }; // Point 1 of explanations

	// Create Container
	std::set<int> container; // Point 2 of explanations

	// Add 1 item
	container.insert(roll()); // Point 3 of explanations

	// Pointer to the first element of the container
	const int* pAdressOfTheOriginalItemZero = &(*container.begin()); // Point 4 of explanations

	std::chrono::duration<double> durInsertTime(0); // Point 5 of explanations

	do
	{
		// Get Adress of first item
		const int* pAdressOfItemZero = &(*container.begin());

		// conatiner.size() return the size of the conatiner
		std::cout << "Containers " << container.size() << " elements, took " <<
			std::chrono::duration_cast<std::chrono::microseconds>(durInsertTime).count() << "us\n";

		for (const auto& i : container) // Iterate all over the container
		{
			const int*	pAddressOfItemX = &i;
			int	pItemOffset = pAddressOfItemX - pAdressOfItemZero;
			int	pItemOffsetOriginal = pAddressOfItemX - pAdressOfTheOriginalItemZero;
			std::cout << "Offset From Orinal: " << pItemOffsetOriginal << "  Offset From Zero: " << pItemOffset <<
				"  Content: " << i << std::endl;
		}

		auto tp1 = std::chrono::high_resolution_clock::now();
		container.insert(roll());
		auto tp2 = std::chrono::high_resolution_clock::now();
		durInsertTime = (tp2 - tp1);
	} while (getc(stdin));
	return (0);
}
