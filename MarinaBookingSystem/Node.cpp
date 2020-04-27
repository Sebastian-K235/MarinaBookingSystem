#include "Node.h"

Node::Node(Booking b)
{
	booking = &b;
	next = NULL;
}