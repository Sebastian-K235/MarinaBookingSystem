#include "Display.h"
#include <iostream>

using namespace std;

 void Display::showMainMenu()
{
	cout << "+======Marina=Booking=System=v1.0======+" << "\n";
	cout << "|                                      |" << "\n";
	cout << "|     1. Add a new record              |" << "\n";
	cout << "|     2. Delete a record               |" << "\n";
	cout << "|     3. Display all records           |" << "\n";
	cout << "|     4. Exit                          |" << "\n";
	cout << "|                                      |" << "\n";
	cout << "|                                      |" << "\n";
	cout << "+======================================+" << "\n";
	cout << "\n";
	cout << "Please choose an option (1-4)" << "\n";
	cout << "and press Enter to confirm: ";
}