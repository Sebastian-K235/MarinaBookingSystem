#include <iostream>
#include "Display.h"
#include "Control.h"
#include "Data.h"

int main()
{
	//Variable storing user's selected option
	std::string selection;

	do {
		//system("CLS")
		Display::showMainMenu();
		std::cin >> selection;
		selection = selection[0];
		Control::menuSelection(selection[0]);
		
	} while (selection != "4");

	return 0;
}