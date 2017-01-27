#include <iostream>

using namespace std;

int main()
{
	int secretNumber = 9;
	int playerGuess;

	do
	{
		cout << "Enter your guess: ";
		cin >> playerGuess;

		if (playerGuess < secretNumber)
		{
			cout << "Too Low!" << endl;
		}
		else if (playerGuess > secretNumber)
		{
			cout << "Too High!" << endl;
		}

	} while (playerGuess != secretNumber);

	cout << "You win!" << endl;

	while (true){}

	return 0;
}