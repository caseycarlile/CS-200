#include <iostream>
#include <string>

using namespace std;

int main()
{
	string homeTown;

	cout << "What is your home town? ";
	cin >> homeTown;
	
	cout << endl;

	if (homeTown.size() > 6)
	{
		cout << "That's a long name!" << endl;
		cout << endl;
	}

	string name;

	cout << "What is your name? ";
	cin >> name;

	cout << endl;

	cout << "Hello, " << name << " from " << homeTown << endl;

	while (true){}

	return 0;
}