/*********************************************************************
** Program Filename: Basket.hpp
** Author: Aalon Cole colea@oregonstate.edu
** Date: 8/7/2016
** Description: This is the Basket class specification file
*********************************************************************/
#ifndef BASKET_HPP
#define BASKET_HPP

#include <iostream>
#include <string>

using std::string;

class Basement1;
class Basement2;
class GarbageBasement;
class Passageway;
class Stairway;
class Cavern;

//Basket class declaration
class Basket
{
	protected:
		string *stackArray;
		const int BASKET_SIZE = 8;
		int top;

	public:
		Basket(); //Constructor
		~Basket();
		void push(string value);
		void pop(string value);
		bool isEmpty() const;

		//Stack Exceptions
		class Overflow {};

};
#endif
