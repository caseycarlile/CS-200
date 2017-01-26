#include <iostream>
#include <string>

using namespace std;

//Questions and Answers
//When the user enters a and A the program says the second letter comes first. 
//This shouldn't be correct since both are the letter A.
//I couldn't find an answer online, but I'm guessing that in the list capitals are listed before lowercase letters.
//For example A B C D E .... X Y Z a b c d e ... x y z.
//This can be confirmed by entering B and a where it outputs that the first letter comes first which would be B.


int main()
{

	char letter1;
	char letter2;

	cout << "Please enter two letters ";
	cin >> letter1;
	cin >> letter2;

	if (letter1 < letter2)
	{
		cout << "first letter comes first" << endl;
	}
	else
	{
		cout << "second letter comes first" << endl;
	}

	while (true) {}

	return 0;
}