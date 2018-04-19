/*********************************************************************
** Program Filename: Basement1.hpp
** Author: Aalon Cole colea@oregonstate.edu
** Date: 8/7/2016
** Description: This is the Basement1 subclass specification file
*********************************************************************/
#ifndef BASEMENT1_HPP
#define BASEMENT1_HPP
#include <iostream>

#include "Room.hpp"

using std::string;
using std::cout;
using std::cin;
using std::endl;

class GamePlay;
class Passageway;

//Basement1 class declaration
class Basement1:public Room
{
	private:
		int choice1, counter1, counter2, answer;
		string lighter, doughnut;
	

	public:
		Basement1(Basket *basket) : Room(basket) {
			doughnut = "doughnut";
			lighter = "lighter";
			counter = 0;
			counter1 = 0;
			counter2 = 0;
		}
		~Basement1();
		void text();
		void text2();
		void special();
		void setUpPointer(Room* name);
		void setDownPointer(Room* name);
		void setPrevPointer(Room* name);
		void setNextPointer(Room* name);

};
#endif
