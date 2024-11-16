// Exercise4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	//we create our alt variables
	int FirstAltitude;
	int SecondAltitude;
	int AltDiff;
	//we prompt for the altitudes
	std::cout << "What is the first altitude? " << std::endl;
	std::cin >> FirstAltitude;
	std::cout << "What is the second altitude? " << std::endl;
	std::cin >> SecondAltitude;
	//we calculate the result 
	AltDiff = SecondAltitude - FirstAltitude;
	//we display the result
	std::cout << "The difference in altitude is \n " << AltDiff << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
