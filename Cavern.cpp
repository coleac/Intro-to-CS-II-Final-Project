/*********************************************************************
** Program Filename: Cavern.cpp
** Author: Aalon Cole colea@oregonstate.edu
** Date: 8/7/2016
** Description: This is the Cavern subclass function implementation file
*********************************************************************/
#include "Room.hpp"
#include "Cavern.hpp"
#include "Outside1885.hpp"
#include "Penitentiary.hpp"
#include "Outside2016.hpp"

/*********************************************************************
** Function: ~Cavern
** Description: Destructor
** Parameters: None
*********************************************************************/
Cavern::~Cavern()
{

}

/*********************************************************************
** Function: special
** Description: Open Crate
** Parameters: int answer
*********************************************************************/
void Cavern::special()
{
	cout << "     -----------------------------~------------------------------------------     \n";
	cout << "You pick up a good-sized rock and smash into the crate. The wood breaks.\n";
	cout << "You hit it again and again, feeling better with every smash. Finally, you\n";
	cout << "stop and take a look at the contents. Inside is a copy of a book \"Thirteen\n";
	cout << "Years In The Oregon Penitentiary\" by Joseph Kelly, some moldy letters, a\n";
	cout << "photograph of a man standing in front of a hotel, and a portrait of the same\n";
	cout << "man with two boys. You go to pick up the book and as soon as you touch it\n";
	cout << "you see in front of you a prison cell and...\n";
}

/*********************************************************************
** Function: text
** Description: Start of Cavern to Need Cigar-Store Indian
** Parameters: none
*********************************************************************/
void Cavern::text()
{
	if (counter == 0)
	{
		cout << "     -----------------------------~------------------------------------------     \n\n";
		cout << "You are in the CAVERN. You are in a damp, rocky cavern. You extinguish your\n";
		cout << "lighter because the cavern is illuminated by lanterns set up by the\n";
		cout << "entrance. You cannot tell if any light is also managing to come thru the\n";
		cout << "opening to the cavern as most of it is being blocked by the huge man who is\n";
		cout << "currently walking in through the hole and looking directly at you.\n";

		cout << "\"You\'re a man short Kelly. If you don\'t get another \'fore sunup you\'ll be\n";
		cout << "fillin\' the post!\" Then the man turns around and... yes--He just disappeared.\n";
		cout << "That\'s what that was. Ready to be done with this night, you head for the\n";
		cout << "entrance and walk out into the haze to go find your car.\n";
		cout << "     -----------------------------~------------------------------------------     \n";

		PseudoRoom *pRoom10;
		pRoom10 = new Outside1885();
		pRoom10->text();
		delete (pRoom10);
		
		
		cout << "You wander around the cavern dazed. It's all just rocks and seagull guano.\n";
		cout << "Lots of guano. After a short time, partly covered by some of the rocks, you\n";
		cout << "find a crate. It is wet, but surprisingly, not covered in guano.\n\n";


		cout << "What would you like to do?\n";

		cout << "Choose 1 to Just leave the Crate be\n";
		cout << "Choose 2 to Break into the Crate\n";

		cin >> choice1;

		while (choice1 < 1 || choice1 > 2)
		{
			cout << "Please enter a number from 1-2:" << endl;
			cin >> choice1;
		}

		if (choice1 == 1)
		{
			cout << "Just kidding...you are breaking into it!\n";
			special();
		}
		else
			special();

		PseudoRoom *pRoom11;
		pRoom11 = new Penitentiary();
		pRoom11->text();
		delete (pRoom11);

		cout << "     -----------------------------~------------------------------------------     \n\n";
		cout << "Suddenly you are back in the CAVERN. Joe. Joseph Kelly. The big man\n";
		cout << "called you Kelly. You touch the book again, but nothing happens. You\n";
		cout << "flip through the book, but it is all about Kelly\'s stay in the\n";
		cout << "penitentiary in the 1900s, nothing more. You try to look through the\n";
		cout << "letters but they just fall apart in your hands. You grab the newspaper\n";
		cout << "from your basket. Although old, it isn\'t wet and you are able to page\n";
		cout << "through it. There, almost so small one could miss it, is mention of a\n";
		cout << "\"Cigar-Store Indian\" being found by the \"Finn\" salmon fishermen in\n";
		cout << "Astoria. It had been dumped overboard by sailors after being found in\n";
		cout << "one of the ship\'s bunks. Seems Kelly had earned $50 and the nickname\n";
		cout << "\"Bunko\" from this stunt after passing the statue off as a drunk recruit.\n\n";
		cout << "     -----------------------------~------------------------------------------     \n";

		do
		{
			cout << "What would you like to do?\n";

			cout << "Choose 1 to Stay and read Kelly\'s book\n";
			cout << "Choose 2 to See if there is a Cigar-Store Indian in that 2nd Basement mess\n";

			cin >> choice2;

			while (choice2 < 1 || choice2 > 2)
			{
				cout << "Please enter a number from 1-2:" << endl;
				cin >> choice2;
			}

			if (choice2 == 1)
			{
				cout << "\n" "Sure. Enjoy your book and then enjoy your scurvy and life at sea.\n";
				cout << "Try again.\n\n";
			}
			else
			{
				counter++;
				prev->text();//move to Stairway
			}
		} while (choice2 != 2);
	}
	else
		text2();
}

