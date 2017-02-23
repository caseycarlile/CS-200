#include "hp1_program.hpp"

/*
MODIFY THIS FILE
*/

#include <iostream>
using namespace std; 

/* Menu Functions **********************************************/

/*
DisplayMenu()
Inputs: None
Outputs: None
This function should just display a simple # list and header, such as:
1. Set mission parameters, 2. View parameters, 3. Run simulation, 4. Quit
*/
void Program::DisplayMenu()
{
	cout << endl << "1. Set mission parameters" << endl;
	cout << "2. View parameters" << endl;
	cout << "3. Run simulation" << endl;
	cout << "4. Quit" << endl;
}

/*
SetParameters()
Inputs: None
Outputs: None
In this function, we will get the user's input for the following fields:
- food grown per day (int)		- cleanup per person per day (int)
- team name	(string)			- team size (int)
- mission length in days (int)	- starting units of food (int)

Create variables for each of these. Prompt the user for each
of these items with a cout command ("please enter ___:"),
and get their input through cin.

Finally, once those are all entered, you will use the following functions
to set these variables in the simulator:
- SetFoodGrown_PerDay(int)		- SetCleanup_PerPersonPerDay(int)
- SetTeamName(string)			- SetTeamSize(int)
- SetMissionLength(int)			- SetFoodCount(int)
*/
void Program::SetParameters()
{
	string teamName;
	int teamSize = 0;
	int missionLength = 0;
	int foodGrownPerDay = 0;
	int cleanUpPerPersonPerDay = 0;
	int startingFoodUnits = 0;
	
	cout << endl << "Please enter the team name: ";
	cin >> teamName;

	cout << endl << "Please enter the team size: ";
	cin >> teamSize;

	cout << endl << "Please enter the mission length: ";
	cin >> missionLength;

	cout << endl << "Please enter the amount of food grown per day: ";
	cin >> foodGrownPerDay;

	cout << endl << "Please enter the amount of clean up per person per day: ";
	cin >> cleanUpPerPersonPerDay; 

	cout << endl << "Please enter the amount of starting food units: ";
	cin >> startingFoodUnits;

	SetTeamName(teamName);
	SetTeamSize(teamSize);
	SetMissionLength(missionLength);
	SetFoodGrown_PerDay(foodGrownPerDay);
	SetCleanup_PerPersonPerDay(cleanUpPerPersonPerDay);
	SetFoodCount(startingFoodUnits);
}

/*
ViewParameters()
Inputs: None
Outputs: None
In this function, you will just display the parameters that were entered
in the SetParameters() function. You can do this by utilizing the "getter"
functions available to the simulation...:
- GetFoodConsumed_PerPersonPerDay()			- GetWasteCreated_PerPersonPerDay()
- GetOxygenCreated_PerDay()					- GetOxygenUsed_PerPersonPerDay()
- GetFoodGrown_PerDay()						- GetCleanup_PerPersonPerDay()
- GetTeamName()								- GetTeamSize()
- GetMissionLength()

All of these functions *return* a value - either ints or strings.
You can cout each of these, like:
cout << GetOxygenUsed_PerPersonPerDay() << endl;

Just display each value, but also make sure to display a label for each.
*/
void Program::ViewParameters()
{
	cout << endl;
	cout << "Team Name: " << GetTeamName() << endl;
	cout << "Team Size: " << GetTeamSize() << endl;
	cout << "Mission Length: " << GetMissionLength() << endl;
	cout << "Food Consumed Per Person Per Day: " << GetFoodConsumed_PerPersonPerDay() << endl;
	cout << "Food Grown Per Day: " << GetFoodGrown_PerDay() << endl;
	cout << "Waste Created Per Person Per Day: " << GetWasteCreated_PerPersonPerDay() << endl;
	cout << "Cleanup Per Person Per Day: " << GetCleanup_PerPersonPerDay() << endl;
	cout << "Oxygen Created Per Day: " << GetOxygenCreated_PerDay() << endl;
	cout << "Oxygen Used Per Person Per Day: " << GetOxygenUsed_PerPersonPerDay() << endl;
}

