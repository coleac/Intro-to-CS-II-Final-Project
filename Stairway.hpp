/*********************************************************************
** Program Filename: Stairway.hpp
** Author: Aalon Cole colea@oregonstate.edu
** Date: 8/7/2016
** Description: This is the Stairway subclass specification file
*********************************************************************/
#ifndef STAIRWAY_HPP
#define STAIRWAY_HPP
#include <iostream>
#include <string>
#include <cstdlib>
#include "Room.hpp"

using std::string;
using std::cout;
using std::cin;
using std::endl;

class GamePlay;
class GarbageBasement;
class Cavern;
class Basement1;

//Stairway class declaration
class Stairway : public Room
{
	private:
		string rope, newspaper, value;		
		int choice1, counter1;

	public:
		Stairway(Basket *basket) : Room(basket) { 
			counter = 0;
			rope = "rope";
			newspaper = "newspaper";
		}
		~Stairway();
		void special();
		void text();
		void text2();
		void text3();
		void text4();
		void exchangeRooms();
		void setUpPointer(Room* name);
		void setDownPointer(Room* name);
		void setPrevPointer(Room* name);
		void setNextPointer(Room* name);

};
#endif
