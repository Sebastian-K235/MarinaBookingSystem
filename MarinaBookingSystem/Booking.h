#include<string>
#pragma once


//Class holding details for bookings
class Booking
{
	//Private attributes
	float boatLength;
	float draft;
	int durationOfStay;
	float price;
	std::string ownerName;
	std::string boatName;
	std::string typeOfBoat;

	//Public methods
public:
	Booking();
	Booking(float, float, int, float, std::string, std::string, std::string);
	~Booking();
	std::string getBoatName();
	std::string getOwnerName();
	std::string getBoatType();
	float getLength();
	float getDraft();
	float getPrice();
	int getDuration();
	void showBooking();
};

