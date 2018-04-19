/*********************************************************************
** Program Filename: Passageway.cpp
** Author: Aalon Cole colea@oregonstate.edu
** Date: 8/7/2016
** Description: This is the Passageway subclass function implementation file
*********************************************************************/
#include <iostream>
#include "Room.hpp"
#include "Passageway.hpp"
#include "Darkness.hpp"
#include "Rat.hpp"

/*********************************************************************
** Function: ~Passageway
** Description: Destructor
** Parameters: None
*********************************************************************/
Passageway::~Passageway()
{

}

/*********************************************************************
** Function: special
** Description: Feed Doughnut to the Rat
** Parameters: None
*********************************************************************/
void Passageway::special()
{
	cout << "\n" "You approach the rat with the Top Half of Voodoo Doughnut voodoo doll doughnut.\n";
	cout << "\"Here\'s your tribute!\" you yell as you throw the doughnut at the rat\'s feet.\n";
	cout << "Why are you yelling?\n\n";

	basket->pop(doughnut);
	cout << "(You have removed the doughnut from your basket.)\n\n";

	cout << "The rat picks the doughnut up and you notice as it holds it and slowly moves\n";
	cout << "away, watching you as you watch it, that in the rat\'s arms, the head and\n";
	cout << "torso of the voodoo doll looks like a little screaming man. The ambient\n";
	cout << "growling subsides and soon the rat is out of sight.\n";
	
	cout << "You pick the rope back up and tuck it into the basket.\n";

	basket->push(rope);
	cout << "(You have added the rope to your basket.)\n\n";

	cout << "     -----------------------------~------------------------------------------     \n";

}

