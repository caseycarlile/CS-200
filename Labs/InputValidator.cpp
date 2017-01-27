#include <iostream>

using namespace std;

int main()
{
	int choice;

	cout << "Please enter a number between 0 and 5: ";
	cin >> choice;

	while (choice < 0 || choice > 5)
	{
		cout << "Invalid entry. Try again: ";
		cin >> choice;
	}

	cout << "Thank you" << endl;

	while(true) {}

	return 0;
}