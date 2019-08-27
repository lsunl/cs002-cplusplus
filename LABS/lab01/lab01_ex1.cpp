/*********************************************************
*  AUTHOR       : Laura Sun
*  LAB #1       : Exercise 1
*  CLASS        : CS002
*  SECTION      : MTTHF: 7:00a –12p
*  Due Date     : 6/24/19
*********************************************************/

#include <iostream>
#include <string>
using namespace std;

/***********************************************************
* LAB EXERCISE 1
*_________________________________________________________
*
* This program takes in two values and does math to them
*_________________________________________________________
*
* Inputs: number 1 and number 2
* Outputs: adds, subtracts, divides and multiplies the two numbers
* 
***********************************************************/


int main ()
{
	// Declarations
	
	int num1;		// INPUT - first value to take in
	int num2;		// INPUT - second value to take in
	
	// INPUT -- prompt user for values
	cout << "Enter the first integer: \n";
	cin >> num1;
	cout << "Enter the second integer: \n";
	cin >> num2;
	
	// PROCESSING AND OUTPUT -- calculate values and output 
	cout << num1 << " + " << num2 << " = " <<( num1 + num2) << "\n";
	cout << num1 << " * " << num2 << " = " <<( num1 * num2) << "\n";
	cout << num1 << " / " << num2 << " = " <<( num1 / num2) << "\n";
	cout << num1 << " % " << num2 << " = " <<( num1 % num2) << "\n";
	
	return 0;
}
