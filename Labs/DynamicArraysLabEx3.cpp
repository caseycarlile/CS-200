#include <iostream>
#include <string>
#include <cstdlib>      // to use rand()
#include <ctime>        // to use time()

using namespace std;

int main()
{
	srand(time(NULL));

	int size;

	cout << "Lotto number count: ";
	cin >> size;

	int* lottoNumbers;
	lottoNumbers = new int[size];

	for (int i = 0; i < size; i++)
	{
		lottoNumbers[i] = rand() % 100;
		cout << lottoNumbers[i] << "\t";
	}

	delete [] lottoNumbers;

	while (true){}

	return 0;
}