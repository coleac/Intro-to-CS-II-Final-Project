/*********************************************************************
** Program Filename: Outside2016.hpp
** Author: Aalon Cole colea@oregonstate.edu
** Date: 8/7/2016
** Description: This is the Outside2016 subclass specification file
*********************************************************************/
#ifndef OUTSIDE2016_HPP
#define OUTSIDE2016_HPP

#include <iostream>
#include <cstdlib>

#include "PseudoRoom.hpp"

//Outside2016 class declaration
class Outside2016 : public PseudoRoom
{
protected:

public:
	Outside2016() : PseudoRoom() {}
	~Outside2016() {}
	void text();

};
#endif
