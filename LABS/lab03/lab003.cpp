/**************************************************************************
 *   Author    :  Laura Sun
 *   Lab #3    :  Branching
 *   CLASS     :  CS 002
 *   SECTION   :  MTRF: 7a - 12p
 *   Due Date  :  6/25/19
 *************************************************************************/
#include <iostream>
using namespace std;
/**************************************************************************
 *
 * BRANCHING
 * ________________________________________________________________________
 * This program has two parts:
 * 		Exercise 1: Prompts user to input number of seconds and
 *					converts the seconds to either minutes, days or hours
 *		Exercise 2: Asks user to what she wants to do and offers a response
 * ________________________________________________________________________
 * Exercise 1:
 *		Input: seconds
 * 		Output: hours, days or minutes
 *
 * Exercise 2:
 * 		Input: a letter in correspondence to question
 *		Output: a response
 *************************************************************************/
int main()
{
    //INPUT     : A description of what is being input.
    //PROCESSING: Detail of what is being processed.
    //OUTPUT    : Details of what is being output.

	// DECLARATIONS
    int num;
    int seconds;
    char response;

	// INPUT
    cout << "Which exercise? ";
    cin >> num;
    cout << endl;

	// PROCESSING
    if(num == 1)
    {
        cout << "Enter a number of seconds: ";
        cin >> seconds;
        cout << endl;
        if(seconds >= 86400)
        {
            if (seconds/86400 > 1)
            {
                cout << "There are " << seconds / 86400 << " days in "
                     << seconds << " seconds." << endl;
            }
            else
            {
                cout << "There is " << seconds / 86400 << " day in "
                     << seconds << " seconds." << endl;
            }
        }
        else if(seconds >= 3600)
        {
            if (seconds/3600 > 1)
            {
                cout << "There are " << seconds / 3600 << " hours in "
                     << seconds << " seconds." << endl;
            }
            else
            {
                cout << "There is " << seconds / 3600 << " hour in "
                     << seconds << " seconds." << endl;
            }
        }
        else if(seconds >= 60)
        {
            if (seconds/60 > 1)
            {
                cout << "There are " << seconds / 60 << " minutes in "
                     << seconds << " seconds." << endl;
            }
            else
            {
                cout << "There is " << seconds / 60 << " minute in "
                     << seconds << " seconds." << endl;
            }
        }
    }
    else if(num == 2)
    {
        cout << "What do you want to do tonight?" << endl;
        cout << "a. Go to the movies" << endl;
        cout << "b. Eat out" << endl;
        cout << "c. Hang out at the Mall" << endl;
        cout << "d. Go watch the Dodgers" << endl;
        cin >> response;

        if(response == 'a' or response == 'A')
            cout << "I know just the movie to see!" << endl;
        else if(response == 'b' or response == 'B')
            cout << "Great! I've been wanting to try that new "
                    "Tuvaluan restaurant!" << endl;
        else if(response == 'c' or response == 'C')
            cout << "You bring the cash!" << endl;
        else if(response == 'd' or response == 'D')
            cout << "Take me out to the ball game ..." << endl;
        else
            cout << "Nothing suits you, then? I guess we'll just "
                    "stay and program!" << endl;
    }
}
