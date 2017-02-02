#include <iostream>
#include <string>
using namespace std;

int main()
{
	float itemPrice;
	string city;
	float totalPrice;

	cout << "What is the item price? ";
	cin >> itemPrice;

	cout << "What city? ";
	cin >> city;

	if (city == "Olathe")
	{
		totalPrice = itemPrice * 1.065;
	}
	else if (city == "OverlandPark")
	{
		totalPrice = itemPrice * 1.0935;
	}
	else if (city == "Raytown")
	{
		totalPrice = itemPrice * 1.08225;
	}
	else if (city == "Independence")
	{
		totalPrice = itemPrice * 1.07725;
	}
	else
	{
		totalPrice = itemPrice * 1.08;
	}

	cout << "Total price is: " << totalPrice << endl;

	while (true){}

	return 0;
}