/*********************************************************************
** Function: text
** Description: Start of Passageway text to return for lighter
** Parameters: none
*********************************************************************/
void Passageway::text()
{
	if (counter == 0)
	{

		cout << "     -----------------------------~------------------------------------------     \n\n";
		cout << "You are at the mouth of the PASSAGEWAY. It is very dark.\n";

		PseudoRoom* pRoom4;
		pRoom4 = new Darkness();
		pRoom4->text();
		delete (pRoom4);

		cout << "You light the lighter. It works! Now that you have light, you see that on ground,\n";
		cout << "half covered by the dirt, there is rope along the length of the passageway\n";
		cout << "as well as several pieces of wood that seem to have fallen from the ceiling\n";
		cout << "and numerous shards of glass from broken bottles.\n\n";

		cout << "     -----------------------------~------------------------------------------     \n";


		do
		{
			cout << "What would you like to do? \n";

			cout << "Choose 1 to Pick up the Rope\n";
			cout << "Choose 2 to Pick up a Piece of Wood\n";
			cout << "Choose 3 to Pick up the Shards of Glass\n";
			cout << "Choose 4 Once you have all Items\n";

			cin >> choice1;

			while (choice1 < 1 || choice1 > 4)
			{
				cout << "Please enter a number from 1-4:" << endl;
				cin >> choice1;
			}

			if (choice1 == 1)
			{
				cout << "You pick up the rope and begin to wind it around your basket.\n";
				cout << "(You have added the rope to your basket.)\n\n";
				if (counter1 == 0)
				{
					basket->push(rope);
					counter1++;
				}
				else
					cout << "You already have this item.\n";
			}

			else if (choice1 == 2)
			{
				cout << "You pick up the Piece of Wood.\n";
				cout << "(You have added the wood to your basket.)\n\n";
				if (counter2 == 0)
				{
					basket->push(wood);
					counter2++;
				}
				else
					cout << "You already have this item.\n";
			}

			else if (choice1 ==3)
				cout << "\n" "Why would you need those? Now you are bleeding!\n\n";

		} while (choice1 != 4);

		cout << "     -----------------------------~------------------------------------------     \n";
		cout << "\n" "You are coming to the end of the passageway when what has to be the largest\n";
		cout << "rat in existence steps right into your path.\n\n";

		cout << "What would you like to do? \n";

		cout << "Choose 1 to Attack the Rat\n";
		cout << "Choose 2 to Find Another Option\n";

		cin >> choice2;

		while (choice2 < 1 || choice2 > 2)
		{
			cout << "Please enter a number from 1-2:" << endl;
			cin >> choice2;
		}

		if (choice2 == 1)
		{

			cout << "\n" "You lift the piece of wood you are holding higher and approch the rat.\n";
			cout << "Suddenly there are rats everywhere. They are coming like waves across\n";
			cout << "the floor, down from the wooden rafters and seemingly through the very\n";
			cout << "walls. You turn and try to make your way back to the basement but you trip\n";
			cout << "over rat bodies and you fall on rat bodies and are soon covered in rat\n";
			cout << "bodies. So many bites! The pain is everywhere...\n";

			cout << "\n" << "GAME OVER\n";
			exit(0);
		}
			
		else
		{
			PseudoRoom* pRoom5;
			pRoom5 = new Rat();
			pRoom5->text();
			delete (pRoom5);

			cout << "\n" "First you slowly put down the Wood--No need to seem threatening.\n";
			cout << "(You have removed the wood from your basket.)\n\n";
			basket->pop(wood);
			
			cout << "\n" "Then you remove the Rope from your basket so you can get a look inside.\n";
			cout << "(You have removed the rope from your basket.)\n";
			basket->pop(rope);

			cout << "\n" "The first thing you see is the doughnut you found in the basement.\n";
			
			special();

			do
			{
				cout << "\n" "What would you like to do? \n";

				cout << "Choose 1 to Go to the 1st Basement\n";
				cout << "Choose 2 to Go to the 2nd Basement\n";

				cin >> choice3;

				while (choice3 < 1 || choice3 > 2)
				{
					cout << "Please enter a number from 1-2:" << endl;
					cin >> choice3;
				}

				if (choice3 == 1)
				{

					cout << "\n" "You just came from there!\n\n";
				}

				else if (choice3 == 2)
				{
					counter++;
					next->text();//move to 2nd Basement
				}
			} while (choice3 != 2);
		}
	}
	else 
		text2();

}
/*********************************************************************
** Function: text2
** Description: Passageway text for return to Cavern
** Parameters: none
*********************************************************************/
void Passageway::text2()
{
	do
	{	
		cout << "\n" "You are in the PASSAGEWAY. What would you like to do? \n";

		cout << "Choose 1 to Go to the 1st Basement\n";
		cout << "Choose 2 to Go to the 2nd Basement'\n";

		cin >> choice1;

		while (choice1 < 1 || choice1 > 2)
		{
			cout << "Please enter a number from 1-2:" << endl;
			cin >> choice1;
		}
		if (choice1 == 1)
			cout << "\n" "Why are you coming all the way back here ?!?!\n";

		else
		{
			next->text();//move to Garbage Basement
		}
	} while (choice1 != 2);
}

/*********************************************************************
** Function: setUpPointer
** Description: Sets Derived Room Pointers
** Parameters:  Room *name
*********************************************************************/
void Passageway::setUpPointer(Room* name)
{
	up = name;
}

/*********************************************************************
** Function: setDownPointer
** Description: Sets Derived Room Pointers
** Parameters:  Room *name
*********************************************************************/
void Passageway::setDownPointer(Room* name)
{
	down = name;
}

/*********************************************************************
** Function: setPrevPointer
** Description: Sets Derived Room Pointers
** Parameters:  Room *name
*********************************************************************/
void Passageway::setPrevPointer(Room* name)
{

	prev = name;

}

/*********************************************************************
** Function: setNextPointer
** Description: Sets Derived Room Pointers
** Parameters:  Room *name
*********************************************************************/
void Passageway::setNextPointer(Room* name)
{
	next = name;

}