#include <iostream>
#include <string>
using namespace std;

int main()
{
	float studentPoints;
	float totalPoints;
	float percent;

	cout << "What was your score? ";
	cin >> studentPoints;

	cout << "What was the total points? ";
	cin >> totalPoints;

	percent = (studentPoints / totalPoints) * 100;

	cout << "Score: " << percent << "% ";

	if (percent >= 70)
	{
		cout << "     Pass";
	}
	else 
	{
		cout << "     Fail";
	}

	while (true){}

	return 0;
}