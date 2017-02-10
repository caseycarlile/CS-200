#include <iostream>
#include <string>

using namespace std;

float Average(float a, float b, float c)
{
	return (a + b + c) / 3;
}

void Test_Average()
{
	float input1 = 2, input2 = 2, input3 = 2;
	float expectedOutput = 2;
	float actualOutput = Average(input1, input2, input3);

	if (expectedOutput != actualOutput)
	{
		cout << "Fail for " << input1 << ", " << input2 << ", " << input3 << endl;
	}
	else
	{
		cout << "Pass for " << input1 << ", " << input2 << ", " << input3 << endl;
	}

	input1 = 1.5, input2 = 2.5, input3 = 3.5;
	expectedOutput = 2.5;
	actualOutput = Average(input1, input2, input3);

	if (expectedOutput != actualOutput)
	{
		cout << "Fail for " << input1 << ", " << input2 << ", " << input3 << endl;
	}
	else
	{
		cout << "Pass for " << input1 << ", " << input2 << ", " << input3 << endl;
	}

	input1 = -1, input2 = -2, input3 = -3;
	expectedOutput = -2;
	actualOutput = Average(input1, input2, input3);

	if (expectedOutput != actualOutput)
	{
		cout << "Fail for " << input1 << ", " << input2 << ", " << input3 << endl;
	}
	else
	{
		cout << "Pass for " << input1 << ", " << input2 << ", " << input3 << endl;
	}

}

int Max(int a, int b, int c)
{
	if (a < b && c < b)
	{
		return b;
	}
	else if (a < c && b < c)
	{
		return c;
	}
	return a;
}

void Test_Max()
{
	int input1 = 2, input2 = 5, input3 = 9; 
	int expectedOutput = 9;
	int actualOutput = Max(input1, input2, input3);

	if (expectedOutput != actualOutput)
	{
		cout << "Fail for " << input1 << ", " << input2 << ", " << input3 << endl;
	}
	else
	{
		cout << "Pass for " << input1 << ", " << input2 << ", " << input3 << endl;
	}

	input1 = 7;
	input2 = 3;
	input3 = 1;
	expectedOutput = 7;
	actualOutput = Max(input1, input2, input3);

	if (expectedOutput != actualOutput)
	{
		cout << "Fail for " << input1 << ", " << input2 << ", " << input3 << endl;
	}
	else
	{
		cout << "Pass for " << input1 << ", " << input2 << ", " << input3 << endl;
	}

	input1 = -9;
	input2 = -3;
	input3 = -5;
	expectedOutput = -3;
	actualOutput = Max(input1, input2, input3);

	if (expectedOutput != actualOutput)
	{
		cout << "Fail for " << input1 << ", " << input2 << ", " << input3 << endl;
	}
	else
	{
		cout << "Pass for " << input1 << ", " << input2 << ", " << input3 << endl;
	}

}

int Factorial(int n)
{
	int fac = 1;
	for (int i = n; i > 0; i--)
	{
		fac = fac * i;
	}
	return fac;
}

void Test_Factorial()
{
	int input1 = 3;
	int expectedOutput = 6;
	int actualOutput = Factorial(input1);

	if(expectedOutput != actualOutput)
	{
		cout << "Fail for " << input1 << endl;
	}
	else
	{
		cout << "Pass for " << input1 << endl;
	}

	input1 = 9;
	expectedOutput = 362880;
	actualOutput = Factorial(input1);

	if (expectedOutput != actualOutput)
	{
		cout << "Fail for " << input1 << endl;
	}
	else
	{
		cout << "Pass for " << input1 << endl;
	}
}

string FormatName(string first, string last)
{
	return last + ", " + first;
}

void Test_FormatName()
{
	string firstName = "First", lastName = "Last";
	string expectedOutput = "Last, First";
	string actualOutput = FormatName(firstName, lastName);

	if (expectedOutput != actualOutput)
	{
		cout << "Fail for " << firstName << " " << lastName << endl;
	}
	else
	{
		cout << "Pass for " << firstName << " " << lastName << endl;
	}
}

int main()
{
	Test_Average();
	Test_Max();
	Test_Factorial();
	Test_FormatName();

	while(true){}

	return 0;
}