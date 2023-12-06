#include <iostream>

/*

    The switch expression is evaluated once
    The value of the expression is compared with the values of each case
    If there is a match, the associated block of code is executed
    The break and default keywords are optional.

*/

int	main()
{
	int	day = 4;

	switch (day)
	{
		case 1:
			std::cout << "Monday\n";
			break;
		case 2:
			std::cout << "Tuesday\n";
			break;
		case 3:
			std::cout << "Wednesday\n";
			break;
		case 4:
			std::cout << "Thursday\n";
			break;
		case 5:
			std::cout << "Friday\n";
			break;
		case 6:
			std::cout << "Saturday\n";
			break;
		case 7:
			std::cout << "Sanday\n";
			break;
	}
	return (0);
}
