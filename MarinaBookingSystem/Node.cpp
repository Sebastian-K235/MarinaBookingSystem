#include "Node.h"

Node::Node(Booking* b)
{
	booking = b;
	next = NULL;
}

Node* Node::getNext()
{
	return next;
}

Booking* Node::getData()
{
	return booking;
}

void Node::setNext(Node* n)
{
	next = n;
}