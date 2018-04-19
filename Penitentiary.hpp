/*********************************************************************
** Program Filename: Penitentiary.hpp
** Author: Aalon Cole colea@oregonstate.edu
** Date: 8/7/2016
** Description: This is the Penitentiary subclass specification file
*********************************************************************/
#ifndef PENITENTIARY_HPP
#define PENITENTIARY_HPP

#include <iostream>

#include "PseudoRoom.hpp"


//Penitentiary class declaration
class Penitentiary : public PseudoRoom
{
protected:

public:
	Penitentiary() : PseudoRoom() {}
	~Penitentiary() {}
	void text();

};
#endif
