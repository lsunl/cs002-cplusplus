/*********************************************************
*  AUTHOR       : Laura Sun
*  Assignment #2: Cash Register
*  CLASS        : CS002
*  SECTION      : MTTHF: 7:00a –12p
*  Due Date     : 6/24/19
*********************************************************/

#include <iostream>
#include <string>
using namespace std;

/***********************************************************
* ASSIGNMENT 2 - CASH REGISTER
*_________________________________________________________
*
* This program simulates a cash register
*_________________________________________________________
*
* Inputs: purchase $, received $
* Outputs: change $
* 
***********************************************************/

int main ()
{
	// DECLARE VARIABLES
	float purchase; // INPUT - take in purchase amount
	float received; // INPUT - amount recieved
	float change;	// CALCULATION - subtract purchase from recieved
	float pennies;	// CALCULATION - number of pennies in change
	int dollars;	// CALCULATION - number of pennies in change
	int quarters; 	// CALCULATION - number of quarters in change
	int dimes; 		// CALCULATION - number of dimes in change
	int nickels;	// CALCULATION - number of nickels in change

	// INITIALIZE VARIABLES
	dollars=0;
	quarters=0;
	dimes=0;
	nickels=0;
	pennies=0;

	// INPUT -- prompt user for purchase amount, recieved amount
	cout << "Enter purchase amount: \n";
	cout << "Enter amount received: \n";
	cin  >> purchase >> received;


	// PROCESSING -- calculate the change
	change = received - purchase;
	pennies = static_cast<int>(change *100 + 0.5);
	
	dollars = pennies / 100;
	pennies -= dollars * 100;

	quarters = pennies / 25;
	pennies -= quarters * 25;


	dimes = pennies / 10;
	pennies -= dimes * 10;

	nickels = pennies / 5;
	pennies -= nickels * 5;


	// OUTPUT -- summary of calculations
	cout << "Total Change: $" << change << "\n\n";
	cout << "dollars " << dollars << "\n";
	cout << "quarters " << quarters << "\n";
	cout << "dimes " << dimes << "\n";
	cout << "nickels " << nickels << "\n";
	cout << "pennies " << pennies << "\n";

}