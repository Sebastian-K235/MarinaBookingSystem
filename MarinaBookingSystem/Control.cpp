#include "Control.h"
#include "Data.h"

void Control::menuSelection(char sel)
{
	Booking* bptr = NULL;
	switch (sel)
	{
	case '1':
		Data::addNewBooking();
		break;
	case '2':
		break;
	case '3':
		system("CLS");
		Data::bookingList.showList();
		system("Pause");
		break;
	case '4':
		break;
	default:
		break;
	}
}
