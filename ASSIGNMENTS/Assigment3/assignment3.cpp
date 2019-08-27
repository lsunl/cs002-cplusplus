/**************************************************************************
 * Author    		:  Laura Sun
 * Assignment #3    :  Mathematics Specification
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
 * CALCULATOR
 * ________________________________________________________________________
 * This program simulates a calculator by executing different operations
 * 		and geometric equations. Program will first prompt user for an
 *		operation. If the operation is one that the calculator is set to
 *		compute, then the program will ask for a number.
 * 		If the operation is square root or to find absolute value, then
 *		the program will ask for only one number before computing a result.
 *		If the operation asks for addition, subraction, division,
 *	 	multiplication,	or pythagorean, then the program will take in two
 *		numbers before executing result. If the operation is quadratic,
 *		then the program will ask for three numbers before executing result.
 * 		This is all possible due to the use of nested if statement and
 * 		the cmath library.
 * ________________________________________________________________________
 * Inputs:
 *		Operation: addition, subtraction, division, multiplication, fabs
 *		sqrt, quadratic, pythagorean
 * 		Number 1 and/or Number 2 and/or Number 3
 *
 * Outputs:
 * 		Mathematical Equation
 *		Result or Error
 *
 *************************************************************************/

int main()
{
  float num1;		// INPUT
  float num2;		// INPUT
  float num3;		// INPUT
  float answer;	// OUTPUT
  float x;		// CALCULATION - for quadratic equation; root 1
  float xsub;		// CALCULATION - for quadratic equation; root 2
  float test;		// CALCULATION - for quadratic equation; discriminant
  string operation; // INPUT

	// INPUT -- prompt user for an operation
	cout << "Please choose an operation: \n";
	cin >> operation;


	// PROCESSING -- nested if statements to calculate numbers
	// based on operation inputted. If operation does not exist,
	// or spelling is not correct then program will output error.
	if ((operation != "sqrt")&& (operation != "fabs")
  && (operation !="addition") && (operation != "subtraction") &&
  (operation != "division") && (operation !="multiplication") &&
  (operation != "quadratic") && (operation != "pythagorean"))
	{
		//OUTPUT
    cout<< "Error: Operation not supported.\n";
	}
  else
  {
	  //INPUT
    cout << "Enter your first number: \n";
    cin >> num1;

	  if (operation == "sqrt")
		{
      answer = sqrt(num1);
      //OUTPUT
      cout << "Equation: sqrt(" << num1 << ")\n\n";

      if (num1 != fabs(num1))
      {
      //OUTPUT
        cout << "Error: Cannot take square root of a negative number.\n";
      }

      else
      {

      //OUTPUT
      cout << "Results: " << answer << "\n";
      }
	  }

	    else if (operation == "fabs")
	    {
	       answer = fabs(num1);
			//OUTPUT
		    cout << "Equation: fabs(" << num1 << ") \n\n";
            cout << "Results: " << answer << "\n";
	    }

		else if ((operation == "addition") || "subtraction" || "division" || "multiplication" || "quadratic" || "pythagorean")
		{
			//INPUT
			cout << "Enter your second number: \n";
			cin >> num2;

			if (operation == "addition")
			{
				answer = num1 + num2;
				//OUTPUT
				cout << "Equation: ";
				cout << num1 << " + " << num2 << "\n\n";
				cout << "Results: " << answer << "\n";
			}

			else if (operation == "subtraction")
			{
				answer = num1 - fabs(num2);
				//OUTPUT
				cout << "Equation: ";
				cout << num1 << " - " << num2 << "\n\n";
				cout << "Results: " << answer << "\n";
			}

			else if (operation == "division")
			{
				answer = num1 / num2;
				//OUTPUT
				cout << "Equation: ";
				cout << num1 << " / " << num2 << "\n\n";

				if (num2 == 0)
				{
					//OUTPUT
					cout << "Error: Cannot divide by zero.\n";
					}
				else
				cout << "Results: " << answer << "\n";
			}

			else if (operation == "multiplication")
			{
				answer = num1 * num2;
				//OUTPUT
				cout << "Equation: ";
				cout << num1 << " * " << num2 << "\n\n";
				cout << "Results: " << answer << "\n";
			}

			else if (operation == "pythagorean")
			{
				answer = sqrt(num1*num1 + num2*num2);
				cout << "Equation: ";
				cout << "sqrt(" << num1 << "^2 + " << num2 << "^2)\n\n";
				cout << "Results: " << answer << "\n";
			}

			else if (operation == "quadratic")
			{
				cout << "Enter your third number: \n";
				cin >> num3;

				//Checks discriminant and finds root
				x = ((-num2) + sqrt(num2*num2 - 4*num1*num3))/(2*num1);
				xsub = ((-num2) - sqrt(num2*num2 - 4*num1*num3))/(2*num1);
				test = (num2*num2 - 4*num1*num3);

				answer = num1*x*x + num2*x + num3;
				//OUTPUT
				cout << "Equation: ";
				cout << num1 << "x^2 + " << num2 << "x + " << num3 << " = 0\n\n";


				if (test < 0){
					//OUTPUT if discriminant is negative
					cout << "Error: Cannot take square root of a negative number.\n";

				}
				else if (test == 0){
					//OUTPUT if discriminant is zero
					cout << "Result: " << (-num2/(2*num1));
				}

				else if (num1 == 0){
					//OUTPUT for specific case
					cout << "Result: " << -num3/2 << "\n";
				}

				else
				{
					if (sqrt(test)==floor(sqrt(test))) {
						//OUTPUT if perfect square
					cout << "Result: " << -num2/2*num1 << "\n";
					}
					else
					{
						//OUTPUT
						cout << "Results: " << x << ", " << xsub << "\n";

					}
				}


			}
		}
	}

}
