#include "FileControl.h"
#include "Data.h"
#include <fstream>
#include <iostream>

void FileControl::fileRead()
{
	using namespace std;

	ifstream filePtr;

	filePtr.open("SystemData.dat", ios::in | ios::binary);

	if (filePtr.is_open())
	{

		float	len;
		float	draft;
		float	price;
		int		stay;
		string*	bName = new string();
		string*	oName = new string();
		string*	bType = new string();
		while (filePtr.peek()!=EOF)
		{
			filePtr.read((char*)&len, sizeof(float));
			cout << len;
			filePtr.read((char*)&draft, sizeof(float));
			cout << draft;
			filePtr.read((char*)&price, sizeof(float));
			cout << price;
			filePtr.read((char*)&stay, sizeof(int));
			cout << stay;
			filePtr.read((char*)bName, sizeof(string));
			cout << bName;
			filePtr.read((char*)oName, sizeof(string));
			cout << oName;
			filePtr.read((char*)bType, sizeof(string));
			cout << bType;
			Booking* b = new Booking(len, draft, stay, price, *oName, *bName, *bType);
			Data::bookingList.add(b);
		}
	}
	filePtr.close();
}

void FileControl::fileWrite()
{

	using namespace std;

	ofstream filePtr;

	filePtr.open("SystemData.dat", ios::out | ios::binary);

	Node* current = Data::bookingList.getStart();
	Booking b;

	while (current != NULL)
	{
		b = *current->getData();
		float len = b.getLength();
		float draft = b.getDraft();
		float price = b.getPrice();
		int stay = b.getDuration();
		string bName = b.getBoatName();
		string oName = b.getOwnerName();
		string bType = b.getBoatType();

		filePtr.write((char*)&len,				sizeof(float));

		filePtr.write((char*)&draft,			sizeof(float));

		filePtr.write((char*)&price,			sizeof(float));

		filePtr.write((char*)&stay,				sizeof(int));

		filePtr.write((char*)&bName,			sizeof(string));

		filePtr.write((char*)&oName,			sizeof(string));

		filePtr.write((char*)&bType,			sizeof(string));

		current = current->getNext();
	}


	filePtr.close();

}

