/*********************************************************************
** Program Filename: Stairway.cpp
** Author: Aalon Cole colea@oregonstate.edu
** Date: 8/7/2016
** Description: This is the Stairway subclass function implementation file
*********************************************************************/
#include "Falling.hpp"
#include "Stairway.hpp"
#include "GarbageBasement.hpp"

/*********************************************************************
** Function: ~Stairway
** Description: Destructor
** Parameters: None
*********************************************************************/
Stairway::~Stairway()
{

}

/*********************************************************************
** Function: special
** Description: Attach Rope
** Parameters: none
*********************************************************************/
void Stairway::special()
{
	cout << "     -----------------------------~------------------------------------------     \n";
	cout << "\n" "You are in the STAIRWAY. You take the stairs down until you reach the hole.\n";
	cout << "You attach the rope to a ceiling beam.\n";

	basket->pop(rope);
	cout << "(You have removed the rope from your basket.)\n";

	cout << "You chuck your basket down the stairs (you have too much glassware anyway,)\n";
	cout << "grab the lighter in one hand and the rope in the other and using the rope\n";
	cout << "for balance, climb along the edge where the frame of the stairs still stands.\n";
	cout << "You make it to the bottom of the hole with only 1 iffy bit and you tie off the\n";
	cout << "rope (just in case!) You continue down the rest of the stairs to find your\n";
	cout << "basket lying next to a yellowed copy of the Oregonian. You briefly glance at it--\n";
	cout << "1885!\n\n";

	do
	{
		cout << "What would you like to do?\n";

		cout << "Choose 1 to Pick up the newspaper\n";
		cout << "Choose 2 to Leave the newspaper\n";
		
		cin >> choice1;

		while (choice1 < 1 || choice1 > 2)
		{
			cout << "Please enter a number from 1-2:" << endl;
			cin >> choice1;
		}
		if (choice1 == 1)
		{
			if (counter1 == 0)
			{
				basket->push(newspaper);
				cout << "(You have added the newspaper to your basket.)\n";
				counter1++;
			}
			else
				cout << "You already have this item.\n";
		}
		else if (choice1 == 2)
		{
			cout << "Come on pick it up. There might be coupons!\n\n";
		}
	
		
	} while (choice1 != 1);
		
		
	cout << "You pick the paper up, and then you head through the doorway.\n\n";

	
	
}

/*********************************************************************
** Function: text
** Description: Start of Stairway to Need Rope
** Parameters: none
*********************************************************************/
void Stairway::text()
{
	if (counter == 0)
	{
		cout << "     -----------------------------~------------------------------------------     \n";
		cout << "You are in the STAIRWAY. The walls are not of brick but are of solid rock.\n";
		cout << "It is noticeably colder. You can hear... what is it you hear? You stop and\n";
		cout << "concentrate. It sounds like seagulls and water hitting rock. Now you hear the\n";
		cout << "creak of ropes and wind hitting sails. And voices! You start again. But you\n";
		cout << "don\'t get very far when you realize there has been some damage and a whole\n";
		cout << "section of the stairs is missing. There is no way you will be able to make it\n";
		cout << "down without something to help you. Maybe there is something in those crates\n";
		cout << "to bridge the gap?\n\n";

		int choice1;

		cout << "What would you like to do?\n";

		cout << "Choose 1 to Go to the 2nd Basement\n";
		cout << "Choose 2 to Try the Jump\n";

		cin >> choice1;

		while (choice1 < 1 || choice1 > 2)
		{
			cout << "Please enter a number from 1-2:" << endl;
			cin >> choice1;
		}

		if (choice1 == 1)
		{
	
			exchangeRooms();
			counter++;
			prev->text();//move to Second Basement

		}
		else
		{
			PseudoRoom* pRoom8;
			pRoom8 = new Falling();
			pRoom8->text();
			delete(pRoom8);
			
		}
	}
	else if (counter == 1)
	{
		special();
		counter++;
		next->text();	//move to Cavern
	}
	else if (counter == 2)
	{
		counter++;
		text2();
	}
	else if (counter == 3)
	{
		counter++;
		text3();
	}
	else
	{
		counter++;
		text4();
	}
}

