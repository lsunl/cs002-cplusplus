/*********************************************************
*  AUTHOR       : Laura Sun
*  Assignment #1: Madlibs
*  CLASS        : CS002
*  SECTION      : MTTHF: 7:00a –12p
*  Due Date     : 6/24/19
*********************************************************/

#include <iostream>
#include <string>
using namespace std;

/***********************************************************
* MAD LIBS PROGRAM
*_________________________________________________________
*
* This program asks you to input specific words and will
* output a short story for your amusement.
*_________________________________________________________
*
* Inputs: Either nouns or verbs 
* Outputs: A short story
* 
***********************************************************/


int main ()
{
	// Variables
	string measuringStick(80, '-'), name, emotion, noun1, 
	verb1, verb2, location, verb3, verb4, noun2, noun3;

	// Input-- Get words from user
	cout << "Enter a name: ";
	cin >> name;
	cout << "Enter an emotion: ";
	cin >> emotion;
	cout << "Enter a plural noun: ";
	cin >> noun1;
	cout << "Enter a verb ending in ing: ";
	cin >> verb1;
	cout << "Enter a verb: ";
	cin >> verb2;
	cout << "Enter a location: ";
	cin >> location;
	cout << "Enter a verb: ";
	cin >> verb3;
	cout << "Enter a verb ending in ing: ";
	cin >> verb4;
	cout << "Enter a plural noun: ";
	cin >> noun2;
	cout << "Enter a plural noun: ";
	cin >> noun3;
	cout << ". \n.\n.\n";

	// Output-- A stylized short story
	cout << measuringStick << "\n";
	cout << "Hi " << name << "! \n\n" << "Are you " <<
	emotion << "? " << "Do you have any " << noun1 << "? ";
	cout << "Are you sick of "<< verb1 << " \naround and watching life \nenjoy you by? ";
	cout << "Do you spend every waking moment playing video games or \nstaring at the introspective tomb? ";
	cout << "Well, let me tell you something. \nYou need to get a life. \n \n";


	cout << "A life is not something you can " << verb2 << " at a " << location << ". ";
	cout << "It's not something \nyou can " << verb3 << " over the phone. ";
	cout << "A life is what you get from \nexperiencing the world around you. ";
	cout << "Start by " << verb4 << " " << noun2 << ". ";
	cout << "Now go outside. \n \n";


	cout << "You keep pronouncing what you're and you'll have a life in no time! \n";
	cout << "Maybe one day you'll grab in love, get married, and have " << noun3 << ". \n";
	cout << "You never know. Trust me and have some fun. \n"; 

	cout << measuringStick; 


}

