/*********************************************************************
** Program Filename: GamePlay.cpp
** Author: Aalon Cole colea@oregonstate.edu
** Date: 8/7/2016
** Description: This is the GamePlay function implementation file
*********************************************************************/
#include <iostream>
#include "GamePlay.hpp"
#include "Basket.hpp"
#include "Room.hpp"
#include "Passageway.hpp"
#include "Basement1.hpp"
#include "Basement2.hpp"
#include "Stairway.hpp"
#include "Cavern.hpp"
#include "GarbageBasement.hpp"

/*********************************************************************
** Function:GamePlay
** Description: Default Constructor
** Parameters: N/A
*********************************************************************/
GamePlay::GamePlay()
{	

	//Build Container
	
	basket = new Basket();

	//Build The Underground	
	room1 = new Basement1(basket);
	room2 = new Passageway(basket);
	room3 = new Basement2(basket);
	room4 = new Stairway(basket);
	room5 = new Cavern(basket);

	room1->setNextPointer(room2);

	room2->setPrevPointer(room1);
	room2->setNextPointer(room3);


	room3->setPrevPointer(room2);
	room3->setNextPointer(room4);

	room4->setPrevPointer(room3);
	room4->setNextPointer(room5);
	room4->setDownPointer(room1);

	room5->setPrevPointer(room4);



}

/*********************************************************************
** Function:~GamePlay
** Description: Destructor
** Parameters: N/A
*********************************************************************/
GamePlay::~GamePlay()
{
	
	delete(room1);
	delete(room2);
	delete(room3);
	delete(room4);
	delete(room5);
	
}

/*********************************************************************
** Function: startGame
** Description: Starts the Game
** Parameters: 
*********************************************************************/
void GamePlay::startGame()
{

	room1->text();

}

/*********************************************************************
** Function: openingText
** Description: Introduces the scene for the game
** Parameters: N/A
*********************************************************************/
void GamePlay::openingText()
{

	cout << "\n" "You have just spent all of your Sunday at Portland\'s Saturday Market.You stayed\n";
	cout << "late even as some stalls were packing up, and now you are walking back to find the\n";
	cout << "SmartPark where you parked your car.\n";
	cout << "The woven basket that holds all your purchases is growing heavier on your arm\n";
	cout << "(it is stuffed full--perhaps only room to carry a few more items at best) and\n";
	cout << "you stop to redistribute the weight. When you look back up and start to walk\n";
	cout << "again, you notice that the street around you is deserted, and oddly, the street\n";
	cout << "now seems unfamiliar. You shake off the strangeness, certain as you turn the\n";
	cout << "corner you will see the parking garage ahead, when suddenly the ground\n";
	cout << "beneath you gives way...\n";

	cout << "     -----------------------------~------------------------------------------     \n";

	startGame();
	
}
