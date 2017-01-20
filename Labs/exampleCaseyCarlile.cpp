#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Variable declarations
    string firstName, color, adjective;

    // Output and input
    cout << "HELLO, WHAT IS YOUR NAME? ";
    cin >> firstName;

    cout << "WHAT IS YOUR FAVORITE COLOR? ";
    cin >> color;

	cout << "ENTER AN ADJECTIVE:";
	cin >> adjective;

    cout << endl;
    cout << "SO CAN I CALL YOU " << adjective << color << " " << firstName << "?" << endl;

    return 0;
}
