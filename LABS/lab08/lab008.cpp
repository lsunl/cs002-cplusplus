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
#include <stdio.h>
#include <iomanip>

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


int sumDigit(int number){
    int sum= 0;
    
    while (number > 0)
    {
        sum += (number%10);
        number = number /10;
        
        
    }
    
    return sum;

}

bool primeCheck(int num){
    
    if (num <= 1)  return false;
    if (num <= 3)  return true;

    // This is checked so that we can skip 
    // middle five numbers in below loop
    if (num%2 == 0 || num%3 == 0) return false;

    for (int i=5; i*i<=num; i=i+6)
        if (num%i == 0 || num%(i+2) == 0)
           return false;

    return true;
    }
    
    // for (int i = 2; i < num/2; i++)
    // {
    //     if (num % i == 0)
    //     {
    //         return false;
    //     }
    //     else
    //     {
    //         return true;
    //     }
    // }




int main()
{
	// DECLARATIONS
    int ex; 		// INPUT EXERCISE NUMBER
	
	//PROMPT USER
    cout << "Which exercise? \n";
    cin >> ex;
    
	//PROCESSING EXERCISE 1
    if ( ex == 1 )

    {
        int number;
        
        while (number != 0){
            
        cout <<"Please enter an integer (0 to quit): \n";
        cin >> number;
        
        cout << "The sum of the digits of " << number << " is " <<
        sumDigit(abs(number)) <<endl;
        
        }
        
        cout << "Goodbye " << endl;
        
    }
    
    if (ex == 2) 
    {
        int x, y;
        cout << "Please input two positive numbers: \n";
        cin >> x >> y;
        
        cout << "The prime numbers between " << x << " and " << y << " are: "
        << endl;
        
        for (x; x <= y; x++)
        {
            int count8Line = 0;
            if (primeCheck(x))
            
            {
                count8Line++;
                cout << x << "\t";
                
                if (count8Line % 8 == 0 && count8Line != 0)
                cout << "\n";
            }
            
            
        }
    
    }
                   

    

        
    
        
}



