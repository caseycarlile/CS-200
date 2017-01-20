#include <iostream>
#include <string>
using namespace std;

int main()
{

	float ratio;
	cout << "How many batches? ";
	cin >> ratio;
	
	float tspBakingSoda = 1 * ratio;
	float tspBakingPowder = 0.5 * ratio;
	float cButter = 1 * ratio;
	float cWhiteSugar = 1.5 * ratio;
	float eggs = 1 * ratio;

	cout << tspBakingSoda << " tsp baking soda" << endl;
	cout << tspBakingPowder << " tsp baking powder" << endl;
	cout << cButter << " c butter" << endl;
	cout << cWhiteSugar << " c white sugar" << endl;
	cout << eggs << " egg" << endl;
	
	while (true); //kludgey fix
	return 0;
}