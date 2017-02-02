#include <iostream>
#include <string>
using namespace std;

int main()
{
	while (true)
	{
		int number;
		string romanNumeral;

		cout << "Enter a number between 1 and 5: ";
		cin >> number;

		switch (number)
		{
			case 1:
				romanNumeral = "I";
				break;

			case 2:
				romanNumeral = "II";
				break;

			case 3:
				romanNumeral = "III";
				break;

			case 4:
				romanNumeral = "IV";
				break;

			case 5:
				romanNumeral = "V";
				break;

			default:
				romanNumeral = "Not a valid number";
		}

		cout << "Roman numeral is: " << romanNumeral << endl;

	}
	
	return 0;
}