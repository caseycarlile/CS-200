#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a = 5;
	float b = 3.456;
	string c = "tacos";

	int* ptrInteger = &a;
	float* ptrFloat = &b;
	string* ptrString = &c;

	cout << ptrInteger << " = " << a << endl;
	cout << ptrFloat << " = " << b << endl;
	cout << ptrString << " = " << c << endl;

	while (true){}

	return 0;
}