#include <iostream>
#include <string>

using namespace std;

int main()
{
	int* myInt;
	string* myString;
	float* myFloat;

	myInt = new int(20);
	myString = new string("Casey");
	myFloat = new float(199.99);

	cout << *myInt << "\t" << *myString << "\t" << *myFloat << endl;

	delete myInt;
	delete myString;
	delete myFloat;

	while (true){}

	return 0;
}