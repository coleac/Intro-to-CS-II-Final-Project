/*********************************************************************
** Program Filename: Newspaper.hpp
** Author: Aalon Cole colea@oregonstate.edu
** Date: 8/7/2016
** Description: This is the Newspaper subclass specification file
*********************************************************************/
#ifndef NEWSPAPER_HPP
#define NEWSPAPER_HPP

#include <iostream>

#include "PseudoRoom.hpp"



//Newspaper class declaration
class Newspaper : public PseudoRoom
{
protected:

public:
	Newspaper() : PseudoRoom() {}
	~Newspaper() {}
	void text();

};
#endif

