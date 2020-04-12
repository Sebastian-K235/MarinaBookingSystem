#include "Boat.h"

void Boat::showBoat()
{
	cout <<"Name: " <<this->boatName << " | Owner Name: " << this->ownerName << " | Length: "<< this->length << " | Type: " << this->boatType << endl;
}

Boat::Boat(string bn, string on, float l, string bt)
{
	boatName = bn;
	ownerName = on;
	length = l;
	boatType = bt;
}