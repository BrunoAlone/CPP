#include <iostream>

//		MULTI-DIMENSIONAL ARRAYS

/*
int	main()
{
	std::string	letters[2][4] = {
		{"A", "B", "C", "D"},
		{"E", "F", "G", "H"}
	}
}
*/

//	Codigo de uma simulacao de batalha naval:

int	main()
{
	// One is a ship, 0 is water.
	bool	ships[4][4] = {
		{0, 1, 1, 0},
		{0, 0, 0, 0},
		{0, 0, 1, 0},
		{0, 0, 1, 0}
	};

	int	hits = 0;
	int	numberOfTurn = 0;

	while (hits < 4)
	{
		int	row, column;

		std::cout << "Selecting coordinates\n";

		std::cout << "Choose a row number between 0 and 3: ";
		std::cin >> row;

		std::cout << "Choose a column number between 0 and 3: ";
		std::cin >> column;

		if (ships[row][column])
		{
			ships[row][column] = 0;
			hits++;
			std::cout << "HIT! " << (4-hits) << " left.\n\n";
		}
		else
		{
			std::cout << "Miss\n\n";
		}
		numberOfTurn++;
	}
	std::cout << "Victory!\n";
	std::cout << "You won in " << numberOfTurn << " turns\n";
}
