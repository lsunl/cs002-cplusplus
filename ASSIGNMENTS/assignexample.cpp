
#include <iostream>
#include <cstdlib> // Enables use of rand()
#include <ctime> // Enables use of time()
#include <string>
#include <iomanip>

using namespace std;
// get random integer number from 1 to 6

int genRandInt (int smallestNum, int largestNum)
{
int randomNum;
randomNum = rand () % (largestNum - smallestNum + 1) + smallestNum ;
return randomNum;
}


int singleTurn (int holdVal)
{
  
  
int Score = 0;
int Roll =0;
  
  
// repeat the simulation
for (Score =0; Score < holdVal ; Score += Roll)
{
Roll = genRandInt (1, 6);
  
if (Roll == 1 )
{
Score = 0;
break;
}
}
return Score;
}

int main ()
{

srand(time(0));
int holdValue;
int turnSimulation;
int totalScore;
  
/* variable to count 7 possible outcomes */
int countZero = 0; // count number of zero
int countHoldValue = 0; // count number of holdvalue
int count1 = 0, count2 = 0;
int count3 = 0, count4 = 0, count5 = 0;
  
// probability of holdvalue to holvalue +5
double ProbZero = 0.0; // probabily of zero
double ProbHoldValue =0.0000000, Prob1 =0.0000000, Prob2=0.0000000;
double Prob3 =0.0000000, Prob4 =0.0000000, Prob5 =0.0000000;
  
//get the hold Value from user
cout << "What value should we hold at? ";
cin >> holdValue;
cout << endl ;
  
//get the number of turn simulation from user
cout << "Hold-at-N turn simulations? ";
cin >> turnSimulation;
cout << endl ;
  
//prinout score and probability
cout << "Score\tEstimated Probability\n";
  
for (int i =1; i <= turnSimulation; ++i)
{
totalScore = singleTurn(holdValue);
  
// count each number in 7 possible outcomes
if (totalScore == 0)
{
++countZero;
  
}
else if ( totalScore == holdValue)
{
++countHoldValue ;
  
}
else if ( totalScore == holdValue + 1)
{
++count1 ;
  
}
else if ( totalScore == holdValue + 2)
{
++ count2 ;
  
}
else if ( totalScore == holdValue + 3)
{
++count3 ;
  
}
else if ( totalScore == holdValue + 4)
{
++count4 ;
  
}
else if ( totalScore == holdValue + 5)
{
++count5 ;
  
}
}
// estimated probabily for each number.
  
ProbHoldValue = static_cast <double> (countHoldValue) / turnSimulation;
Prob1 = static_cast <double> (count1) / turnSimulation;
Prob2 = static_cast <double> (count2) / turnSimulation;
Prob3 = static_cast <double> (count3) / turnSimulation;
Prob4 = static_cast <double> (count4) / turnSimulation;
Prob5 = static_cast <double> (count5) / turnSimulation;
ProbZero = static_cast <double> (countZero) / turnSimulation;
  
// print out the score and their estimated probability.
  
cout << '0' << "\t" << fixed;
cout << setprecision(6) << ProbZero << endl;
  
cout << holdValue << "\t" << fixed;
cout << setprecision(6) << ProbHoldValue << endl;
cout << holdValue +1 << "\t" << fixed << setprecision(6) << Prob1 << endl;
cout << holdValue +2 << "\t" << fixed << setprecision(6) << Prob2 << endl;
cout << holdValue +3 << "\t" << fixed << setprecision(6) << Prob3 << endl;
cout << holdValue +4 << "\t" << fixed << setprecision(6) << Prob4 << endl;
cout << holdValue +5 << "\t" << fixed << setprecision(6) << Prob5 << endl;
  
return 0;
}
  
  