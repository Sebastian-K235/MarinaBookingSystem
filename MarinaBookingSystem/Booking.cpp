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
	std::cout << "Boat name: " << this->boatName << " | Owner name: " << this->ownerName << std::endl;
}

void Booking::showDetailedBooking()
{
	using namespace std;
	cout << "Boat name: " << this->boatName << endl;
	cout << "Owner name: " << this->ownerName << endl;
	cout << "Boat type: " << this->typeOfBoat << endl;
	cout << "Boat length: " << this->boatLength << " m" << endl;
	cout << "Draft: " << this->draft << " m" << endl;
	cout << "Duration of stay: " << this->durationOfStay <<" months"<< endl;
	cout << "Price: " << this->price << " GBP" << endl;
}



std::string Booking::getBoatName()
{
	return boatName;
}

std::string Booking::getOwnerName()
{
	return ownerName;
}

std::string Booking::getBoatType()
{
	return typeOfBoat;
}

float Booking::getLength()
{
	return boatLength;
}

float Booking::getDraft()
{
	return draft;

}


float Booking::getPrice()
{
	return price;
}

int Booking::getDuration()
{
	return durationOfStay;
}