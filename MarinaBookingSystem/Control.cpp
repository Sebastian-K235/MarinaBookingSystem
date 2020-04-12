#include "Control.h"
#include "Display.h"
#include "Data.h"
#include <iostream>
#include <string>

using namespace std;

int Control::choice;

void Control::addRecord()
{
	string newBoatName;
	string newOwnerName;
	string newBoatType;
	float newLength;
	
	cin.ignore();

	system("CLS");
	cout << "==Adding a new record==" << endl;
	cout << "Enter a boat name: ";
	getline(cin, newBoatName);
	cout << "Enter owner name:  ";
	getline(cin, newOwnerName);
	cout << "Enter boat type: ";
	getline(cin, newBoatType);
	cout << "Enter boat length: ";
	cin >> newLength;

	Boat* newBoat = new Boat(newOwnerName, newBoatName, newLength, newBoatType);
	Data::AddToMain(newBoat);

	cout << "Record added successfully" << endl;
	cout << "Boat name: " << newBoatName << endl;
	cout << "Owner name: " << newOwnerName << endl;
	cout << "Boat type: " << newBoatType << endl;
	cout << "Length: " << newLength << endl;
	system("Pause");
}

void Control::startSystem()
{
	//Prepare data structures
	Data::Startup();


	//Local data


	//Program loop begins
	do
	{
		system("CLS");
		//Display menu
		Display::showMainMenu();
		//Get user input
		cin >> choice;

		switch (choice) {
			case 1:
				addRecord();
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			default:
				Display::invalidAction();
	}

	} while (choice != 4);

	
}
