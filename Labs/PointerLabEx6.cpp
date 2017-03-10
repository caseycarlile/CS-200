#include <iostream>
#include <string>

using namespace std;

int main()
{
	string students[3];

	students[0] = "Casey";
	students[1] = "Allison";
	students[2] = "Katlin";

	string* ptrStudents;

	int choice;
	string name;

	cout << "Enter 0, 1, or 2: ";
	cin >> choice;

	ptrStudents = &students[choice];

	cout << "New Name: ";
	cin >> name;

	*ptrStudents = name;

	for (int i = 0; i < 3; i++)
	{
		cout << "student " << i << " = " << students[i] << endl;
	}
	
	while (true) {}

	return 0;
}