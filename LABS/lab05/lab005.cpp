/*********************************************************
*  AUTHOR       : Laura Sun
*  LAB 005		: LOOPS
*  CLASS        : CS002
*  SECTION      : MTTHF: 7:00a –12p
*  Due Date     : 6/28/19
*********************************************************/
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>    // For time()
#include <cstdlib>  // For srand() and rand()

using namespace std;

/***********************************************************
* LOOPS
*_________________________________________________________
*
* This program has three parts:
*	Exercise 1 generates three sequences after prompting user to give
*	the starting number and ending number. The first sequence increments by 1.
*	The second sequence increments by 2. The third sequence increments by 
*	multiplying negative two.
*
*	Exercise 2 takes in grade scores and assigns them to a letter grade.
* 	
*	Exercise 3 simulates a coin toss. If user says yes, then a random number
*	will be generated from 1 to 2, which will represent heads or tails.
*	
*________________________________________________________
*
* Input: exercise number
*
* Exercise 1: Inputs - starting number, ending number
*			  Outputs - Sequence
* Exercise 2: Inputs - grades
* 			  Outputs - grade breakdown
* Exercise 3: Inputs - yes or no
*			  Outputs - heads or tails
* 
***********************************************************/
int main()
{
  //GLOBAL DECLARATIONS
  int ex;
  
  // SEED RANDOM FOR TESTING PURPOSES
//  srand(time(0)); 
  
  //PROMPT USER TO SELECT EXERCISE
  cout << "Which exercise? \n";
  cin >> ex;
  
  
  // EXERCISE 1 - FOR LOOPS
  if (ex == 1)
  {
    
	// DECLARATIONS
	// I
    int x; // COUNTER
	int start; // INPUT
	int end; //INPUT;
	
	// PROCESSING
    
    cout << "Enter beginning and ending numbers, separated by space: \n";
    cin >> start >> end;
    
    for (x = start; x <= end; x++)
    {
      cout << x;
      if (x != end) 
        {
            cout << ", ";
            
        }
      
    }
      
    cout << "\n";
    
    cout << "Enter beginning and ending numbers, separated by space: \n";
    cin >> start >> end;
    
    for (x = start; x <= end; x+=2)
    {
      cout << x;
      if (x != end && x != (end-1)) 
        {
            cout << ", ";
            
        }
      
    }
      
    cout << "\n";
    
    cout << "Enter the beginning and largest positive numbers, separated by space: \n";
    cin >> start >> end;
    
    for (x = start; abs(x) <= end; x*=-2)
    {
        cout << x;
        if (x != end) 
        {
            cout << ", ";
            
        }
		else 
		{
			cout << "\n";
		}
    }
      
;
  }//end of exercise 1    
  
  
  
  // EXERCISE 2 - GRADE ASSIGNMENT
  if (ex == 2)
  {
    // DECLARATIONS & INITIALIZATIONS
    int grade, a = 0, b =0, c=0, d=0, f=0;
    cout << "Enter one or more grades, or -1 to stop: \n";
	cin >> grade;
	
	//PROCESSING
	while (grade != -1)
	{
	    if (grade >= 90 && grade <= 100) 
	    {
	        a++;
	    }
	else if (grade >= 80 && grade <= 89)
	    {
	        b++;    
	    }
	    
	else if (grade >= 70 && grade <= 79)
	    {
	        c++;    
	    }	 
	    
	else if (grade >= 60 && grade <= 69)
	    {
	        d++;    
	    }
	    
	else if (grade >= 0 && grade <= 59)
	    {
	        f++;    
	    }	    
	cout << "Enter one or more grades, or -1 to stop: \n";
	cin >> grade;
	
	}
	
	// OUTPUT
	cout << "The grades breakdown is: \n";
	cout << "As: " << a << "\n";
	cout << "Bs: " << b << "\n";	
	cout << "Cs: " << c << "\n";	
	cout << "Ds: " << d << "\n";
	cout << "Fs: " << f << "\n"; 
	
    return 0;
  }//end of exercise 2
      

	// EXERCISE 3 - COIN TOSS
  if (ex == 3)
  {
    // DECLARATIONS && INITIALIZATIONS
    string answ = "yes";
    
	//PROCESSING && OUTPUT
	while (answ == "yes" )	   
    {
      cout << "Toss the coin? \n";
      cin >> answ; 
      
	  if (answ == "yes")
	  {
	  int range = 2;
      int toss = rand() % range + 1;
	
        if (toss == 1) 
        {
          cout << "heads" << "\n";
        }
        else
        {
          cout << "tails" << "\n" ;
        }
	  }
    }
	
	



  } //end of exercise 3
}
