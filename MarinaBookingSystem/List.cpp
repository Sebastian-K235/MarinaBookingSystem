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
	int bookingNo = 1;
	while (current != NULL)
	{
		std::cout << bookingNo << ". ";
		current->getData()->showBooking();
		current = current->getNext();
		bookingNo++;
	}
	std::cout << std::endl;
}

int List::getLength()
{
	return length;
}

Node* List::getStart()
{
	return start;
}

void List::deleteByBoatName(std::string boatName)
{
	if (isEmpty())
	{
		std::cout << "The list is empty"<<std::endl;
		system("Pause");
		return;
	}
	if (start->getData()->getBoatName()==boatName)
	{
		Node* tempPointer = start->getNext();
		delete start;
		start = tempPointer;
		std::cout << "Record deleted successfully" << std::endl;
		system("Pause");
		return;
	}
	else
	{
		Node* previous = start;
		Node* current = start->getNext();
		while (current != NULL)
		{
			if (current->getData()->getBoatName() == boatName)
			{
				previous->setNext(current->getNext());
				delete current;
				std::cout << "Record deleted successfully" << std::endl;
				system("Pause");
				return;
			}
			previous = current;
			current = current->getNext();
		}
	}
	std::cout << "Record not found"<<std::endl;
	system("Pause");
}