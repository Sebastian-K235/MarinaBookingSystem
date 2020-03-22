#include "Control.h"
#include "Display.h"
#include <iostream>

using namespace std;

int Control::choice;

void Control::startSystem()
{
	//Local data


	//Program loop begins
	do
	{
		system("CLS");
		//Display menu
		Display::showMainMenu();
		//Get user input
		cin>>choice;

	} while (choice != 4);

	
}
