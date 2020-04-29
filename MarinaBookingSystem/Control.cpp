#include "Control.h"
#include "Data.h"
#include "FileControl.h"

void Control::menuSelection(char sel)
{
	Booking* bptr = NULL;
	switch (sel)
	{
	case '1':
		Data::addNewBooking();
		break;
	case '2':
		Data::removeBooking();
		break;
	case '3':
		system("CLS");
		Data::bookingList.showList();
		system("Pause");
		break;
	case '4':
		FileControl::fileWrite();
		break;
	default:
		break;
	}
}
