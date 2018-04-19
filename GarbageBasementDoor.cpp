/*********************************************************************
** Program Filename: GarbageBasementDoor.cpp
** Author: Aalon Cole colea@oregonstate.edu
** Date: 8/7/2016
** Description: This is the GarbageBasementDoor function implementation file
*********************************************************************/
#include "GarbageBasementDoor.hpp"
#include <iostream>

using std::cout;

/*********************************************************************
** Function: text
** Description: Provides information about the GarbageBasementDoor PseudoRoom
** Parameters: None
*********************************************************************/
void GarbageBasementDoor::text()
{
	cout << "\n" "You cannot breathe! You cannot see--your lighter has been extinguished.\n";
	cout << "There is no ground beneath your feet! You are falling!\n\n";
	cout << "     -----------------------------~------------------------------------------     \n";
}