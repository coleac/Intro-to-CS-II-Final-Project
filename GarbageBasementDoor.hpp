/*********************************************************************
** Program Filename: GarbageBasementDoor.hpp
** Author: Aalon Cole colea@oregonstate.edu
** Date: 8/7/2016
** Description: This is the GarbageBasementDoor subclass specification file
*********************************************************************/
#ifndef GARBAGEBASEMENTDOOR_HPP
#define GARBAGEBASEMENTDOOR_HPP

#include <iostream>
#include "PseudoRoom.hpp"

//GarbageBasementDoor class declaration
class GarbageBasementDoor : public PseudoRoom
{
protected:

public:
	GarbageBasementDoor() : PseudoRoom() {}
	~GarbageBasementDoor() {}
	void text();


};
#endif
