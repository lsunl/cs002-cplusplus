/*********************************************************
*  AUTHOR       : Laura Sun
*  LAB #1       : Exercise 2
*  CLASS        : CS002
*  SECTION      : MTTHF: 7:00a –12p
*  Due Date     : 6/24/19
*********************************************************/

#include <iostream>
#include <string>
using namespace std;

/***********************************************************
* LAB EXERCISE 2
*_________________________________________________________
*
* This program finds the sum and average of six values
*_________________________________________________________
*
* Inputs: six values
* Outputs: sum and average
* 
***********************************************************/

int main ()
{
	// DECLARATIONS
	double num1;	// INPUT - first value
	double num2;	// INPUT - second value
	double num3;	// INPUT - third value
	double num4;	// INPUT - fourth value
	double num5;	// INPUT - fifth value
	double num6;	// INPUT - sixth value
	double sum;		// CALCULATION - finds total of all values
	double average; // CALCULATION - find average
	
	// INPUT -- asks user for six values separated by spaces
	cout << "Enter six fp numbers on a single line, separated by spaces: \n";
	cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6;
	
	// PROCESSING -- calculate sum and average
	sum = num1 + num2 + num3 + num4 + num5 + num6;
	average = sum/6;
	
	// OUTPUT -- states the sum and average
	cout << "Sum of " << num1 << " + " << num2 << " + " << num3 << " + " 
		 << num4 << " + " << num5 << " + " << num6 <<" = " <<( sum) << "\n";
	cout << "Average = " << average << "\n";

	return 0;
}