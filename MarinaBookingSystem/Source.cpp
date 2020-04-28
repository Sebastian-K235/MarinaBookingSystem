#include <iostream>
#include "Display.h"

int main()
{
	//Variable storing user's selected option
	char selection;

	do {
		Display::showMainMenu();
		std::cin >> selection;


	} while (selection != '4');

	return 0;
}