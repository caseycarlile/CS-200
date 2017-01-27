#include <iostream>

using namespace std;

int main() 
{
	float x1 = 5.00;
	float x2;

	cout << "x1 = " << x1 << endl << endl;
	cout << "Where is x2? ";
	cin >> x2;

	
	if (((x1 - 5) <= x2) && ((x1 + 5) >= x2))
	{
		cout << "Within 5 units of x1!" << endl;
	}
	else
	{
		cout << "Too far away..." << endl;
	}


	while (true) {}

	return 0;
}