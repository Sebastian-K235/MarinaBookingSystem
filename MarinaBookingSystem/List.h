#pragma once
#include"Node.h"
class List
{
private:
	//Pointer to start to the list
	Node* start;

	//Pointer to the end of the list
	Node* end;

	//Number of objects in the list
	static int length;

public:
	//Constructor
	List();

	//Returns true if the list is empty
	bool isEmpty();

	//Add a new booking at the end of the list
	void add(Booking* b);

	//Removing a booking by boat name
	void deleteByBoatName(std::string boatName);

	void showDetailedBooking(std::string boatName);

	//Display all bookings in the list
	void showList();

	//Return number of objects in the list
	int getLength();

	Node* getStart();
};

