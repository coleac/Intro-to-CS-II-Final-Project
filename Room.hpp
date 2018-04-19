/*********************************************************************
** Program Filename: Room.hpp
** Author: Aalon Cole colea@oregonstate.edu
** Date: 8/7/2016
** Description: This is the Room pure abstract class specification file
*********************************************************************/
#ifndef ROOM_HPP
#define ROOM_HPP

#include <iostream>
#include "Basket.hpp"
#include "GamePlay.hpp"

using std::cout;
using std::cin;
using std::endl;

class GamePlay;
class PseudoRoom;

//Room class declaration
class Room
{

protected:
	int counter;
	Room *up;
	Room *down;
	Room *next;
	Room *prev;
	Basket *basket;

public:
	Room();
	Room(Basket *basket);
	virtual ~Room()=0;
	virtual void text();	
	virtual void exchangeRooms();
	virtual Room* getPrevTo();
	virtual void special() = 0;
	virtual void setUpPointer(Room* name)=0;
	virtual void setDownPointer(Room* name)=0;
	virtual void setPrevPointer(Room* name)=0;
	virtual void setNextPointer(Room* name)=0;
};
#endif
