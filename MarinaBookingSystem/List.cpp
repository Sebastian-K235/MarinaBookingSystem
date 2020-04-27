#include "List.h"

List::List()
{
	start = NULL;
	end = NULL;
}

bool List::isEmpty()
{
	if (start == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void List::add(Booking b)
{
	if (isEmpty())
	{
		Node* n = new Node(b);
		start = n;
		end = n;
	}
	else
	{
		Node* n = new Node(b);
		end->setNext(n);
		end = n;
	}
}