#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string searchWord;
	string replaceWord;
	string buffer;

	cout << "What word do you want to search for?" << endl;
	cin >> searchWord;

	cout << "What word do you want to replace it with?" << endl;
	cin >> replaceWord;

	ifstream input("story_original.txt");
	ofstream output("story_modified.txt");

	while (input >> buffer)
	{
		if (buffer == searchWord)
		{
			output << replaceWord << " ";
		}
		else
		{
			output << buffer << " ";
		}
	}

	input.close();
	output.close();

	return 0;
}