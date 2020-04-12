#include"Boat.h"
#pragma once
class BoatListNode
{
private:
	Boat* boat;
	BoatListNode* next;
public:
	BoatListNode(Boat* boat);
	Boat* getNode();
	BoatListNode* getNext();
	void setNext(BoatListNode* current);
};

