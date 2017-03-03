#include <iostream>
#include <string>
using namespace std;

int main()
{
	string items[3];
	float prices[3];
	int arraySize = 3;

	for (int itemCount = 0; itemCount < arraySize; itemCount++)
	{
		cout << "Enter item name: ";
		cin >> items[itemCount];

		cout << "Enter price: ";
		cin >> prices[itemCount];

	}

	for (int counter = 0; counter < arraySize; counter++)
	{
		cout << "Item #" << counter << ": " << items[counter] << ", $" << prices[counter] << endl;
	}

	while (true) {}

	return 0;
}