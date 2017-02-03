#include <iostream>
#include <string>
using namespace std;

int main()
{
	float startingWage;
	float percentRaisePerYear;
	float adjustedWage;
	int yearsWorked;

	cout << "What is your starting wage? ";
	cin >> startingWage;

	cout << "What % of a raise do you get per year? ";
	cin >> percentRaisePerYear;

	percentRaisePerYear /= 100;

	cout << "How many years have you worked? ";
	cin >> yearsWorked;

	adjustedWage = startingWage;

	for(int i = 0; i < yearsWorked; i++)
	{
		adjustedWage += adjustedWage * percentRaisePerYear;
	}

	cout << "Your new wage is $" << adjustedWage << endl;

	while (true) {}

	return 0;
}