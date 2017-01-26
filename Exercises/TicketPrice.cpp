//For displaying text with cin and cout
#include <iostream>
using namespace std;

//Questions and Answers
//What is the scope of your age variable?
//The scope of the age variable is the entire section of code.
//What is the scope of your ticket price variable?
//The scope of the float variable is the entire section of code.
//If a variable had been declared inside the if statement, then that would be a local variable and would end after
//the if statement is done executing.

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