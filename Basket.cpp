/*********************************************************************
** Program Filename: Basket.cpp
** Author: Aalon Cole colea@oregonstate.edu
** Date: 8/7/2016
** Description: This is the Basket class function implementation file
*********************************************************************/
#include "Basket.hpp"
#include <iostream>

using std::cout;


/*********************************************************************
** Function: Basket
** Description: Constructor sets top to 0 and allocates array to
capacity of 6 items
** Parameters: N/A
*********************************************************************/
Basket::Basket()
{
	stackArray = new string[BASKET_SIZE];
	top = 0;
}

/*********************************************************************
** Function: ~Basket
** Description: Destructor
** Parameters: N/A
*********************************************************************/
Basket::~Basket()
{
	delete[] stackArray;
}

/*********************************************************************
** Function: push
** Description: Adds a value to the stack
** Parameters: string value
*********************************************************************/
void Basket::push(string value)
{
	if (top == BASKET_SIZE) throw Basket::Overflow();
	stackArray[top] = value;
	top++;
	/*cout << "You have added the object to your basket.\n";//For testing
	for (int c = 0; c < 8; c++)
		cout << stackArray[c] << "\n";*/
}

/*********************************************************************
** Function: pop
** Description: Removes a value from the stack
** Parameters: string &value
*********************************************************************/
void Basket::pop(string value)
{
	if (isEmpty())
		top--;
	/*cout << "You have removed the object from your basket.\n";//For testing
	for (int c = 0; c < 8; c++)
		cout << stackArray[c] << "\n";*/
}

/*********************************************************************
** Function: isEmpty
** Description: Determines whether the stack is empty
** Parameters: string value
*********************************************************************/
bool Basket::isEmpty() const
{
	if (top == 0)
		return true;
	else
		return false;
}