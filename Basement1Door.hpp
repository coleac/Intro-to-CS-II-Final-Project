/*********************************************************************
** Program Filename: Basement1Door.hpp
** Author: Aalon Cole colea@oregonstate.edu
** Date: 8/7/2016
** Description: This is the Basement1Door subclass specification file
*********************************************************************/
#ifndef BASEMENT1DOOR_HPP
#define BASEMENT1DOOR_HPP

#include <iostream>
#include "Basket.hpp"
#include "Room.hpp"
#include "PseudoRoom.hpp"


//Basement1Door class declaration
class Basement1Door : public PseudoRoom
{
protected:

public:
	Basement1Door() : PseudoRoom() {}
	~Basement1Door() {}
	void text();

};
#endif
