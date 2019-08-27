/**************************************************************************
 * Author    		:  Laura Sun
 * Assignment 8   	:  Noise Signals
 * CLASS     		:  CS 002
 * SECTION   		:  MTRF: 7a - 12p
 * Due Date 		:  7/12/19
 *************************************************************************/

#include<iostream>
#include<istream>
#include<string>
#include <cstdlib>  // For srand() and rand()
#include <cmath>    // For math library

using namespace std;

/**************************************************************************
 * NOISE SIGNALS
 * ------------------------------------------------------------------------
 * PART 1:  uses the randFloat function given above to generate two
 * sequencess of random floating-point values between 4 and 10. The first
 * sequence has the size of 100 and the second sequence has the size of
 * 10000. The program outputs the theoretical mean, practical mean,
 * theoretical variance and practical variance of sequence.
 *
 * PART 2: uses the randFloat function given above to generate two sequences
 * that are 500 elements long and each element falls between the numbers
 * 4 and 10.  Each sequence have a theoretical mean of 4, and one
 * sequence has a variance of 0.5 and the other has a variance of 2.
 * The program outputs the theoretical mean, practical mean,
 * theoretical variance and practical variance of sequence.
 *
 * PART 3: uses the randFloat function given above to generate two sequences
 * that are 500 elements long and each element falls between the numbers
 * 4 and 10. Each sequence has the same variance of 3.0 but one
 * sequence should have a mean of 0.0 and the other should have a mean of -4.0.
 * The program outputs the theoretical mean, practical mean,
 * theoretical variance and practical variance of sequence.
 *
 * PART 4: asks user for mean and variance to generate a random floating-point
 * number.
 *
 * ------------------------------------------------------------------------
 * Inputs: Mean, Variance
 * Outputs: practical mean, practical variance, theoretical mean,
 *          theoretical variance, random number
 *
 * ************************************************************************/

/*This function generates a random double value between a and b*/
double randFloat (double a, double b)
{
   return a + (static_cast<double>(rand()) / RAND_MAX) * (b - a);
}

// This function generates the practical mean
double practicalmean(double arr[], double size);

// This function generates the practical variance
double practicalvariance(double arr[], double size);

// This function generates theoretical mean
double theoreticalmean(double a, double b);

// This function generates theoretical variance
double theoreticalvariance(double a, double b);

// this function creates an array
void initialize(double arr[], int size, double a, double b);

double rand_mv(double mean, double var);

//void mean(int array[], int size);


int main()
{
    // Plant the seed
    srand(500);

/************************************************************************
 * PART 1
 * *********************************************************************/

    // Declare the variables
    int size1 = 100;        // Size of first array
    int size2 = 10000;      // Size of second array
//    double a = 4;         // First number for random number generator
//    double b = 10;        // Second number for random number generator

    double arr1[size1];     // Declare first array
    double arr2[size2];     // Declare second array

    // Create the first two arrays
    initialize(arr1, size1, 4, 10);
    initialize(arr2, size2, 4, 10);

    // OUTPUT
    cout << theoreticalmean(4, 10) << " " << practicalmean(arr1, size1)
         << " " << theoreticalvariance(4, 10) << " "
         << practicalvariance(arr1, size1) << endl;

    cout << theoreticalmean(4, 10) << " " << practicalmean(arr2, size2)
         << " " << theoreticalvariance(4, 10) << " "
         << practicalvariance(arr2, size2) << "\n" << endl;

/************************************************************************
 * PART 2
 **********************************************************************/

    // Declare arrays with size of 500
    double arr3[500];
    double arr4[500];

    // Declare variables for first array
    double a1, b1;
    a1 = (4 - sqrt(6)/2);
    b1 = (4 + sqrt(6)/2);

    // Declare variables for second array
    double a2, b2;
    a2 = (4 - sqrt(6));
    b2 = (4 + sqrt(6));

    // Create first array
    for(int i = 0; i<500; i++)
    {
        arr3[i] = randFloat(a1,b1);
    }
    // Create second array
    for(int i = 0; i<500; i++)
    {
        arr4[i] = randFloat(a2,b2);
    }

    // OUTPUT
    cout << theoreticalmean(a1, b1) << " " << practicalmean(arr3, 500) <<
            " " << theoreticalvariance(a1, b1) << " "
         << practicalvariance(arr3, 500) << endl;

    cout << theoreticalmean(a2, b2) << " " << practicalmean(arr4, 500)
         << " " << theoreticalvariance(a2, b2) << " "
         << practicalvariance(arr4, 500) << "\n" << endl;

/************************************************************************
 * PART 3
 **********************************************************************/

    // Declare arrays with size of 500
    double arr5[500];
    double arr6[500];

    // Declare variables for first array
    double a5, b5;
    a5 = (-3);
    b5 = (3);

    // Declare variables for second array
    double a6, b6;
    a6 = (-7);
    b6 = (-1);

    // Create first array
    for(int i = 0; i<500; i++)
    {
        arr5[i] = randFloat(a5,b5);
    }
    // Create second array
    for(int i = 0; i<500; i++)
    {
        arr6[i] = randFloat(a6,b6);
    }

    // OUTPUT
    cout << theoreticalmean(a5, b5) << " " << practicalmean(arr5, 500) <<
            " " << theoreticalvariance(a5, b5) << " "
         << practicalvariance(arr5, 500) << endl;

    cout << theoreticalmean(a6, b6) << " " << practicalmean(arr6, 500)
         << " " << theoreticalvariance(a6, b6) << " "
         << practicalvariance(arr6, 500) << "\n" << endl;

/************************************************************************
 * PART 4
 **********************************************************************/

    // Declarations
    double mean;
    double variance;

    // Ask user for mean and variance
    cout << "Enter Mean: " << endl;
    cin >> mean;
    cout << "Enter Variance: " << endl;
    cin >> variance;

    // OUTPUT
    cout << rand_mv(mean, variance) << endl;



}


// This function creates an array of random numbers that are between the
// numbers a and b.
void initialize(double arr[], int size, double a, double b){
   for (int i = 0; i < size; i++){
       arr[i] = randFloat(a, b);
   }
}

// This function takes in the parameters (array and size of array)
// to generate the mean of all numbers by dividing the total sum
// of array by the number of elements in the array.
double practicalmean(double arr[], double size)
{
    double total = 0;
    for (int x = 0; x < size; x++ )
    {
        total+= arr[x];
    }

    double average = total / size;
    return average;
}


// This function takes in the parameters (array and size of array)
// to generate the variance of all numbers by finding the standard
// deviation and squaring it.
double practicalvariance(double arr[], double size)
{
    double mean = practicalmean(arr, size);
    double var = 0;
    for (int i = 0; i < size; i++)
    {
        var += ((arr[i] - mean) * (arr[i] - mean));
    }
    double variance = var/size;
    return variance;
}

// This function takes in two arguments and outputs a theoretical mean
double theoreticalmean(double a, double b)
{
   double tmean = (a + b) / 2.0;
   return (tmean);
}

// This function takes in two arguments and outputs a theoretical variance
double theoreticalvariance(double a, double b)
{
   double tvariance = ((b - a) * (b - a)) / 12;
   return (tvariance);
}

// This function takes in two argument and produces a random number
double rand_mv(double mean, double var)
{
    double b = mean + (sqrt(3*var));
    double a = 2* mean - b;

    double c = randFloat(a,b);

    cout << a << " " << b << endl;

    return c;
}
