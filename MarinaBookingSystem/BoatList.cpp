#include "BoatList.h"

void BoatList::initList()
{
	this->start = NULL;
	this->end = NULL;
}

void BoatList::addNode(Boat* b)
{
	BoatListNode* current = new BoatListNode(b);
	if (this->start == NULL)
	{
		this->start = current;
	}
	else
	{
		this->end->setNext(current);
	}
	this->end = current;
}

BoatListNode* BoatList::getStart()
{
	return start;
}