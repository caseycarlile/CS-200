#include <iostream>
#include <string>
#include <fstream>
using namespace std;


struct Option
{
	string title;
	int count;
};

struct Poll
{
	string question;
	Option options[4];
};

void DisplayMenu(Poll poll);

int Selection(Poll poll);

int main()
{
	Poll myPoll;

	myPoll.question = "What is the best food?";

	myPoll.options[0].title = "Pizza";
	myPoll.options[0].count = 0;

	myPoll.options[1].title = "Veggie Taco";
	myPoll.options[1].count = 0;

	myPoll.options[2].title = "Samosas";
	myPoll.options[2].count = 0;

	myPoll.options[3].title = "Sushi";
	myPoll.options[3].count = 0;

	bool done = false;

	ofstream output;

	while (!done)
	{

		DisplayMenu(myPoll);

		int choice;

		choice = Selection(myPoll);

		if (choice == 0)
		{
			myPoll.options[0].count++;
		}
		else if (choice == 1)
		{
			myPoll.options[1].count++;
		}
		else if (choice == 2)
		{
			myPoll.options[2].count++;
		}
		else if (choice == 3)
		{
			myPoll.options[3].count++;
		}
		else if (choice == 4)
		{
			done = true;
		}
		
	}

	output.open("results.txt");

	output << "QUESTION" << endl;
	output << "What is the best food?" << endl << endl;
	output << "RESULTS" << endl;

	for (int i = 0; i < 4; i++)
	{
		output << myPoll.options[i].title << ":\t" << myPoll.options[i].count << endl;
	}

	output.close();

	return 0;
}

void DisplayMenu(Poll poll)
{
	cout << "What is the best food?" << endl;
	cout << "0. " << poll.options[0].title << endl;
	cout << "1. " << poll.options[1].title << endl;
	cout << "2. " << poll.options[2].title << endl;
	cout << "3. " << poll.options[3].title << endl;
}

int Selection(Poll poll)
{
	int choice;
	cout << endl << "What is your selection?" << endl;
	cin >> choice;
	cout << endl;
	return choice;
}





