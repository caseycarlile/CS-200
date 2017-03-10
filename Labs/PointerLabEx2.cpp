#include <iostream>
#include <string>

using namespace std;

int main()
{
	string college[4];

	college[0] = "JCCC";
	college[1] = "UMKC";
	college[2] = "KU";
	college[3] = "MS&T";

	cout << "Array address: " << college << endl;
	cout << "Item 0 address: " << &college[0] << "\tvalue: " << college[0] << endl;
	cout << "Item 1 address: " << &college[1] << "\tvalue: " << college[1] << endl;
	cout << "Item 2 address: " << &college[2] << "\tvalue: " << college[2] << endl;
	cout << "Item 3 address: " << &college[3] << "\tvalue: " << college[3] << endl;

	while (true){}

	return 0;
}