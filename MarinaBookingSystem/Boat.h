#pragma once
#include<iostream>

using namespace std;

class Boat
{
protected:
	string ownerName;
	string boatName;
	float length;
	string boatType;

public:

	void showBoat();
	Boat(string oN, string bN, float l, string bT);

};

