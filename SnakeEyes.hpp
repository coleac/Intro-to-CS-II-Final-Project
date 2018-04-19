/*********************************************************************
** Program Filename: SnakeEyes.hpp
** Author: Aalon Cole colea@oregonstate.edu
** Date: 8/7/2016
** Description: This is the SnakeEyes subclass specification file
*********************************************************************/
#ifndef SNAKEEYES_HPP
#define SNAKEEYES_HPP

#include <iostream>

#include "PseudoRoom.hpp"



//SnakeEyes class declaration
class SnakeEyes : public PseudoRoom
{
protected:

public:
	SnakeEyes() : PseudoRoom() {}
	~SnakeEyes() {}
	void text();

};
#endif
