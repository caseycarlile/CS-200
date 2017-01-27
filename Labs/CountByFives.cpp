#include <iostream>

using namespace std;

int main()
{
	int counter = 0;

	while (counter <= 20)
	{
		cout << counter << " ";
		counter = counter + 5;
	}

	cout << endl << endl;
	cout << "Done!";

	while (true) {}

	return 0;
}