/*********************************************************************
** Program Filename: Passageway.hpp
** Author: Aalon Cole colea@oregonstate.edu
** Date: 8/7/2016
** Description: This is the Passageway subclass specification file
*********************************************************************/
#ifndef PASSAGEWAY_HPP
#define PASSAGEWAY_HPP
#include <iostream>
#include <string>
#include <cstdlib>
#include "Room.hpp"

using std::string;
using std::cout;
using std::cin;
using std::endl;

class GamePlay;
class Basement1;
class Basement2;
class GarbageBasement;

//Passageway class declaration
class Passageway : public Room
{
private:
	string doughnut, wood, rope, value;
	int counter1, counter2, choice1, choice2, choice3;


public:
	Passageway(Basket *basket) : Room(basket) { 
		counter = 0;
		doughnut = "doughnut";
		wood = "wood";
		rope = "rope";
	}
	~Passageway();
	void special();
	void text();
	void text2();
	void setUpPointer(Room* name);
	void setDownPointer(Room* name);
	void setPrevPointer(Room* name);
	void setNextPointer(Room* name);
};
#endif
