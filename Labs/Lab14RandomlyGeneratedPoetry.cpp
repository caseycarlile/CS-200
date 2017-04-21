#include <iostream>
#include <fstream>      // file input/output
#include <string>
#include <cstdlib>      // has functions for random #s
#include <ctime>        // for seeding the random # generator
using namespace std;

struct PoemMaker
{
	string nouns[24];
	string adjectives[24];

	void LoadNouns(string filename)
	{
		ifstream input(filename);
			
		for (int i = 0; i < 24; i++)
		{
			input >> nouns[i];
		}

		input.close();
	}

	void LoadAdjectives(string filename)
	{
		ifstream input(filename);

		for (int i = 0; i < 24; i++)
		{
			input >> adjectives[i];
		}

		input.close();
	}

	string GetRandomNoun()
	{
		int randomNumber = rand() % 24;

		return nouns[randomNumber];
	}

	string GetRandomAdjective()
	{
		int randomNumber = rand() % 24;

		return adjectives[randomNumber];
	}

	string GeneratePoem(int lines)
	{
		string poem;
		for (int i = 0; i < lines; i++)
		{
			poem = poem + GetRandomNoun() + "\t are \t" + GetRandomAdjective() + "\n";
		}

		return poem;
	}
};

int main()
{
	srand(time(NULL));

	PoemMaker poemMaker;

	poemMaker.LoadNouns("nouns.txt");

	poemMaker.LoadAdjectives("adjectives.txt");

	string poem = poemMaker.GeneratePoem(5);

	cout << poem << endl;

	while(true){}

	return 0;
}