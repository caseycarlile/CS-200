//For displaying text with cin and cout
#include <iostream>
using namespace std;

//Questions and Answers
//What is the scope of your age variable?
//
//What is the scope of your ticket price variable?
//

int main()
{
	int age;
	float price;

	cout << "What is your age? ";
	cin >> age;

	if (age < 13){
		price = 5.00;
	}
	else {
		price = 7.00;
	}

	cout << "Ticket price is $" << price << endl;

	while (true) {}

	return 0;
}