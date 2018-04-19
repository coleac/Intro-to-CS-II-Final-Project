/*********************************************************************
** Program Filename: GamePlay.hpp
** Author: Aalon Cole colea@oregonstate.edu
** Date: 8/7/2016
** Description: This is the GamePlay specification file
*********************************************************************/
#ifndef GAMEPLAY_HPP
#define GAMEPLAY_HPP
#include <iostream>

using std::cout;

class Basket;
class Room;

//GamePlay class declaration
class GamePlay
{
private:
	Basket *basket;
	Room *room1;
	Room *room2;
	Room *room3;
	Room *room4;
	Room *room5;


public:
	GamePlay();
	~GamePlay();
	void startGame();
	void openingText();
};
#endif