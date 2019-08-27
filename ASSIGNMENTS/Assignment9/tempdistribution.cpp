/******************************************************************************
 * Author    		:  Laura Sun
 * Assignment 9		:  Temperature Distribution
 * CLASS     		:  CS 002
 * SECTION   		:  MTRF: 7a - 12p
 * Due Date 		:  7/13/19
 *****************************************************************************/

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

/******************************************************************************
*
* TEMPERATURE DISTRIBUTION
*______________________________________________________________________________
* This program:
* 1. Gets from the user the names of the input and output files.
* 2. Reads from the input file the initial temps for top, right, bottom,
*    and left sides of plate.
* 3. Read from the input file the tolerance for equilibrium.
* 4. Initialize the edges of the 2D grid with initial temps from the input
*    file, and initializes the inner cells of the grid to 0.0.
* 5. Updates temperature values within inner cells til equilibrium is reached.
* 6. Outputs to the output file the values of the inner cells of the
*    grid after equilibrium obtained.
* _____________________________________________________________________________
* INPUT:
*
*
* OUTPUT:
*
******************************************************************************/

int main ()
{
    // DECLARATIONS
    ifstream in_stream;
    ofstream out_stream;

    string filename;
    cout << "Filename: " << endl;
    cin >> filename;
    in_stream.open(filename);
    if (in_stream.fail())
    {
        cout << "Failed." << endl;
    }

    string inputfile;
    cout << "Enter input file name:" << "\n" << endl;
    cin >> inputfile;
    out_stream.open(inputfile.c_str());

    // Check whether file was opened
    if (out_stream.fail( ))
    {
        cout << "Input file opening failed.\n";
        exit(1);
    }
    else {
        cout << "Works!";
    }


//    string outputfile;
//    cout << "Enter output file name: "  << "\n"  << endl;
//    cin >> outputfile;
//    out_stream.open(outputfile);

//    //Check whether outstream failed
//    if (out_stream.fail( ))
//    {
//        cout << "Output file opening failed.\n";
//        exit(1);
//    }

    // input files have 4 starting temps
//    int top = 29;
//    int right = 45;
//    int bottom = 0;
//    int left = 15;
//    double tolerance = 0.5;
    double start = 0.0;


    int top, right, bottom, left;
    string tolerance;
    in_stream >> top >> right >> bottom >> left
           >> tolerance;
    cout << top << " " << right << " " << bottom << " " << left << endl;
    cout << tolerance;

    // SET UP THE GRID
    int rows = 6;
    int cols = 8;


    double grid[rows][cols];

    // START BY FILLING IN THE GRID WITH 0's
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
             grid[i][j] = start;
        }
    };


    // UPDATE EDGES
    for (int i = 0; i < cols; i++)
    {
        grid[0][i] = top;
        grid[i+1][0] = left;
        grid[i+1][7] = right;
        grid[rows - 1][i] = bottom;
    }

    // MAKE A COPY OF GRID
    int prev_grid[rows][cols];
    for(int i = 0; i < rows; i++)    //This loops on the rows.
    {
        for(int j = 0; j < cols; j++) //This loops on the columns
        {
            prev_grid[i][j] = grid[i][j];

           // cout << prev_grid[i][j] << ”  “;
        }
    //    cout << endl;
    }

// CREATE AN ARRAY TO KEEP TRACK OF DIFFERENCES
//    double difference[rows][cols];

    double max_diff;
    do
    {
        max_diff = 0;
        cout << "test\n";
        // THIS UPDATES INNER CELLS WITH AVERAGE OF SURROUNDING CELLS
        for(int i=1; i<rows; i++)    // This loops on the rows.
        {
               for(int j=1; j<cols; j++) // This loops on the columns
               {

                    double oldvalue = grid[i][j];
    //                cout << oldvalue << endl;
                    double avg = (grid[i-1][j] + grid[i+1][j]
                                    + grid[i][j-1] + grid[i][j+1])/4;
                    grid[i][j] = avg;
    //                cout << avg << endl;
                    double difference = oldvalue - avg;
                    if (max_diff < difference)
                        max_diff = difference;
               }
       }
       cout << max_diff << endl;
    }
    while (max_diff > 0.5);




    // DISPLAY the grid
    for(int i=1; i<rows; i++)    // This loops on the rows.
       {
           for(int j=1; j<cols; j++) // This loops on the columns
           {
               cout << grid[i][j] << " ";

           }
           cout << endl;
       }



    in_stream.close( );
//    out_stream.close( );

    return 0;

}