/*
AdjustFood()
Inputs: None
Outputs: None
This function deals with the following functions:
- GetFoodGrown_PerDay()		- GetFoodConsumed_PerPersonPerDay()		
- GetFoodCount()			- GetTeamSize()

It will calculate the amount of food produced and consumed,
and update the food count.

First, create a temporary local int variable, named something like "foodCount".
Assign it the return value of the GetFoodCount() function.

Then, adjust the food count with the formula:
	new food count = old food count + food grown per day - ( food consumed per person per day * team size )

After the calculation, update the food count using SetFoodCount(int).
*/
void Program::AdjustFood()
{
	int foodCount = GetFoodCount();

	foodCount = foodCount + GetFoodGrown_PerDay() - (GetFoodConsumed_PerPersonPerDay() * GetTeamSize());

	SetFoodCount(foodCount);
}

/*
AdjustWaste()
Inputs: None
Outputs: None
This function deals with the following functions:
- GetWasteCount()		- GetWasteCreated_PerPersonPerDay()
- GetTeamSize()			- GetCleanup_PerPersonPerDay()

Create a temporary variable and assign it the value of GetWasteCount().

Calculate the new waste count with the formula:
	new waste count = old waste count + (waste created per person per day * team size) - (cleanup per person per day * team size)

After the calculation, update the waste count using SetWasteCount(int).
*/
void Program::AdjustWaste()
{
	int wasteCount = GetWasteCount();

	wasteCount = wasteCount + (GetWasteCreated_PerPersonPerDay() * GetTeamSize()) - (GetCleanup_PerPersonPerDay() * GetTeamSize());

	SetWasteCount(wasteCount);
}

/*
AdjustOxygen()
Inputs: None
Outputs: None
This function deals with the following functions:
- GetOxygenCount()		- GetOxygenCreated_PerDay()
- GetTeamSize()			- GetOxygenUsed_PerPersonPerDay()

Create a temporary variable and assign it the value of GetOxygenCount().

Calculate the new oxygen count with the formula:
	new oxygen count = old oxygen count + oxygen created per day - (oxygen used per person per day * team size)

After the calculation, update the oxygen count using SetOxygenCount(int).
*/
void Program::AdjustOxygen()
{
	int oxygenCount = GetOxygenCount();

	oxygenCount = oxygenCount + GetOxygenCreated_PerDay() - (GetOxygenUsed_PerPersonPerDay() * GetTeamSize());

	SetOxygenCount(oxygenCount);
}

/*
RunSimulation()
Inputs: None
Outputs: None
The simulation runs through each day, adjusting values to see if
the astronauts can survive for the set amount of days.
Follow the comments below for the steps.
*/
void Program::RunSimulation()
{
	cout << endl << "RUN SIMULATION" << endl;

	// Set up the simulation:
	// * Create an integer variable called day, and initialize it to 1.
	int day = 1;

	// * Use SetOxygenCount(int) to initialize the oxygen count to 100.
	SetOxygenCount(100);

	// * Use SetWasteCount(int) to initialize the waste count to 0.
	SetWasteCount(0);

	// * Create a boolean variable called missionSuccess, and set it to true.
	bool missionSuccess = true;

		// Create a while loop. This will continue looping while
	// the day is less than the mission length (GetMissionLength()),
	// and while missionSuccess is true.
	while ( day < GetMissionLength() && missionSuccess == true)
	{
		// Adjust current supplies via the AdjustFood(), AdjustWaste(), and AdjustOxygen() functions.
		AdjustFood();
		AdjustWaste();
		AdjustOxygen();

		// Display the following values, and make sure to label them as well.
		// e.g., cout << "LABEL: " << values << endl;

		// * The current day
		// * Food grown				GetFoodGrown_PerDay()
		// * Waste cleaned			GetCleanup_PerPersonPerDay()
		// * Oxygen created			GetOxygenCreated_PerDay()
		// * Food consumed			GetFoodConsumed_PerPersonPerDay()
		// * Waste created			GetWasteCreated_PerPersonPerDay
		// * Oxygen consumed		GetOxygenUsed_PerPersonPerDay
		// * Current food count		GetFoodCount()
		// * Current waste count	GetWasteCount()
		// * Current oxygen count	GetOxygenCount()

		cout << endl;
		cout << "Current Day: " << day << endl;
		cout << "Food Grown: " << GetFoodGrown_PerDay() << endl;
		cout << "Waste Cleaned: " << GetCleanup_PerPersonPerDay() * GetTeamSize() << endl;
		cout << "Oxygen Created: " << GetOxygenCreated_PerDay() << endl;
		cout << "Food Consumed: " << GetFoodConsumed_PerPersonPerDay() * GetTeamSize() << endl;
		cout << "Waste Created: " << GetWasteCreated_PerPersonPerDay() * GetTeamSize() << endl;
		cout << "Oxygen Consumed: " << GetOxygenUsed_PerPersonPerDay() * GetTeamSize() << endl;
		cout << "Current Food Count: " << GetFoodCount() << endl;
		cout << "Current Waste Count: " << GetWasteCount() << endl;
		cout << "Current Oxygen Count: " << GetOxygenCount() << endl;


		// Check to see if resources have been depleted.
		// If so, then the mission is a failure.

		// If food count is less than 0, display a message that they ran out of food and set missionSuccess to false.
		if (GetFoodCount() < 0)
		{
			missionSuccess = false;
			cout << "Ran out of food!" << endl;
		}

		// If waste count is greater than 20, display a message that they drowned in trash and set missionSuccess to false.
		if (GetWasteCount() > 20)
		{
			missionSuccess = false;
			cout << "Drowned in sewage!" << endl;
		}

		// If oxygen count is less than 0, display a message that they ran out of air and set missionSuccess to false.
		if (GetOxygenCount() < 0)
		{
			missionSuccess = false;
			cout << "Ran our of oxygen!" << endl;
		}

		// Increment the day variable by 1.
		day++;
	}

	// After the while loop: Display the results.
	cout << endl << "RESULTS:" << endl;

	// If missionSuccess is true, display "MISSION SUCCESS!"
	// Otherwise, display "MISSION FAILURE!"

	if (missionSuccess == true)
	{
		cout << "MISSION SUCCESS!" << endl;
	}
	else
	{
		cout << "MISSION FAILURE!" << endl;
	}

}



