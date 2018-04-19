/*********************************************************************
** Program Filename: PseudoRoom.hpp
** Author: Aalon Cole colea@oregonstate.edu
** Date: 8/7/2016
** Description: This is the PseudoRoom pure abstract class specification file
*********************************************************************/
#ifndef PSEUDOROOM_HPP
#define PSEUDOROOM_HPP

#include <iostream>

class Room;

//PseudoRoom class declaration
class PseudoRoom
{
protected:

public:
	PseudoRoom();
	virtual ~PseudoRoom() = 0;
	virtual void text() = 0;

};
#endif
