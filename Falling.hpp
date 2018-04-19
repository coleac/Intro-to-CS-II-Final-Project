/*********************************************************************
** Program Filename: Falling.hpp
** Author: Aalon Cole colea@oregonstate.edu
** Date: 8/7/2016
** Description: This is the Falling subclass specification file
*********************************************************************/
#ifndef FALLING_HPP
#define FALLING_HPP

#include <iostream>
#include <cstdlib>

#include "PseudoRoom.hpp"

class Stairway;

//Falling class declaration
class Falling : public PseudoRoom
{
protected:

public:
	Falling() : PseudoRoom() {}
	~Falling() {}
	void text();

};
#endif
