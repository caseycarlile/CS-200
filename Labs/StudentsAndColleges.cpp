#include <iostream>
#include <string>

using namespace std;

struct College
{
	string name;
	string state;
};

struct Student
{
	string name;
	College* ptrSchool;
};


int main()
{
	College colleges[3];
	colleges[0].name = "JCCC";
	colleges[0].state = "KS";
	colleges[1].name = "MCCKC";
	colleges[1].state = "MO";
	colleges[2].name = "KCKCC";
	colleges[2].state = "KS";

	Student stu[5];


	for (int i = 0; i < 5; i++)
	{
		cout << endl << "Enter name for student " << i + 1 << ": ";
		cin >> stu[i].name;

		int collegeChoice;

		cout << endl << "Which college for " << stu[i].name << "?" << endl;
		cout << "1. JCCC" << endl << "2. MCCKC" << endl << "3. KCKCC" << endl << endl;
		cin >> collegeChoice;

		stu[i].ptrSchool = &colleges[collegeChoice-1];
	}

	cout << endl << "All students:" << endl << endl;

	cout << "1. " << stu[0].name << "\t" << stu[0].ptrSchool->name << "\t" << stu[0].ptrSchool->state << endl;
	cout << "2. " << stu[1].name << "\t" << stu[1].ptrSchool->name << "\t" << stu[1].ptrSchool->state << endl;
	cout << "3. " << stu[2].name << "\t" << stu[2].ptrSchool->name << "\t" << stu[2].ptrSchool->state << endl;
	cout << "4. " << stu[3].name << "\t" << stu[3].ptrSchool->name << "\t" << stu[3].ptrSchool->state << endl;
	cout << "5. " << stu[4].name << "\t" << stu[4].ptrSchool->name << "\t" << stu[4].ptrSchool->state << endl;

	while (true){}

	return 0;
}