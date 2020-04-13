#include"BoatListNode.h"
#pragma once
class BoatList
{
private:
	BoatListNode* start;
	BoatListNode* end;

public:
	void initList();
	void addNode(Boat* b);
	BoatListNode* getStart();
};

