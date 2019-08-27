/*********************************************************
*  AUTHOR       : Laura Sun
*  LAB #1       : Exercise 3
*  CLASS        : CS002
*  SECTION      : MTTHF: 7:00a –12p
*  Due Date     : 6/24/19
*********************************************************/

#include <iostream>
#include <string>
using namespace std;

/***********************************************************
* LAB EXERCISE 3
*_________________________________________________________
*
* This program calculates your target heart rate based on age
*_________________________________________________________
*
* Inputs: age 
* Outputs: target heart rate
* 
***********************************************************/

int main ()
{
	// Declarations
	double age;		// INPUT - first value to take in
	double lbpm;	// CALCULATION - lower beats per min
	double ubpm;	// CALCULATION - upper beats per min
	
	
	// INPUT -- get age from user
	cout << "What is your age: \n";
	cin  >> age;
	
	// PROCESSING -- calculate the lower beats per min and upper beats per min
	lbpm = (220 - age)*.6;
	ubpm = (220 - age)*.75;
	
	// OUTPUT -- output the target heart rate
	cout << "Your target heart rate is between " 
	     << lbpm << " and " << ubpm << " bpm.\n";
	
	return 0;
}
