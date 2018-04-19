/*********************************************************************
** Program Filename: Falling.cpp
** Author: Aalon Cole colea@oregonstate.edu
** Date: 8/7/2016
** Description: This is the Falling function implementation file
*********************************************************************/
#include "Falling.hpp"
#include <iostream>

using std::cout;


/*********************************************************************
** Function: text
** Description: Provides information about the Falling PseudoRoom
** Parameters: None
*********************************************************************/
void Falling::text()
{
	cout << "     -----------------------------~------------------------------------------     \n";
	cout << "\n" "You first toss your basket down. You hear the tinkle of breaking glass.\n";
	cout << "Great. You go back up the stairs a bit so you can get a running jump.\n";
	cout << "You start down the stairs, trying not to stumble as you pick up a little\n";
	cout << "speed. You reach the edge of the hole and leap forward. The flame of the\n";
	cout << "lighter flickers, but doesn't go out. You're...not even close. You fall\n";
	cout << "and fall and fall. Wait, shouldn't you have hit something by now? Probably.\n\n";
	
	cout << "\n" << "GAME OVER\n";
	exit(0);
}