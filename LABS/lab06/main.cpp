/**************************************************************************
 * Author    		:  Laura Sun
 * Lab 006    		:  Manipulators and File IO
 * CLASS     		:  CS 002
 * SECTION   		:  MTRF: 7a - 12p
 * Due Date 		:  7/10/19
 *************************************************************************/

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

/*************************************************************************
 * Manipulators and File IO
 * _______________________________________________________________________
 * This program reads data from a text file, makes calculations
 * with the data and outputs them to a new text file.
 *
 * _______________________________________________________________________
 * Inputs: properties of a rectangle, properties of a circle, user
 *         information, user's banking information
 *
 * Outputs: area and perimeter of a rectangle, area and circumference
 *          of a circle, user's current balance
 *
 *************************************************************************/

int main()
{

    // DECLARATIONS
    ifstream inFile;
    ofstream outData;

    double length = 0;          // INPUT - Length of rectangle
    double width = 0;           // INPUT - Width of rectangle
    double areaR = 0;           // CALCULATION - Area of rectangle
    double perimeter = 0;       // CALCULATION - Perimeter of rectangle
    double radius = 0;          // INPUT - Radius of circle
    double areaC = 0;           // CALCULATION - Area of circle
    double circ = 0;            // CALCULATION - Circumference of circle
    string fname;               // INPUT- First name
    string lname;               // INPUT - Last name
    int age = 0;                // INPUT - Age
    double initialbalance = 0;  // INPUT - Initial balance
    double interest = 0;        // INPUT - Interest rate
    double balance = 0;         // CALCULATION - Current balance
    char letter;                // INPUT - Letter

    // PROCESSING - open file
    inFile.open("inData.txt");
    outData.open("outData.txt");

    // if the file opens
    if (inFile)
    {
        // INPUT
        inFile >> length >> width >> radius >> fname >> lname >>
        age >> initialbalance >> interest >> letter;

        // OUTPUT
        cout << setprecision(2) << fixed;
        cout << "Rectangle:" << endl;

        // OUTPUT - Area and perimeter of rectangle
        areaR = width * length;
        perimeter = ((2 * width) + (2 * length));

        cout << "Length = " << length << ", width = " << width
             << ", area = " << areaR << ", perimeter = " << perimeter <<endl;
        cout << endl;


        // OUTPUT - Area and circuference of circle
        cout << "Circle:" << endl;

        areaC = 3.14159265359 * (radius * radius);
        circ = 2 * (3.14159265359 * radius);

        cout << "Radius = " << radius << ", area = " << areaC
             << ", circumference = " << circ;
        cout << endl;
        cout << endl;

        // OUTPUT - Output user information and calculate end balance.
        cout << "Name: " << fname << ' ' << lname
             << ", age: " << age << endl;
        cout << "Beginning balance = $" << initialbalance
             << ", interest rate = " << interest << endl;

        balance = initialbalance + (initialbalance * (interest /100) / 12);
        cout << "Balance at the end of the month = $" << balance << endl;
        cout << endl;

        // OUTPUT - Output next letter in alphabet.
        cout << "The character that comes after "
             << letter << " in the ASCII set is ";
        cout << static_cast<char>(letter + 1) << endl;

        // OUTPUT - Write rectangle to outData
        outData << setprecision(2) << fixed;
        outData << "Rectangle:" <<endl;

        areaR = width * length;
        perimeter = ((2 * width) + (2 * length));

        outData << "Length = " << length
             << ", width = " << width
             << ", area = " << areaR
             << ", perimeter = " << perimeter <<endl;
        outData << endl;


        // OUTPUT - Output properties of circle onto outData
        outData << "Circle:" << endl;

        areaC = 3.14159265359 * (radius * radius);
        circ = 2 * (3.14159265359 * radius);

        outData << "Radius = " << radius
             << ", area = " << areaC
             << ", circumference = " << circ;
        outData << endl;
        outData << endl;

        // OUTPUT - Output user information and balance to outData
        outData << "Name: " << fname << ' ' << lname
             << ", age: " << age << endl;
        outData << "Beginning balance = $" << initialbalance
             << ", interest rate = " << interest << endl;

        balance = initialbalance + (initialbalance * (interest /100) / 12);
        outData << "Balance at the end of the month = $" << balance << endl;
        outData << endl;

        // OUTPUT - Output next letter in alphabet onto outData file.
        outData << "The character that comes after "
             << letter << " in the ASCII set is ";
        outData << static_cast<char>(letter + 1) << endl;

        // PROCESSING - Close inData and outData files.
        inFile.close();
        outData.close();


    }
    else
    {
        cout << "Error opening the file.\n";
    }


}


