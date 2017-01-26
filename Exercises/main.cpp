#include <iostream>
using namespace std;

//Questions and Answers
// You can't write if (isTallEnoughForRide > 3) because that wouldn't make sense. It would be true/false > 3.
//You could write if (feet > 3) but then you wouldn't need the boolean isTallEnoughForRide. So yes you can write it
//but with our current set up it is not needed.

int main()
{
	bool isTallEnoughForRide;
	int feet;

	cout << "What is your height in feet? ";
	cin >> feet;

	isTallEnoughForRide = feet > 3;

	if (isTallEnoughForRide) 
	{
		cout << "Permitted to ride the roller coaster." << endl;
	}
	else
	{
		cout << "Too short to ride the roller coaster." << endl;
	}

	while (true) {}

	return 0;

}