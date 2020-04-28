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

Booking::Booking(float LengthOfBoat,  float DraftHeight , int DurationOfStay, float PriceOfStay, std::string OwnersName, std::string BoatsName, std::string TypeOfBoat )
{
	boatLength = LengthOfBoat;
	draft = DraftHeight;
	durationOfStay = DurationOfStay;
	price = PriceOfStay;
	ownerName = OwnersName;
	boatName = BoatsName;
	typeOfBoat = TypeOfBoat;
	std::cout << "Booking created"<< std::endl;
}

Booking::~Booking()
{
	std::cout << "Booking destroyed" << std::endl;
}

void Booking::showBooking()
{
	std::cout << std::endl << "Boat name: " << this->boatName << " | Owner name: " << this->ownerName << std::endl;
}