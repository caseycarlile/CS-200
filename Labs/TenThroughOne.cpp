#include <iostream>

using namespace std;

int main()
{
	int countDown = 10;

	while (countDown > 0)
	{
		cout << countDown << " ";
		countDown--;
	}

	cout << endl << endl;
	cout << "Done!";

	while (true){}

	return 0;
}