#include "BoatListNode.h"

BoatListNode::BoatListNode(Boat* b)
{
	this->boat = b;
	next = NULL;
}

void BoatListNode::setNext(BoatListNode* nextNode)
{
	this->next = nextNode;
}
