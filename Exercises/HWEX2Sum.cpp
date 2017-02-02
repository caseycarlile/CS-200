#include <iostream>
using namespace std;

int main() 
{
	int sum = 0;
	bool isDone = false;

	while (isDone == false)
	{
		int num;
		char choice;

		cout << endl << "Enter a number: ";
		cin >> num;

		sum = sum + num;

		cout << endl << "Type (Q) to quit, or (A) to enter another." << endl << "Choice: ";
		cin >> choice;

		if (choice == 'Q' || choice == 'q')
		{
			isDone = true;
		}
	}

	cout << endl << "The sum is " << sum << endl;

	while (true){}

	return 0;

}