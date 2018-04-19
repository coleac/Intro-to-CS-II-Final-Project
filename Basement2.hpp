/*********************************************************************
** Program Filename: Basement2.hpp
** Author: Aalon Cole colea@oregonstate.edu
** Date: 8/7/2016
** Description: This is the Basement2 subclass specification file
*********************************************************************/
#ifndef BASEMENT2_HPP
#define BASEMENT2_HPP
#include <iostream>
#include <string>
#include <cstdlib>
#include "Room.hpp"

using std::string;
using std::cout;
using std::cin;
using std::endl;

class GamePlay;
class Passageway;
class Stairway;

//Basement2 class declaration
class Basement2:public Room
{
private:
	string dice, value;
	int choice1;

public:
	Basement2(Basket *basket) : Room(basket) {
		counter = 0;
		dice = "dice";
	}
	~Basement2();
	void special();
	void text();
	Room* getPrevTo();
	void setUpPointer(Room* name);
	void setDownPointer(Room* name);
	void setPrevPointer(Room* name);
	void setNextPointer(Room* name);

};
#endif
