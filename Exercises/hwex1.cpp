#include <iostream>     // input/output commands
using namespace std;    // standard library

int main()              // program entry function
{
	// Variable declarations
	float width;
	float length;
	float area;
	float perimeter;

	//Header
	cout << "ROOM CALCULATOR" << endl;
	cout << endl;

	//Room 1
	cout << "ROOM 1" << endl;
	cout << endl;

	// Get user input:
	cout << "Enter the width: ";        // text output
	cin >> width;                       // input from the user

	cout << "Enter the length: ";
	cin >> length;

	area = width * length;              // assignment statement

	perimeter = 2 * width + 2 * length; //perimeter assignment

										// Display results:
	cout << endl;                       // empty line
	cout << "Area: " << area << endl;
	cout << "Perimeter: " << perimeter << endl;
	cout << endl;

	//Room 2
	cout << "ROOM 2" << endl;
	cout << endl;

	// Get user input:
	cout << "Enter the width: ";        // text output
	cin >> width;                       // input from the user

	cout << "Enter the length: ";
	cin >> length;

	area = width * length;              // assignment statement

	perimeter = 2 * width + 2 * length; //perimeter assignment

										// Display results:
	cout << endl;                       // empty line
	cout << "Area: " << area << endl;
	cout << "Perimeter: " << perimeter << endl;

	while (true);
	return 0;           // end of program
}
