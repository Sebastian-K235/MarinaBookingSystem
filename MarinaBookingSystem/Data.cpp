#include "Data.h"

BoatList Data::mainBay;

BoatList Data::tempBay;

void Data::Startup()
{
	Data::InitDataStructures();
}

void Data::InitDataStructures()
{
	mainBay.initList();
	tempBay.initList();
}

void Data::AddToMain(Boat* b)
{
	mainBay.addNode(b);
}