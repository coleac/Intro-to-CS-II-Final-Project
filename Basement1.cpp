/*********************************************************************
** Program Filename: Basement1.cpp
** Author: Aalon Cole colea@oregonstate.edu
** Date: 8/7/2016
** Description: This is the Basement1 subclass function implementation file
*********************************************************************/
#include "Basement1.hpp"
#include "Basement1Door.hpp"
#include "OpiumDen.hpp"
#include "Newspaper.hpp"

/*********************************************************************
** Function: ~Basement1
** Description: Destructor
** Parameters: None
*********************************************************************/
Basement1::~Basement1()
{

}

/*********************************************************************
** Function: special
** Description: CRIMP word jumble- User must unscramble letters CIMPR
to form CRIMP. Options are CMIPR, CPMIR CRIMP and CRIPM
** Parameters: none
*********************************************************************/
void Basement1::special()
{
	cout << "     -----------------------------~------------------------------------------     \n";
	cout << "\n" "Up close you can see the glowing is coming from 5 letters on 5 different\n";
	cout << "bricks in the wall: C - I - M - P - R. You touch the letter closest to\n";
	cout << "you, the C, to see what is causing the glow, and at your touch the brick\n";
	cout << "recedes into the wall. You touch the next closest, the I, and the C\n";
	cout << "brick pops back out. Oh, no. Wrong one.\n\n";
	cout << "What is the right combination?\n\n";
	
	do
	{
		cout << "Choose 1 if you think it is CMIPR\n";
		cout << "Choose 2 if you think it is CPMIR\n";
		cout << "Choose 3 if you think it is CRIMP\n";
		cout << "Choose 4 if you think it is CRIPM\n";

		cin >> answer;

		if (answer < 1 || answer > 4)
		{
			cout << "Please enter a number from 1-4:" << endl;
			cin >> answer;
		}
		if (answer != 3)
			cout << "Nope.\n\n" << endl;
		else
		{
			cout << "\n" "That\'s it! From the brick wall a jagged seam appears.  A hidden door!\n";
			cout << "You have solved it! Why is that word familiar? That\'s right! They sang\n";
			cout << "about it in that musical your friends dragged you to that weekend in\n";
			cout << "Astoria: \"Shanghaied in Astoria.\" It was about men back in the 1800s\n";
			cout << "who would be gotten drunk or drugged, then kidnapped. Who, when they\n";
			cout << "woke up, found themselves at sea, bound to serve due to a forged contract\n";
			cout << "and forced to work off a debt they had incurred for their provisions while\n";
			cout << "at sea.\n";
			cout << "\n" "\"Crimping\" had also happened in Portland hadn\'t it? Except they have the\n";
			cout << "walking tours of the \"Underground\" and Astoria has that ridiculous musical.\n";
		}
	} while (answer != 3);
}

/*********************************************************************
** Function: text
** Description: Start of game text to CRIMP (special) function
** Parameters: none
*********************************************************************/
void Basement1::text()
{
	if (counter == 0)
	{

		cout << "\n" "You take a few moments to collect yourself and then open your eyes.\n";
		cout << "You are on your back on the dirt floor of what must be a basement. Next\n";
		cout << "to you on the ground you see a crushed Starbucks cup, a Zippo lighter from\n"; 
		cout << "Spirit Mountain Casino, the top half of a Voodoo Doughnut voodoo doll doughnut\n";
		cout << "and the broken pieces of the concrete and glass block sidewalk that you had been\n";
		cout << " walking on. (You always knew those glass blocks weren\'t to be trusted!)\n";
		
		cout << "Otherwise the space is bare. In the light coming from the hole you can see\n";
		cout << "that a short distance away is a wooden staircase leading to a door. To the left\n";
		cout << "of the stairs is a brick wall that seems to glow, to the right an alcove, and in\n";
		cout << "front of you, a brick wall covered in newspaper.\n\n";
		cout << "A bit dazed but unhurt you get up. You soon discover the hole is too high to\n";
		cout << "climb out of.\n\n";

		do
		{
			cout << "\n" "What would you like to do? \n";
			cout << "Choose 1 to Attempt to get attention from passers-by\n";
			cout << "Choose 2 to Go to the basement door\n";
			cout << "Choose 3 to Go to the glowing wall\n";
			cout << "Choose 4 to Go to the alcove\n";
			cout << "Choose 5 to Go to the wall covered in newspaper\n";
			cout << "Choose 6 to Pick up the Zippo lighter from Spirit Mountain Casino\n";
			cout << "Choose 7 to Pick up the top half of a Voodoo Doughnut voodoo doll doughnut\n";
			cout << "Choose 8 to Exit Game\n";
			
			cin >> choice1;

			while (choice1 < 1 || choice1 > 8)
			{
				cout << "Please enter a number from 1-8:" << endl;
				cin >> choice1;
			}

			if (choice1 == 1)
			{
				cout << "\n" "You holler for help. And holler and holler. And after about half an hour\n";
				cout << "you give up, hoarse and with a crick in your neck.\n\n";

				cout << "     -----------------------------~------------------------------------------     \n";
			}
			else if (choice1 == 2)
			{
				cout << "\n" "You climb the stairs and try the door. It is locked. The hinges and knob\n";
				cout << "are rusty - it looks like it hasn\'t been used in some time. Still, you\n";
				cout << "pound on the door until your fist aches. Suddenly the door opens!\n";

				PseudoRoom *pRoom1;
				pRoom1 = new Basement1Door();
				pRoom1->text();
				delete(pRoom1);
			}

			else if (choice1 == 3)
			{
				special();
				PseudoRoom* pRoom2;
				pRoom2 = new OpiumDen();
				pRoom2->text();
				delete(pRoom2);
				
			}

			else if (choice1 == 4)
			{
				counter++;
				next->text();//move to Passageway
			}

			else if (choice1 == 5)
			{
				PseudoRoom* pRoom3;
				pRoom3 = new Newspaper();
				pRoom3->text();
				delete (pRoom3);
				
			}

			else if (choice1 == 6)
			{
				
				if (counter1 == 0)
				{
					basket->push(lighter);
					cout << "(You have added the lighter to your basket.)\n";
					counter1 ++;
				}
				else
					cout << "You already have this item.\n";
			}

			else if (choice1 == 7)
			{
				if (counter2 == 0)
				{	
					basket->push(doughnut);
					cout << "(You have added the doughnut to your basket.)\n";
					counter2 ++;
				}
				else
					cout << "You already have this item.\n";
			}

		} while (choice1 != 8);
		
	}
	else
		text2();
}

