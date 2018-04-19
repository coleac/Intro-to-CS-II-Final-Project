/*********************************************************************
** Program Filename: Room.cpp
** Author: Aalon Cole colea@oregonstate.edu
** Date: 8/7/2016
** Description: This is the Room function implementation file
*********************************************************************/
#include <iostream>
#include "Room.hpp"


/*********************************************************************
** Function: Room
** Description: Default Constructor
** Parameters: None
*********************************************************************/
Room::Room()
{	
	counter = 0;

}

/*********************************************************************
** Function: Room
** Description: Constructor
** Parameters: Basket *basket
*********************************************************************/
Room::Room(Basket *basket)
{
	this->basket = basket;
}

/*********************************************************************
** Function: ~Room
** Description: Destructor
** Parameters: None
*********************************************************************/
Room::~Room()
{

}

/*********************************************************************
** Function: text
** Description: To provide game detail
** Parameters: None
*********************************************************************/
void Room::text()
{
	cout << "Nothing.";
}

/*********************************************************************
** Function: getPrevTo
** Description: To get prev room's prev pointer for room exchange
** Parameters: None
*********************************************************************/
Room* Room::getPrevTo()
{
	return NULL;
}

/*********************************************************************
** Function: exchangeRooms
** Description: Delete Basement2 and Add GarbageBasement
** Parameters: None
*********************************************************************/
void Room::exchangeRooms()
{
	cout << "Nothing.";
}
