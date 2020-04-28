#pragma once
#include"Booking.h"

class Node
{
private:
	//Node contents
	Booking* booking;

	//Next node in the list
	Node* next;
public:

	//Constructor
	Node(Booking* b);

	//Getters
	Node*     getNext();
	Booking*  getData();

	//Setters
	void      setNext(Node* n);
};

