/*
MODIFY THIS FILE
*/
//Benjamin Carpenter 3/25/17
#include "hp3_program.hpp"

#include <iostream>
using namespace std;


/* Setup() - 	Create the list of locations
 *              Allocate needed memory
 * */
void Program::Setup()
{
    // This is called automatically when the program begins
	locationList = new Location[6];
	locationList[0].name = "Burial Chamber";
	locationList[0].description = "Looks like the previous room was just a decoy, the room you are now in is dominated by a large gold casket in the center of the room surrounded by heaps of gold treasure and fine jewels.";

	locationList[1].name = "Tomb entrance";
	locationList[1].description = "Past a set of large ominous doors lays a huge chamber covered in pagan curses and cryptic warnings";
	locationList[1].ptrToEast = &locationList[2];

	locationList[2].name = "Grand hall";
	locationList[2].description = "A vast hall lays before you filled with many support columns and arches";
	locationList[2].ptrToWest = &locationList[1];
	locationList[2].ptrToSouth = &locationList[4];

	locationList[3].name = "Looted treasure room";
	locationList[3].description = "the room is shaped like a tall cylinder around the edges lay several opened chests and smashed pieces of pottery, it looks like someone else beat you to the treasure.";
	locationList[3].ptrToWest = &locationList[2];
	locationList[3].ptrToSouth = &locationList[5];
	locationList[3].ptrToNorth = &locationList[0];

	locationList[4].name = "Trapped hallway";
	locationList[4].description = "A long curved hallway with suspicious looking quarter sized holes in the wall, better watch your step.";
	locationList[4].ptrToEast = &locationList[5];
	locationList[4].ptrToNorth = &locationList[2];

	locationList[5].name = "Empty hallway";
	locationList[5].description = "A long hallway with nothing of interest.";
	locationList[5].ptrToWest = &locationList[4];
	locationList[5].ptrToNorth = &locationList[3];

	ptrCurrentLocation = &locationList[1];
	ptrEndLocation = &locationList[0];
}



/* Cleanup() - 	Clean up memory allocated
 * */
void Program::Cleanup()
{
    // This is called automatically when the program ends
	if (locationList != nullptr) {
		delete[] locationList;
	}
}



/* Main() - Main program loop
 * */
void Program::Main()
{
	bool done = false;
	string choice = "";
	while (!done) {
		DisplayCurrentLocation();
		if (ptrCurrentLocation == ptrEndLocation) {
			cout << "You have reached your destination!\n";
			break;
		}
		choice = GetUserInput();
		if (choice == "e" && ptrCurrentLocation->ptrToEast != nullptr) {
			ptrCurrentLocation = ptrCurrentLocation->ptrToEast;
		}else if (choice == "s" && ptrCurrentLocation->ptrToSouth != nullptr) {
			ptrCurrentLocation = ptrCurrentLocation->ptrToSouth;
		}else if (choice == "w" && ptrCurrentLocation->ptrToWest != nullptr) {
			ptrCurrentLocation = ptrCurrentLocation->ptrToWest;
		}else if (choice == "n" && ptrCurrentLocation->ptrToNorth != nullptr) {
			ptrCurrentLocation = ptrCurrentLocation->ptrToNorth;
		}else {
			cout << "\n invalid choice\n";
		}
	}
	cout << "\nGOOD BYE!\n";
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
	string displayStr = "You can move: ";
	if (ptrCurrentLocation->ptrToEast != nullptr) {
		displayStr += "* east";
	}
	if (ptrCurrentLocation->ptrToSouth != nullptr) {
		displayStr += "* south";
	}
	if (ptrCurrentLocation->ptrToWest != nullptr) {
		displayStr += "* west";
	}
	if (ptrCurrentLocation->ptrToNorth != nullptr) {
		displayStr += "* north";
	}
	cout << displayStr << "\n";
	
}



/* GetUserInput() - Display the list of options to the
 *                  user, then get their input and return
 *                  their choice.
 * */
string Program::GetUserInput()
{
	cout << "Options: (n)orth, (s)outh, (e)ast, (w)est, (q)uit\n>>";
	string choice;
	cin >> choice;
	return choice; // temp - replace me
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
