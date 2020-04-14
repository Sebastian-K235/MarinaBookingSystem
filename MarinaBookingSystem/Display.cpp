#include "Display.h"
#include <iostream>

using namespace std;

 void Display::showMainMenu()
{
	cout << "+======Marina=Booking=System=v2.0======+" << "\n";
	cout << "|                                      |" << "\n";
	cout << "|     1. New booking                   |" << "\n";
	cout << "|     2. Delete a booking              |" << "\n";
	cout << "|     3. Show all bookings             |" << "\n";
	cout << "|     4. Exit                          |" << "\n";
	cout << "|                                      |" << "\n";
	cout << "|                                      |" << "\n";
	cout << "+======================================+" << "\n";
	cout << "\n";
	cout << "Please choose an option (1-4)" << "\n";
	cout << "and press Enter to confirm: ";
}