/*********************************************************************
** Function: text2
** Description: Travel Stairway to 2nd Basement'
** Parameters: none
*********************************************************************/
void Stairway::text2()
{
	cout << "     -----------------------------~------------------------------------------     \n";
	cout << "\n" "You are in the STAIRWAY. You turn on the lighter.\n\n";

	int choice1;

	do
	{
		cout << "What would you like to do?\n";

		cout << "Choose 1 to Go to the 2nd Basement\n";
		cout << "Choose 2 to Go to the Cavern\n";
		cout << "Choose 3 to Quit\n";

		cin >> choice1;

		while (choice1 < 1 || choice1 > 3)
		{
			cout << "Please enter a number from 1-3:" << endl;
			cin >> choice1;
		}

		if (choice1 == 1)
		{
			cout << "\n" "You climb the stairs, unsecure the rope and make your way carefully\n";
			cout << "around the hole, re-secure the rope, and then continue up the stairs.\n\n";
			cout << "     -----------------------------~------------------------------------------     \n";
			prev->text();	//move to 2nd Basement'

		}
		else if (choice1 == 2)
			cout << "You just came from there!\n";
		else
			exit(0);

	} while (choice1 != 1);
}

/*********************************************************************
** Function: text3
** Description: Travel Stairway to 1st Basement
** Parameters: none
*********************************************************************/
void Stairway::text3()
{
	cout << "     -----------------------------~------------------------------------------     \n";
	cout << "You are in the STAIRWAY. Having dragged the Cigar-Store Indian this far you\n";
	cout << "look at the stairs and realize your best bet is probably to just shove it as\n";
	cout << "hard as you can and hope it can carry itself over the gap. You go for it and\n";
	cout << "luckily it works. Something is finally going your way! Next goes the basket.\n";
	cout << "And now your turn. You unsecure the rope and stick to the edge. There\'s that\n";
	cout << "same iffy bit and you\'re falling...\n";
	cout << "     -----------------------------~------------------------------------------     \n";

	down->text();	//move to 1st Basement

}

/*********************************************************************
** Function: text4
** Description: Travel Stairway to Cavern
** Parameters: none
*********************************************************************/
void Stairway::text4()
{
	cout << "\n" "You are in the STAIRWAY. What would you like to do?\n";

	do
	{
		cout << "Choose 1 to Go to the 2nd Basement\n";
		cout << "Choose 2 to Go to the Cavern\n";

		cin >> choice1;

		while (choice1 < 1 || choice1 > 2)
		{
			cout << "Please enter a number from 1-2:" << endl;
			cin >> choice1;
		}

		if (choice1 == 1)
		{
			cout << "\n" "For what? Yeah... I didn't think so!\n";
		}
		else
		{
			cout << "     -----------------------------~------------------------------------------     \n";
			cout << "You catch your breath. The rope is out of reach. It just hangs there\n";
			cout << "like a vine. Okay. Then do it. You count the steps. You will need both\n";
			cout << "hands so you put the lighter away in your pocket. Then before you can\n";
			cout << "give it too much more thought you go. One, two, three, four, jump! You\n";
			cout << "reach out and you catch... nothing! No, wait, there it is! Now you swing\n";
			cout << "and swing and swing and jump!\n\n";

			cout << "So, probably nothing\'s broken. At least, no bones are sticking out. So\n";
			cout << "you grab your basket and you drag your Cigar-Store Indian behind you\n";
			cout << "and you hobble toward the cavern in the dark.\n\n";

			next->text();	//move to Cavern
		}
			
	} while (choice1 != 2);


}

/*********************************************************************
** Function: exchangeRooms
** Description: Delete Basement2 and Add GarbageBasement/Basement2'
** Parameters: None
*********************************************************************/
void Stairway::exchangeRooms()
{
	
	Room *prevOfPrev = prev->getPrevTo();
	
	Room* room6;
	room6 = new GarbageBasement(basket);

	prevOfPrev->setNextPointer(room6);
	room6->setPrevPointer(prev->getPrevTo());
	
	delete(prev);
	prev = room6;

	
	room6->setNextPointer(next->getPrevTo());

}

/*********************************************************************
** Function: setUpPointer
** Description: Sets Derived Room Pointers
** Parameters:  Room *name
*********************************************************************/
void Stairway::setUpPointer(Room* name)
{
	up = name;
}

/*********************************************************************
** Function: setDownPointer
** Description: Sets Derived Room Pointers
** Parameters:  Room *name
*********************************************************************/
void Stairway::setDownPointer(Room* name)
{
	down = name;
}

/*********************************************************************
** Function: setPrevPointer
** Description: Sets Derived Room Pointers
** Parameters:  Room *name
*********************************************************************/
void Stairway::setPrevPointer(Room* name)
{

	prev = name;

}

/*********************************************************************
** Function: setNextPointer
** Description: Sets Derived Room Pointers
** Parameters:  Room *name
*********************************************************************/
void Stairway::setNextPointer(Room* name)
{
	next = name;

}