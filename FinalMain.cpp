/*********************************************************************
** Program Filename: FinalMain.cpp
** Author: Aalon Cole colea@oregonstate.edu
** Date: 8/7/2016
** Description: This is the Final Project main/driver file
*********************************************************************/

#include "GamePlay.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

using std::cin;
using std::cout;



int main()

{
	unsigned seed;
	seed = time(0);
	srand(seed);
	int choice1, answers;

	GamePlay play;

	cout << "Do you want some game advice?\n";

	cout << "Choose 1 for YES\n";
	cout << "Choose 2 for NO\n";
	cout << "Choose 3 to Quit (this may be your LAST CHANCE)\n";

	cin >> choice1;

	while (choice1 < 1 || choice1 > 3)
	{
		cout << "Please enter a number from 1-3:\n";
		cin >> choice1;
	}

	if (choice1 == 1)
	{
		cout << "\n" "1. Be sure to pick up the items in the order they appear in the menu.\n";
		cout << "2. Your basket is already full, and if you do not follow #1, you will run into trouble.\n";
		cout << "3. There are several ways to die and end the game. Don't.\n";
		cout << "4. The game is not timed so there is no need to be aggressive- HINT.\n\n";

		cout << "     -----------------------------~------------------------------------------     \n";
		
		cout << "Choose 1 for specific info on how to cheat death\n";
		cout << "Choose 2 to begin playing\n";


		cin >> answers;

		while (answers < 1 || answers > 2)
		{
			cout << "Please enter a number from 1-2:\n";
			cin >> answers;
		}
			
		if (answers == 1)
		{
			cout << "\n" "Do not attack the rat. Do not try to jump over the hole in the stairs.\n";
			cout << "If you are unlucky, take the Snake Eyes out.\n\n";

			cout << "Press Enter when you are ready to begin.\n";

			cin.ignore();
			cin.get();

			play.openingText();
		}
		else if (answers == 2)
			play.openingText();

	}

	else if (choice1 == 2)
	{
		play.openingText();
	}

	return 0;
}

			