#include <iostream>

using namespace std;

int main()
{
	int choice;

	cout << "What is your favorite fruit?" << endl << "1. Apple" << endl << "2. Banana" << endl << "3. Pear" << endl << "4. Strawberry" << endl << endl << "Your selection: ";
	cin >> choice;
	cout << endl;

	if ((choice > 4) || (choice < 1))
	{
		cout << "Invalid choice!" << endl;
	}
	else
	{
		cout << "Good choice!" << endl;
	}

	while (true) {}

	return 0;
}