/**************************************************************************
 * Author    		:  Laura Sun
 * Lab 004    		:  
 * CLASS     		:  CS 002
 * SECTION   		:  MTRF: 7a - 12p
 * Due Date 		:  6/25/19
 *************************************************************************/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;
/**************************************************************************
 *
 * chars of a string, modifying a string, looking for stuff
 * ________________________________________________________________________
 * This program has three parts:
 * Part 1: Counts 'e' and 'x'
 * Part 2: Replaces 'e', 'x', and 'i' with '3', '*', and '1'
 * Part 3: Takes in a sentence and checks if '.' and/or the string 'stop' 
 * 			is in the sentence. Then it outputs the index.
 * ________________________________________________________________________
 * Part 1:
 * 	Input: word
 * 	Output: string that lets you know if 'x' or 'e' is in the word
 *		
 * Part 2: 
 * 	Input: word
 *  Output: newly converted string
 *
 * Part 3:
 * 	Input: sentence
 *  Output: string that tells you whether '.' is in the sentence OR
 *			string that tells you where '.' is indexed AND
 * 			string that tells you whether 'stop' is in the sentence OR
 * 			string that tells you where 'stop' is indexed
 *
 *************************************************************************/ 
 
int main()
{
	// DECLARATIONS
    int ex; 		// INPUT EXERCISE NUMBER
	
	//PROMPT USER
    cout << "Which exercise: ";
    cin >> ex;
    cout << endl;
    
	//PROCESSING EXERCISE 1
    if ( ex == 1 )

    {
		// DECLARATIONS
        int x, length, count1, count2;
		string word, ch;
		
		// INITIALIZATION
        count1 = 0;
        count2 = 0;

        // PROMPT USER
        cout << "Enter a word: ";
        cin >> word;
        cout << endl;
        length = word.size();
        

        for (x = 0; x < length; x++){
            char ch = word.at(x);
            
            if (ch == 'x'){
                
                count1++;}
            
            else if (ch == 'e'){
                
                count2++;
            }
        }
        if (count2 != 0)
        {
            cout << "Your word " << word << " contains the character 'e'" << endl;
        }
        if (count1 != 0)
        {
            cout << "Your word " << word << " contains the character 'x'" << endl;
        }
        
        
        
    }
    
    // PROCESSING EXERCISE 2
    if (ex == 2) {
        
        int x, length;
        string word;
        
        cout << "Enter a word: ";
        cin >> word;
        cout << endl;
        cout << "Your word transformed is ";
        length = word.size();
        
        for (x = 0; x < length; x++){
            
            char ch = word.at(x);
            
            if (ch == 'i') {
                ch = '1';
            }
            else if (ch == 'x')
            {
                ch = '*';
            }
            else if (ch == 'e') {
                ch = '3';
            }
            cout << ch;
            
        }
        cout << endl;
    }
	
	
	
	// PROCESSING EXERCISE 3
    if ( ex == 3 ) // exercise 3 code
    {
        // declare variables
        
        string sentence;
        cout << "Enter a sentence: " << endl;
        cin >> sentence;
        
        if (sentence.find(".") <=30 )
        {
            cout << "The character '.' is located at index " << sentence.find(".") << endl;
        }
        else if (!(sentence.find(".") <= 30 ))
        {
            cout << "Your sentence does not contain the character '.'" << endl;
        }
        if (sentence.find("stop") <= 30 )
        {
            cout << "The word \"stop\" is located at index " << (sentence.find("stop")) << endl;
        }
        else if (!(sentence.find("stop") <= 30))
        {
            cout << "Your sentence does not contain the word \"stop\"" << endl;;
        }
       
        }
    
        return 0;
}
