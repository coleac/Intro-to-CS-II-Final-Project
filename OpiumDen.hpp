/*********************************************************************
** Program Filename: OpiumDen.hpp
** Author: Aalon Cole colea@oregonstate.edu
** Date: 8/7/2016
** Description: This is the OpiumDen subclass specification file
*********************************************************************/
#ifndef OPIUMDEN_HPP
#define OPIUMDEN_HPP

#include <iostream>

#include "PseudoRoom.hpp"



//OpiumDen class declaration
class OpiumDen : public PseudoRoom
{
protected:

public:
	OpiumDen() : PseudoRoom() {}
	~OpiumDen() {}
	void text();


};
#endif
