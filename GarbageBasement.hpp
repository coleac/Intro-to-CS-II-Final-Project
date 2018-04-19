/*********************************************************************
** Program Filename: GarbageBasement.hpp
** Author: Aalon Cole colea@oregonstate.edu
** Date: 8/7/2016
** Description: This is the GarbageBasement subclass specification file
*********************************************************************/
#ifndef GARBAGEBASEMENT_HPP
#define GARBAGEBASEMENT_HPP
#include <iostream>
#include <string>
#include "Room.hpp"

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Stairway;
class Passageway;
class Gameplay;

//GarbageBasement class declaration
class GarbageBasement:public Room
{
private:
	string newspaper, Indian, value;
	int choice1;


public:
	GarbageBasement(Basket *basket) : Room(basket) { 
		counter = 0;
		newspaper = "newspaper";
		Indian = "Indian";
	}
	~GarbageBasement();
	void special();
	void text();
	void text2();
	void setUpPointer(Room* name);
	void setDownPointer(Room* name);
	void setPrevPointer(Room* name);
	void setNextPointer(Room* name);
};
#endif
