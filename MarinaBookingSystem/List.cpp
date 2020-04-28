#include "List.h"
#include <iostream>

int List::length = 0 ;

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

void List::add(Booking* b)
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
	length++;
}

void List::showList()
{
	if (start == NULL)
	{
		std::cout << "There are no bookings in the system" << std::endl << std::endl;
	}
	Node* current = start;
	while (current != NULL)
	{
		current->getData()->showBooking();
		current = current->getNext();
	}
}

int List::getLength()
{
	return length;
}