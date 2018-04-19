/*********************************************************************
** Program Filename: Basement2Door.hpp
** Author: Aalon Cole colea@oregonstate.edu
** Date: 8/7/2016
** Description: This is the Basement2Door subclass specification file
*********************************************************************/
#ifndef BASEMENT2DOOR_HPP
#define BASEMENT2DOOR_HPP

#include <iostream>

#include "Basket.hpp"
#include "Room.hpp"
#include "PseudoRoom.hpp"
#include "Basement2.hpp"


//Basement2Door class declaration
class Basement2Door : public PseudoRoom
{
protected:

public:
	Basement2Door() : PseudoRoom() {}
	~Basement2Door() {}
	void text();


};
#endif
