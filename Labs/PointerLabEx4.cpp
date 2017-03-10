#include <iostream>
#include <string>

using namespace std;



int main()
{
	char choice;

	cout << "[i]nt, [f]loat, [b]oolean, [d]ouble? ";
	cin >> choice;

	if (choice == 'i')
	{
		int i = 3;
		int* ptrInteger = &i;
		cout << "Integer size: " << sizeof(i) << ",\taddress: " << ptrInteger << endl;
	}
	else if (choice == 'f')
	{
		float f = 3.33;
		float* ptrFloat = &f;
		cout << "Float size: " << sizeof(f) << ",\taddress: " << ptrFloat << endl;
	}
	else if (choice == 'b')
	{
		bool b = false;
		bool* ptrBoolean = &b;
		cout << "Boolean size: " << sizeof(b) << ",\taddress: " << ptrBoolean << endl;
	}
	else if (choice == 'd')
	{
		double d = 3.3;
		double* ptrDouble = &d;
		cout << "Double size: " << sizeof(d) << ",\taddress: " << ptrDouble << endl;
	}

	while (true) {}

	return 0;
}