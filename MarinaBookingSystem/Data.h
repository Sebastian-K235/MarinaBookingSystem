#include"BoatList.h"
#include"Boat.h"
#pragma once
class Data
{
private:
	static BoatList mainBay;
	static BoatList tempBay;
public:
	void static Startup();
	void static InitDataStructures();
	void static AddToMain(Boat* b);
};

