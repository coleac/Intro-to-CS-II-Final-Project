/*********************************************************************
** Program Filename: Outside1885.hpp
** Author: Aalon Cole colea@oregonstate.edu
** Date: 8/7/2016
** Description: This is the Outside1885 subclass specification file
*********************************************************************/
#ifndef OUTSIDE1885_HPP
#define OUTSIDE1885_HPP

#include <iostream>

#include "PseudoRoom.hpp"


//Outside1885 class declaration
class Outside1885 : public PseudoRoom
{
protected:

public:
	Outside1885() : PseudoRoom() {}
	~Outside1885() {}
	void text();

};
#endif
