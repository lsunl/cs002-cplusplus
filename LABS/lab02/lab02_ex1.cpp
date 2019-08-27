/*********************************************************
*  AUTHOR       : Laura Sun
*  Lab #2		: CHECKSUM
*  CLASS        : CS002
*  SECTION      : MTTHF: 7:00a –12p
*  Due Date     : 6/24/19
*********************************************************/

#include <iostream>
#include <string>

using namespace std;

/***********************************************************
* LAB 002 - ISBN Checksum and character arithmetic
*_________________________________________________________
*
* This program has two parts: 
* 	1. Exercise 1 calculates and outputs this checksum value given 
* 		the first nine digits of the ISBN number, utilizing the checksum 
* 		algorithm.
*	2. Exercise 2 takes in a letter and finds the position of that letter
*		in the alphabet
*_________________________________________________________
*
* Inputs: exercise number
		  execise 1 - isbn 
		  exercise 2 - letter
* Outputs: exercise 1 - checksum
*		   exercise 2 - position of letter 
* 
***********************************************************/

int main ()
{
	// DECLARATIONS
		// EXERCISE 1
	int ex;			// INPUT - exercise number 
	int isbn;		// INPUT - 9 digit code
	int index;		// CALCULATION - for counting purposes
	int value; 		// CALCULATION - calculates value
	int sum; 		// CALCULATION- calculates running sum
	int finalval;	// CALCULATION - uses modelo to get checksum
		// EXERCISE 2
	char letter;	// INPUT - letter
	
	// INITIALIZATIONS
	sum=0;

	// INPUT -- prompt user to select exercise
	cout << "Which exercise? ";
	cin >> ex;
	cout<< endl;
	
	// PROCESSING -- if user selects exercise 1
	if (ex == 1)
	{
		// prompt user for ISBN number
		cout << "Please enter the first 9 digits of the ISBN: ";
		cin >> isbn;
		
		// set index to 10
		index = 10;
		
		// for each digit in isbn
			// use modulo operation and divide by 10 to grab digit
			// count backwards to match the order
			// multiply the digit by index 
			// add the updated digit to running sum
		for(int i=1; i<10; i++)
		{
		 int digit = isbn % 10;
		 isbn /= 10;
		 index -= 1;
		 value = digit * index;
		 sum += value;
		}
		
		// use modulo operation to get checksum
		finalval = (sum % 11);

	// OUTPUT -- checksum
		cout<< "\nChecksum: " << finalval << "\n";
	}

	
	// PROCESSING-- if user selects exercise 2
	else if (ex == 2)
	{
		
		// prompt user for a character
		cout << "Enter a character: \n";
		cin >> letter;
		
		// calculate and output the position of that letter in the alphabet
		cout << letter << " is letter " << (letter - 'a' + 1) << "\n" ;
	}
	return 0;
}