/* Utility Functions **********************************************/

/*
GetValidInput(int, int)
Inputs: min (int), max (int)
Outputs: int
This function takes in a minimum and maximum value that
can be entered by the user.

First, prompt the user for input with a cout statement.
Create a variable (int) to store their decision,
and get the user's input with cin.

Then, create a while loop that will keep asking the user
to re-enter their selection, WHILE the input is invalid.

Invalid input is if it is < min or > max.

After the while loop (once the input is valid), return
the variable that is storing the user's choice.
*/
int Program::GetValidInput(int min, int max)
{
	int choice = 0;

	cout << endl << "Please enter your choice: ";
	cin >> choice;

	bool invalid = true;

	while (invalid)
	{
		if (choice <= max && choice >= min)
		{
			invalid = false;
		}
		else
		{
			cout << "Invalid input, please enter another choice." << endl;
			cin >> choice;
		}
	}

	return choice;
}


/*
DO NOT MODIFY BELOW
*/

/* Setter Functions **********************************************/

void Program::SetFoodGrown_PerDay(int value)
{
	foodGrown_PerDay = value;
}

void Program::SetCleanup_PerPersonPerDay(int value)
{
	cleanup_PerPersonPerDay = value;
}

void Program::SetTeamSize(int value)
{
	teamSize = value;
}

void Program::SetMissionLength(int value)
{
	missionLengthInDays = value;
}

void Program::SetTeamName(string value)
{
	teamName = value;
}

void Program::SetFoodCount(int value)
{
	countFood = value;
}

void Program::SetWasteCount(int value)
{
	countWaste = value;
}

void Program::SetOxygenCount(int value)
{
	countOxygen = value;
}


/* Getter Functions **********************************************/

int Program::GetFoodGrown_PerDay()
{
	return foodGrown_PerDay;
}

int Program::GetCleanup_PerPersonPerDay()
{
	return cleanup_PerPersonPerDay;
}

int Program::GetTeamSize()
{
	return teamSize;
}

int Program::GetMissionLength()
{
	return missionLengthInDays;
}

string Program::GetTeamName()
{
	return teamName;
}

int Program::GetFoodConsumed_PerPersonPerDay()
{
	return foodConsumed_PerPersonPerDay;
}

int Program::GetWasteCreated_PerPersonPerDay()
{
	return wasteCreated_PerPersonPerDay;
}

int Program::GetOxygenUsed_PerPersonPerDay()
{
	return oxygenUsed_PerPersonPerDay;
}

int Program::GetOxygenCreated_PerDay()
{
	return oxygenCreated_PerDay;
}

int Program::GetFoodCount()
{
	return countFood;
}

int Program::GetWasteCount()
{
	return countWaste;
}

int Program::GetOxygenCount()
{
	return countOxygen;
}




