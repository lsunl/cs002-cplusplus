/**************************************************************************
 * Author    		:  Laura Sun
 * Lab 006    		:  Liters and MPG
 * CLASS     		:  CS 002
 * SECTION   		:  MTRF: 7a - 12p
 * Due Date 		:  7/10/19
 *************************************************************************/

#include <iostream>
using namespace std;
/*************************************************************************
*
* Liters and MPG
*_______________________________________________________________________
* This program calculates the mpg of two cars and compares the mileage.
*________________________________________________________________________
* INPUT: liter, miles, ansswer
*
*
* OUTPUT: mpg
*
***********************************************************/
double mpgCalculator (double, double);

int main()
{
    double liters = 0;          // INPUT - Liter used by car.
    double miles = 0;           // INPUT - Miles drove  by car.
    double mpg = 0;             // CALCULATION - MPG of car
    double liters2 = 0;
    double miles2 = 0;
    double mpg2 = 0;
    char answer;                // INPUT - User input to wanting
                                //   to repeat calculation or not.

    // Prompt user for liters of gas consumed.
    cout << "Enter the number of liters of gas consumed: \n";
    cin >> liters;

    // Prompt user for miles traveled.
    cout << "Enter the number of miles traveled: \n";
    cin >> miles;

    // PROCESSING - calculate mpg
    mpg = mpgCalculator (liters, miles);

    // OUTPUT
    cout << "This car gets " << mpg << " miles per gallon.\n";

    // Prompt asking user if they'd like to calculate again.
    cout << "Calculate again? \n";
    cin >> answer;

    // PROCESSING
    while (answer == 'y')
    {
        // Prompt user for liters of gas consumed.
        cout << "Enter the number of liters of gas consumed: \n";
        cin >> liters;

        // OUTPUT- Prompt user for miles traveled.
        cout << "Enter the number of miles traveled: \n";
        cin >> miles;

        // PROCESSING - Calculate mpg
        mpg = mpgCalculator (liters, miles);

        // OUTPUT
        cout << "This car gets " << mpg << " miles per gallon.\n";

        // OUTPUT - Prompt asking user if they'd like to calculate again.
        cout << "Calculate again? \n";
        cin >> answer;
    }

    if (answer == 'n')
    {
        cout << endl;
        cout << endl;

        // OUTPUT- Prompt user for liters of gas consumed
        cout << "Enter the number of liters consumed for the first car: \n";
        cin >> liters;

        // OUTPUT- prompt user formiles traveled.
        cout << "Enter the number of miles traveled for the first car: \n";
        cin >> miles;

        // OUTPUT- Prompt user for liters of gas consumed.
        cout << "Enter the number of liters consumed for the second car: \n";
        cin >> liters2;

        // OUTPUT- Prompt user for input miles traveled.
        cout << "Enter the number of miles traveled for the second car: \n";

        cin >> miles2;
        cout << endl;
        cout << endl;

        // PROCESSING - Calculate mpg
        mpg = mpgCalculator (liters, miles);
        cout << "The first car gets " << mpg << " miles per gallon.\n";
        mpg2 = mpgCalculator (liters2, miles2);
        cout << "The second car gets " << mpg2 << " miles per gallon.\n";

        if (mpg > mpg2)
        {
            cout << "The first car has better gas mileage.\n";
        };



        if (mpg < mpg2)

        {
            cout << "The second car has better gas mileage.\n";
        }

        return 0;
    }

    while (answer == 'y')
    {
        // OUTPUT- Prompt asking for user to input liters of gas consumed.
        cout << "Enter the number of liters of gas consumed: \n";

        // INPUT - User input of liters of gas consumed.
        cin >> liters;

        // OUTPUT- Prompt asking for user to input miles traveled.
        cout << "Enter the number of miles traveled: \n";

        // INPUT - User input of miles traveled.
        cin >> miles;

        // PROCESSING - Use function to calculate mpg
        mpg = mpgCalculator (liters, miles);
        cout << "This car gets " << mpg << " miles per gallon.\n";

        // OUTPUT - Prompt asking user if they'd like to calculate again.
        cout << "Calculate again? \n";

        // OUTPUT - Prompt asking user if they'd like to calculate again.
        cin >> answer;
        cout << endl;
    }
}

double mpgCalculator (double liters, double miles)
{
    double gallons;
    gallons = liters * 0.264179;
    return miles / gallons;
}