/*********************************************************************
** Function: text2
** Description: Return to Cavern to Crimp Cigar-Store Indian
** Parameters: none
*********************************************************************/
void Cavern::text2()
{
	cout << "     -----------------------------~------------------------------------------     \n\n";
	cout << "\n" "You are in the CAVERN. You see the lanterns are still burning but coming\n";
	cout << "through the entrance is a very pale light. Dawn\'s light. You hurry your\n";
	cout << "pace. Just as you reach the entrance so does the giant man.\n\n";

	cout << "\"Just comin\' to get ya Kelly, \" he says. \"Aren\'t you lucky,\" he continues,\n";
	cout << "looking at the figure in the tarpaulin. He turns and gestures to two men\n";
	cout << "outside the cavern. \"Nah, he\'s a biggun\',\" you hear him say and the two men\n";
	cout << "come in, each take an end of your Cigar-Store Indian, and head with it out the\n";
	cout << "entrance.\n\n";
	cout << "\"Here,\" the man says, shoving a wad of bills at you. Then he turns and exits.\n";
	cout << "You close your eyes and take a deep breath.\n";

	cout << "When you open your eyes, you notice the cavern is darker--The lanterns are gone!\n";
	cout << "You rush outside.\n";

	PseudoRoom *pRoom12;
	pRoom12 = new Outside2016();
	pRoom12->text();
	delete (pRoom12);
	
}

/*********************************************************************
** Function: getPrevTo
** Description: To get prev room's prev pointer for room exchange
** Parameters: None
*********************************************************************/
Room* Cavern::getPrevTo()
{
	return prev;
}

/*********************************************************************
** Function: setUpPointer
** Description: Sets Derived Room Pointers
** Parameters:  Room *name
*********************************************************************/
void Cavern::setUpPointer(Room* name)
{
	up = name;
}

/*********************************************************************
** Function: setDownPointer
** Description: Sets Derived Room Pointers
** Parameters:  Room *name
*********************************************************************/
void Cavern::setDownPointer(Room* name)
{
	down = name;
}

/*********************************************************************
** Function: setPrevPointer
** Description: Sets Derived Room Pointers
** Parameters:  Room *name
*********************************************************************/
void Cavern::setPrevPointer(Room* name)
{

	prev = name;

}

/*********************************************************************
** Function: setNextPointer
** Description: Sets Derived Room Pointers
** Parameters:  Room *name
*********************************************************************/
void Cavern::setNextPointer(Room* name)
{
	next = name;

}