#include "Booking.h"
#include<iostream>

Booking::Booking()
{
	boatLength = 0;
	draft = 0;
	durationOfStay = 6;
	price = 0;
	ownerName = "John Brown";
	boatName = "Boaty";
	typeOfBoat = "Sail";
	std::cout << "Blank booking created" << std::endl;
}

Booking::Booking(float len,  float dra , int dur, float prc, std::string on, std::string bn, std::string bt )
{
	boatLength = len;
	draft = dra;
	durationOfStay = dur;
	price = prc;
	ownerName = on;
	boatName = bn;
	typeOfBoat = bt;
	std::cout << "Booking created"<< std::endl;
}

Booking::~Booking()
{
	std::cout << "Booking destroyed" << std::endl;
}

void Booking::showBooking()
{
	std::cout << "Boat name: " << boatName << " | Owner name: " << ownerName << std::endl;
}