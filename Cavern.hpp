/*********************************************************************
** Program Filename: Cavern.hpp
** Author: Aalon Cole colea@oregonstate.edu
** Date: 8/7/2016
** Description: This is the Cavern subclass specification file
*********************************************************************/
#ifndef CAVERN_HPP
#define CAVERN_HPP
#include <iostream>


#include "Room.hpp"

using std::cout;
using std::cin;
using std::endl;

class GamePlay;
class Stairway;

//Cavern class declaration
class Cavern : public Room
{
private:
	int choice1, choice2;
	

public:
	Cavern(Basket *basket) : Room(basket){
		counter = 0;
	}
	~Cavern();
	void special();
	void text();
	void text2();
	Room* getPrevTo();
	void setUpPointer(Room* name);
	void setDownPointer(Room* name);
	void setPrevPointer(Room* name);
	void setNextPointer(Room* name);
};
#endif
