#include "Data.h"
#include <iostream>


List Data::bookingList;

void Data::addNewBooking()
{
	system("CLS");

	using namespace std;

	//Variables for creation of new booking
	float boatLength;
	float boatDraft;
	int duration;
	float price;
	string ownerName;
	string boatName;
	string typeOfBoat;

	//Variable to validate user input
	string input;

	//First check if there is sufficient space in the marina
	if (bookingList.getLength() >= 50)
	{
		cout << "Insufficient space in the marina!" << endl;
		system("pause");
		return;
	}

	cout << "Please enter boat's length (in meters): ";
	cin >> input;
	//Validate that input is a number
	boatLength = stof(input);

	if (boatLength > 15)
	{
		cout << "Boat length is too big" << endl;
		system("pause");
		return;
	}
	

	cout << endl << "Please enter boat's draft (in meters): ";
	cin >> input;
	//Validate input here
	boatDraft = stof(input);

	if (boatDraft > 5)
	{
		cout << "Boat's draft is too tall"<< endl;
		system("Pause");
		return;
	}

	
	cout << endl << "How long is the stay (in full months): ";
	cin >> input;
	//Validate input
	duration = stoi(input);

	price = boatLength * (float)duration * 10.0f;

	system("CLS");
	cout << "Duration of stay: " << duration << " months." << endl;
	cout << "Cost: " << price << " GBP"<<endl<<endl;

	

	cout << "Would you like to proceed? Y/N: ";
	cin >> input;
	//Validate

	if (input == "N" || input == "n")
	{
		cout << "Terminating transaction..." << endl;
		system("Pause");
		return;
	}

	system("CLS");

	cout <<"Please enter owner's name: ";
	cin >> input;
	//Validate
	ownerName = input;
	


	cout << endl << "Please enter boat's name: ";
	cin >> input;
	//Validate
	boatName = input;

	cout << endl << "Please select (1-3) the type of boat:" << endl 
		<< "1.Narrow boat" << endl 
		<< "2.Sailing boat" << endl 
		<< "3.Motor boat" << endl;

	cout << endl << "Type: ";
	cin >> input;
	//Validate

	if (input == "1")
	{
		typeOfBoat = "Narrow";
	}
	else if (input == "2")
	{
		typeOfBoat = "Sailing";
	}
	else
	{
		typeOfBoat = "Motor";
	}

	Booking* b;
	b = new Booking(boatLength, boatDraft, duration, price, ownerName, boatName, typeOfBoat);
	bookingList.add(b);

	cout << endl << endl;
	system("Pause");
}
