/*
MODIFY THIS FILE
*/

#include "hp3_program.hpp"

#include <iostream>
using namespace std;


/* Setup() - 	Create the list of locations
 *              Allocate needed memory
 * */
void Program::Setup()
{
    // This is called automatically when the program begins

	
	Location* locationList = new Location[6];

	locationList[0].name = "Library";
	locationList[0].description = "You open two heavy doors to find the library. Row after row of bookshelves line the horizon. Peanut shells and banana peels litter the floor. A large shape in the shadow makes a surprised \"Oook.\"";
	
	locationList[1].name = "Admissions Building";
	locationList[1].description = "You arrive at the admissions building. As you open the door, the wind causes a crumpled brocure to tumble across the floor.";
	locationList[1].ptrToEast = &locationList[2];

	locationList[2].name = "Student Union";
	locationList[2].description = "You find the student union. You walk through the deserted halls looking for food, but all the stores have closed.";
	locationList[2].ptrToSouth = &locationList[4];
	locationList[2].ptrToWest = &locationList[1];

	locationList[3].name = "Science Building";
	locationList[3].description = "Past science projects are piled up in the corner. Ghosts of dissected frogs hop around your feet.";
	locationList[3].ptrToNorth = &locationList[0];
	locationList[3].ptrToSouth = &locationList[5];
	locationList[3].ptrToWest = &locationList[2];

	locationList[4].name = "Computer Lab";
	locationList[4].description = "No wonder this computer lab is deserted. The technology in here is ancient.";
	locationList[4].ptrToNorth = &locationList[2];
	locationList[4].ptrToEast = &locationList[5];

	locationList[5].name = "Observatory";
	locationList[5].description = "Spiders dangle from the dust covered telescope. The door on the old dome creaks in the wind.";
	locationList[5].ptrToNorth = &locationList[3];
	locationList[5].ptrToWest = &locationList[4];

	ptrCurrentLocation = &locationList[1];
	ptrEndLocation = &locationList[0];
}



/* Cleanup() - 	Clean up memory allocated
 * */
void Program::Cleanup()
{
    // This is called automatically when the program ends
	if (locationList != nullptr)
	{
		delete[] locationList;
	}
}



/* Main() - Main program loop
 * */
void Program::Main()
{
	bool done = false;
	while (!done)
	{
		DisplayCurrentLocation();

		if (ptrCurrentLocation == ptrEndLocation)
		{
			cout << "Realizing that you are not eligible for a library card, the books fly off the shelves and suffocate you." << endl;
			break;
		}

		string choice = GetUserInput();

		if (choice == "n" && ptrCurrentLocation->ptrToNorth != nullptr)
		{
			ptrCurrentLocation = ptrCurrentLocation->ptrToNorth;
		}

		else if (choice == "s" && ptrCurrentLocation->ptrToSouth != nullptr)
		{
			ptrCurrentLocation = ptrCurrentLocation->ptrToSouth;
		}

		else if (choice == "e" && ptrCurrentLocation->ptrToEast != nullptr)
		{
			ptrCurrentLocation = ptrCurrentLocation->ptrToEast;
		}
		
		else if (choice == "w" && ptrCurrentLocation->ptrToWest != nullptr)
		{
			ptrCurrentLocation = ptrCurrentLocation->ptrToWest;
		}

		else if (choice == "q")
		{
			done = true;
		}
		
		else
		{
			cout << "Invalid Choice" << endl;
		}
	}

	cout << "Good bye" << endl;
}



/* DisplayCurrentLocation() - Use the current location
 *              pointer to display the location's name
 *              and description, as well as which
 *              directions the player can move next.
 * */
void Program::DisplayCurrentLocation()
{
	cout << ptrCurrentLocation->name << endl;
	cout << ptrCurrentLocation->description << endl;

	cout << "You can move:";

	if (ptrCurrentLocation->ptrToNorth != nullptr)
	{
		cout << "\t* north";
	}

	if (ptrCurrentLocation->ptrToSouth != nullptr)
	{
		cout << "\t* south";
	}

	if (ptrCurrentLocation->ptrToEast != nullptr)
	{
		cout << "\t* east";
	}

	if (ptrCurrentLocation->ptrToWest != nullptr)
	{
		cout << "\t* west";
	}

	cout << endl;
}



/* GetUserInput() - Display the list of options to the
 *                  user, then get their input and return
 *                  their choice.
 * */
string Program::GetUserInput()
{
	string choice;

	cout << "Options: (n)orth, (s)outh, (e)ast, (w)est, (q)uit" << endl;
	cin >> choice;
	cout << endl;

	return choice;
}



/************************************/
/* Don't modify *********************/
/************************************/

Program::Program()
{
    locationList = nullptr;
    ptrCurrentLocation = nullptr;
    Setup();
}

Program::~Program()
{
    Cleanup();
}
