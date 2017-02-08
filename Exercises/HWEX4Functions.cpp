#include <iostream>
#include <string>
using namespace std;

//Input/Output Functions


string GetHindi(string english)
{
	if (english == "cat")
	{
		return "billee";
	}
	else if (english == "dog")
	{
		return "kutta";
	}
	else if (english == "frog")
	{
		return "medhak";
	}
	else if (english == "rabbit")
	{
		return "khargosh";
	}
	else
	{
		return "Word not found.";
	}
}

string GetEnglish(string hindi)
{
	if (hindi == "billee")
	{
		return "cat";
	}
	else if (hindi == "kutta")
	{
		return "dog";
	}
	else if (hindi == "medhak")
	{
		return "frog";
	}
	else if (hindi == "khargosh")
	{
		return "rabbit";
	}
	else
	{
		return "Word not found.";
	}
}


//Menu Functions

void DisplayMenu()
{
	cout << endl << "1. English to Hindi" << endl;
	cout << "2. Hindi to English" << endl;
	cout << "3. Quit" << endl;
}

void EnglishToHindi()
{
	string englishWord;

	cout << "English: ";
	cin >> englishWord;
	cout << GetHindi(englishWord) << endl;

}

void HindiToEnglish()
{
	string hindiWord;

	cout << "Hindi: ";
	cin >> hindiWord;
	cout << GetEnglish(hindiWord) << endl;
}

int main()
{
	bool isDone = false;
	char choice;

	/*
	I decided to use char as the choice variable because with int, if a letter was picked instead of 
	a number, the program would continuously display the menu over and over again which was annoying.
	*/

	while (isDone == false)
	{
		DisplayMenu();

		cin >> choice;

		if (choice == '1')
		{
			EnglishToHindi();
		}
		else if (choice == '2')
		{
			HindiToEnglish();
		}
		else if (choice == '3')
		{
			isDone = true;
		}
		else
		{
			cout << "Not a valid choice." << endl;
		}
	}

	return 0;
}