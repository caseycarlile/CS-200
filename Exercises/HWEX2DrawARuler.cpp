#include <iostream>
using namespace std;

int main()
{
	int feet;

	cout << "Enter the amount of feet: ";
	cin >> feet;

	for (int i = 0; i <= feet * 12; i++) //use i <= feet so that the final | will be included on the ruller
	{
		if (i % 12 == 0)
		{
			cout << "|";	
		}
		else
		{
			cout << "-";
		}
	}

	while (true){}

	return 0;
}