/*********************************************************************
** Program Filename: GarbageBasement.cpp
** Author: Aalon Cole colea@oregonstate.edu
** Date: 8/7/2016
** Description: This is the GarbageBasement subclass function implementation file
*********************************************************************/
#include "GarbageBasementDoor.hpp"
#include "GarbageBasement.hpp"

/*********************************************************************
** Function: ~GarbageBasement
** Description: Destructor
** Parameters: None
*********************************************************************/
GarbageBasement::~GarbageBasement()
{

}

/*********************************************************************
** Function: special
** Description: Cigar-Store Indian- find and remove (Crimp)
** Parameters: int answer
*********************************************************************/
void GarbageBasement::special()
{
	cout << "You are in the 2nd Basement. You look around under the piles of wood and\n";
	cout << "behind the displays and finally under the staircase there it is: a\n";
	cout << "Cigar-Store Indian. Of course there is.\n\n";


	do
	{
		cout << "What would you like to do?\n";

		cout << "Choose 1 to Go to the Passageway\n";
		cout << "Choose 2 to Pick up the Cigar-Store Indian and Go to the Stairway\n";
		cout << "Choose 3 to Go to the Basement Door\n";

		cin >> choice1;

		while (choice1 < 1 || choice1 > 3)
		{
			cout << "Please enter a number from 1-3:" << endl;
			cin >> choice1;
		}

		if (choice1 == 1)
			prev->text();//move to Passageway

		else if (choice1 == 2)
		{
			counter++;
			basket->push(Indian);
			cout << "(You have added the Indian to your basket.)\n";
			next->text();//move to Stairway
		}

		else if (choice1 == 3)
			cout << "Stay on target!\n";

	} while (choice1 != 2);
}

/*********************************************************************
** Function: text
** Description: Entry to Basement door to Passageway
** Parameters: none
*********************************************************************/
void GarbageBasement::text()
{
	if (counter == 0)
	{
		cout << "When you crawl back through the whole in the wall the first thing you notice\n";
		cout << "is that the crate is not there. Strange. You shine the lighter around and\n";
		cout << "notice the room has changed. Drastically.\n";
		cout << "The crates are gone. Any barrels that remain are broken and rusted. On the\n";
		cout << "floor are piles of garbage: empty burlap bags, old newspapers, ragged and\n";
		cout << "torn clothes and stacks of empty glass jars. Old display cases, piles of\n";
		cout << "lumber and rotting bolts of cloth add to the jumble. What a mess! You look\n";
		cout << "around briefly but nothing seems like it can help.\n";
		cout << "You walk up the steps to the basement door. It isn\'t well oiled any longer.\n";
		cout << "But the crates are gone. You wonder if it just a regular door now? You try\n";
		cout << "the handle. It opens! You tentatively walk inside...\n";

		PseudoRoom *pRoom9;
		pRoom9 = new GarbageBasementDoor();
		pRoom9->text();
		delete(pRoom9);

		cout << "Thank goodness none of the jars actually broke. Just bounced and clattered and\n";
		cout << "rolled and made lots of noise. As you are stuffing your belongings back into\n";
		cout << "your basket you finger the rope. It looks like this will have to work. You\n";
		cout << "climb over the display case, look up at the basement door (yep, firmly shut.)\n";
		cout << "and walk back to the stairway.\n";

		counter++;
		next->text();//move to Stairway
	}
	else if (counter == 1)
	{
		special();
	}
	else
		text2();
}

/*********************************************************************
** Function: text2
** Description: Standard 2nd Basement Text
** Parameters: none
*********************************************************************/
void GarbageBasement::text2()
{
	int choice1;
	cout << "\n" "You are in the 2nd BASEMENT. What would you like to do?\n";

	cout << "Choose 1 to Go to the Passageway\n";
	cout << "Choose 2 to Go to the Stairway\n";

	cin >> choice1;

	while (choice1 < 1 || choice1 > 2)
	{
		cout << "Please enter a number from 1-2:" << endl;
		cin >> choice1;
	}

	if (choice1 == 1)
		prev->text();//move to Passageway
	else
		next->text();//move to Stairway
}

/*********************************************************************
** Function: setUpPointer
** Description: Sets Derived Room Pointers
** Parameters:  Room *name
*********************************************************************/
void GarbageBasement::setUpPointer(Room* name)
{
	up = name;
}

/*********************************************************************
** Function: setDownPointer
** Description: Sets Derived Room Pointers
** Parameters:  Room *name
*********************************************************************/
void GarbageBasement::setDownPointer(Room* name)
{
	down = name;
}

/*********************************************************************
** Function: setPrevPointer
** Description: Sets Derived Room Pointers
** Parameters:  Room *name
*********************************************************************/
void GarbageBasement::setPrevPointer(Room* name)
{

	prev = name;

}

/*********************************************************************
** Function: setNextPointer
** Description: Sets Derived Room Pointers
** Parameters:  Room *name
*********************************************************************/
void GarbageBasement::setNextPointer(Room* name)
{
	next = name;

}