/*********************************************************************
** Function: text2
** Description: Return to the 1st Basement (Presence of Rope is Magic)
** Parameters: none
*********************************************************************/
void Basement1::text2()
{	
	int choice1;
	do
	{
		cout << "\n" "You take a few moments to collect yourself and then open your eyes.\n";
		cout << "You are on your back on the dirt floor of what must be a basement. Next\n";
		cout << "to you on the ground you see a crushed Starbucks cup...\n\n";

		cout << "NO! NO! NO!\n\n";

		cout << "Okay...Just the cup. And the lighter. Your lighter. Well, the lighter.\n";
		cout << "No doughnut. No chunks of sidewalk. Wait that’s not right. You look up\n";
		cout << "and there is no hole. The ceiling, sidewalk, whatever, is whole. Light from\n";
		cout << "a streetlight is coming through the little glass blocks.\n";
		cout << "You grab the lighter and get up.\n\n";

		cout << "You are in the 1st BASEMENT. What would you like to do? \n";


		cout << "Choose 1 to Go to the Basement Door\n";
		cout << "Choose 2 to Go to the Passageway\n";
		cout << "Choose 3 to Go to the Glowing wall\n";
		cout << "Choose 4 to Go to the Wall covered in newspaper\n";

		cin >> choice1;

		while (choice1 < 1 || choice1 > 4)
		{
			cout << "Please enter a number from 1-4:" << endl;
			cin >> choice1;
		}

		if (choice1 == 1)
		{
			PseudoRoom* pRoom1;
			pRoom1 = new Basement1Door();
			pRoom1->text();
			delete (pRoom1);

		}
		else if (choice1 == 2)
		{
			next->text();//move to Passageway
		}

		else if (choice1 == 3)
		{
			PseudoRoom* pRoom2;
			pRoom2 = new OpiumDen();
			pRoom2->text();
			delete (pRoom2);
		
		}

		else if (choice1 == 4)
		{
			PseudoRoom* pRoom3;
			pRoom3 = new Newspaper();
			pRoom3->text();
			delete (pRoom3);

		}
	} while (choice1 != 2);
}

/*********************************************************************
** Function: setUpPointer
** Description: Sets Derived Room Pointers
** Parameters:  Room *name
*********************************************************************/
void Basement1::setUpPointer(Room* name)
{
	up = name;
}

/*********************************************************************
** Function: setDownPointer
** Description: Sets Derived Room Pointers
** Parameters:  Room *name
*********************************************************************/
void Basement1::setDownPointer(Room* name)
{
	down = name;
}

/*********************************************************************
** Function: setPrevPointer
** Description: Sets Derived Room Pointers
** Parameters:  Room *name
*********************************************************************/
void Basement1::setPrevPointer(Room* name)
{

	prev = name;

}

/*********************************************************************
** Function: setNextPointer
** Description: Sets Derived Room Pointers
** Parameters:  Room *name
*********************************************************************/
void Basement1::setNextPointer(Room* name)
{
	next = name;

}