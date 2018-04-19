/*********************************************************************
** Program Filename: Rat.hpp
** Author: Aalon Cole colea@oregonstate.edu
** Date: 8/7/2016
** Description: This is the Rat subclass specification file
*********************************************************************/
#ifndef RAT_HPP
#define RAT_HPP

#include <iostream>

#include "PseudoRoom.hpp"

//Rat class declaration
class Rat : public PseudoRoom
{
protected:

public:
	Rat() : PseudoRoom() {}
	~Rat() {}
	void text();

};
#endif
