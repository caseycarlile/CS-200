#include <iostream>
#include <string>

using namespace std;

int main()
{
	float priceHamburger = 3.99;
	float priceFries = 1.49;
	float priceSalad = 4.99;

	float taxAmt = 0;

	float* ptrPrice;

	char choice;

	cout << "[h]amburger, [f]ries, or [s]alad? ";
	cin >> choice;

	if (choice == 'h')
	{
		ptrPrice = &priceHamburger;

		cout << "Original price: $" << priceHamburger << endl;

		taxAmt = *ptrPrice * 0.065;
		*ptrPrice = *ptrPrice + taxAmt;

		cout << "With tax price: $" << *ptrPrice << endl;
	}
	else if (choice == 'f')
	{
		ptrPrice = &priceFries;

		cout << "Original price: $" << priceFries << endl;

		taxAmt = *ptrPrice * 0.065;
		*ptrPrice = *ptrPrice + taxAmt;

		cout << "With tax price: $" << *ptrPrice << endl;
	}
	else if (choice == 's')
	{
		ptrPrice = &priceSalad;

		cout << "Original price: $" << priceSalad << endl;

		taxAmt = *ptrPrice * 0.065;
		*ptrPrice = *ptrPrice + taxAmt;

		cout << "With tax price: $" << *ptrPrice << endl;
	}


	while (true) {}

	return 0;
}