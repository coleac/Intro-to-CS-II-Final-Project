/*********************************************************************
** Program Filename: Basement2.cpp
** Author: Aalon Cole colea@oregonstate.edu
** Date: 8/7/2016
** Description: This is the Basement2 subclass function implementation file
*********************************************************************/
#include <iostream>
#include <string>
#include "Basement2.hpp"
#include "Basement2Door.hpp"
#include "SnakeEyes.hpp"

/*********************************************************************
** Function: ~Basement2
** Description: Destructor
** Parameters: None
*********************************************************************/
Basement2::~Basement2()
{

}

/*********************************************************************
** Function: special
** Description: SnakeEyes Game
** Parameters: none
*********************************************************************/
void Basement2::special()
{
	cout << "You pick up the dice.\n";
	basket->push(dice);
	cout << "\n" "(You have added the dice to your basket.)\n\n";

	bool winner = false;
	while (winner == false)
	{
		for (int c = 0; c < 20; c++)
		{
			int a = rand() % 6 + 1;
			int b = rand() % 6 + 1;
			cout << "Your roll is " << a << " and " << b << ".\n";
			if (a + b == 2)
			{
				c = c + 19;
				cout << "\n" "Congratulations, Snake Eyes! You get to Live!\n";
				winner = true;
			}
		}
		if (winner == false)
		{
			cout << "\n" "Too bad. No Snake Eyes.\n";
			cout << "The alcove you entered through begins to shake and collapse\n";
			cout << "in on itself.  Looks like you'll have all the time in the world,\n";
			cout << "or at least what's left of your world, to get those Snake Eyes!\n";

			cout << "\n" "GAMEOVER\n\n";

			cout << "Choose 1 to End the Game- BE HONEST \n";

			cout << "If you are a TA, That\'s okay. Let\'s skip ahead, shall we? \n";

			cout << "Choose 2 to Move Along\n";


			cin >> choice1;

			while (choice1 < 1 || choice1 > 2)
			{
				cout << "Please enter a number from 1-2:" << endl;
				cin >> choice1;
			}

			if (choice1 == 1)
			{
				exit(0);
			}
			else if (choice1 == 2)
			{
				winner = true;
			}
		}
	}
}

/*********************************************************************
** Function: text
** Description: Start of Basement2 to Snake Eyes
** Parameters: none
*********************************************************************/
void Basement2::text()
{
	cout << "     -----------------------------~------------------------------------------     \n\n";
	cout << "You find yourself in the SECOND BASEMENT. Another staircase leading to another\n";
	cout << "basement door. This basement seems to currently be in use. Well \'currently\'\n";
	cout << "might not be the right word. You see neatly stacked wooden crates, burlap\n";
	cout << "bags and large barrels. No cardboard boxes, no plastic and no logos on anything.\n";
	cout << "Strange. You see a crowbar on one of the crates and out of curiosity, you open\n";
	cout << "the crate it was sitting on. Inside you find coarse woolen grey blankets. Very\n";
	cout << "drab.\n";

	cout << "You walk up the stairs to the basement door. The hinges look well-oiled and the\n";
	cout << "knob is shiny from use. You turn the knob. It opens! Jubilant you walk through\n";
	cout << "the door...\n";

	PseudoRoom *pRoom6;
	pRoom6 = new Basement2Door();
	pRoom6->text();
	delete (pRoom6);


	cout << "You return to the stairs to find the basement door firmly closed. You decide\n";
	cout << "to let it be and instead you search the perimeter of the room hoping to find\n";
	cout << "another exit.\n";

	PseudoRoom *pRoom7;
	pRoom7 = new SnakeEyes();
	pRoom7->text();
	delete (pRoom7);

	int choice1;
	cout << "\n" "What would you like to do?\n";

	cout << "Choose 1 to Pick up the dice and try to roll \"Snake Eyes\"\n";
	cout << "Choose 2 to Continue Looking Around the 2nd Basement\n";

	cin >> choice1;

	while (choice1 < 1 || choice1 > 2)
	{
		cout << "Please enter a number from 1-2:" << endl;
		cin >> choice1;
	}

	if (choice1 == 1)
		special();
	else
	{
		cout << "\n" "You look around the room for another hour. You then grab one of the wool\n";
		cout << "blankets, wrap it around yourself, sit down on the lowest stair, open up\n";
		cout << "the bag of KettleCorn you had purchased as a gift for you mother and eat\n";
		cout << "the whole bag. Then, with sticky fingers, you re-think trying the dice\n";
		cout << "roll.\n\n";

		cout << "     -----------------------------~------------------------------------------     \n";

		special();
	}

	cout << "\n" "You glance up hopeful. There, where before there was solid brick is an arched\n";
	cout << "doorway! You throw the dice down.\n";

	basket->pop(dice);
	cout << "(You have removed the dice from your basket.)\n";

	cout << "\n" "You climb on top of the crate, shine your lighter into the darkness and see\n";
	cout << "stairs... going down. You let out a deep sigh, pull yourself through the wall\n";
	cout << "and head down the stairs.\n\n";

	next->text();//move to Stairway

}

/*********************************************************************
** Function: getPrevTo
** Description: Returns prev pointer
** Parameters: none
*********************************************************************/
Room* Basement2::getPrevTo()
{
	return prev;
}

/*********************************************************************
** Function: setUpPointer
** Description: Sets Derived Room Pointers
** Parameters:  Room *name
*********************************************************************/
void Basement2::setUpPointer(Room* name)
{
	up = name;
}

/*********************************************************************
** Function: setDownPointer
** Description: Sets Derived Room Pointers
** Parameters:  Room *name
*********************************************************************/
void Basement2::setDownPointer(Room* name)
{
	down = name;
}

/*********************************************************************
** Function: setPrevPointer
** Description: Sets Derived Room Pointers
** Parameters:  Room *name
*********************************************************************/
void Basement2::setPrevPointer(Room* name)
{
	prev = name;
}

/*********************************************************************
** Function: setNextPointer
** Description: Sets Derived Room Pointers
** Parameters:  Room *name
*********************************************************************/
void Basement2::setNextPointer(Room* name)
{
	next = name;

}