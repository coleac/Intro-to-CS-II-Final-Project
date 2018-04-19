/*********************************************************************
** Program Filename: Darkness.hpp
** Author: Aalon Cole colea@oregonstate.edu
** Date: 8/7/2016
** Description: This is the Darkness subclass specification file
*********************************************************************/
#ifndef DARKNESS_HPP
#define DARKNESS_HPP

#include <iostream>

#include "PseudoRoom.hpp"

class Passageway;

//Darkness class declaration
class Darkness : public PseudoRoom
{
protected:

public:
	Darkness() : PseudoRoom() {}
	~Darkness() {}
	void text();

};
#endif