/******************************************************************************
*  AUTHOR       : Laura Sun
*  Assignment #4: Game of Pig
*  CLASS        : CS002
*  SECTION      : MTTHF: 7:00a –12p
*  Due Date     : 6/24/19
******************************************************************************/
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>    // For time()
#include <cstdlib>  // For srand() and rand()
#include <iomanip>  // To use setprecision()

using namespace std;

/******************************************************************************
* Game of Pig
*______________________________________________________________________________
*
* This program uses the Monte Carlo Method to determine the probability
* outcomes of a single turn in a game called Pig.  
* 
*______________________________________________________________________________
*
* Inputs: Hold value, Number of simulations 
* Outputs: A table of scores and estimated probability for each score
* 
******************************************************************************/

int main()
{
    //DECLARATIONS
    int sims;           // number of simulation
    int hold;           // value to hold at
    int x=0;            // for calculationg purposes
    int roll = 0;       // setting the roll to 0
    int score = 0;      // running total 
    
    
    // totals for each score option
    int score1 =0, score2 =0, score3 =0, score4=0, score5=0, score0=0;
    int totalholds = 0;
    int score00 = 0; //tester
    
    // INITIALIZATION
    // srand allows you grab different sets of random numbers
    // srand(time(0)); 
    srand(333);

    //INPUT
    cout << "What value should we hold at? \n";
    cin >> hold;
    cout << "Hold-at-N turn simulations? \n";
    cin >> sims;
    
    // PROCESSING
    
    // setting up simulation
    for (x = 1; x <= sims; x++)
    {
        // one roll
        score = 0;
        while (score < hold) 
        {
      
            // play game
            // get random integer
            int range = 6;
            roll = rand() % range + 1;
            // cout << roll << "\n";
            if (roll == 1) 
            {
                score = 0;
                
                break;           
            }
            else 
            {
                score += roll;
            }
            //cout << "inside score: " << score << endl;
        }

        
        // checker
        // cout << total << "\n";
		// counters for each of the outcomes
// 		cout << "score: " << score << endl << endl;
        if (score == 0) 
        {
            score0++;
        }
        
        else if (score == hold)
        {
            totalholds++;
  
        }
        else if (score == hold + 1)
        {
            score1++;
  
        }
        else if (score == hold + 2)
        {
            score2++;
  
        }
        else if (score == hold + 3)
        {
            score3++;
  
        }
        else if (score == hold + 4)
        {
            score4++;
  
        }
        else if (score == hold + 5)
        {
            score5++;
        }
          
            

    }

    
    // cout << score << endl;
	
	// OUTPUT -- score count/ number of simulations = probability
    cout << "Score" << "\t" << "Estimated Probability" <<endl;
    cout << "0" << "\t" << fixed << setprecision(6) 
		<< static_cast <double> (score0) / sims<< endl;
    cout << hold << "\t" << fixed << setprecision(6) 
		<< static_cast <double>(totalholds) / sims << endl;
    cout << hold+1 << "\t" << fixed << setprecision(6) 
		<< static_cast <double>(score1) / sims << endl;
    cout << hold+2 << "\t" << fixed << setprecision(6) 
		<< static_cast <double>(score2) / sims << endl;
    cout << hold+3 << "\t" << fixed << setprecision(6) 
		<< static_cast <double>(score3) / sims << endl;
    cout << hold+4 << "\t" << fixed << setprecision(6) 
		<< static_cast <double>(score4) / sims << endl;
    cout << hold+5 << "\t" << fixed << setprecision(6) 
		<< static_cast <double>(score5) / sims<< endl;

//   return 0;
}
