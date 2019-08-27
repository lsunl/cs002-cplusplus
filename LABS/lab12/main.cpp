/******************************************************************************
 * Author    		:  Laura Sun
 * Lab 12   		:  Temperature Distribution
 * CLASS     		:  CS 002
 * SECTION   		:  MTRF: 7a - 12p
 * Due Date 		:  7/13/19
 *****************************************************************************/

#include <iostream>
//#include <fstream>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <iterator>
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

void vowelcounter(char sentence[]);
void concounter(char sentence[]);
char lowerall(char sentence[]);
void upperall(char sentence[]);
void display(char sentence[]);
void enterstring();
string menu();

int main()
{
    char sentence[101];
    char letter[1];
    cout << "Enter a string" << endl;
    std::cin.getline(sentence, 101);
    cout << "Enter menu" << endl;
    std::cin.getline(letter, 1);

    if (letter[0] == 'a')
    {
       vowelcounter(sentence);
    }
    else if (letter[0] == 'b')
    {
        concounter(sentence);
    }
    else if (letter[0] == 'c')
    {
        lowerall(sentence);
    }
    else if (letter[0] == 'd')
    {
        upperall(sentence);
    }
    else if (letter[0] == 'e')
    {
        display(sentence);
    }
    else if (letter[0] == 'x')
    {
        exit(1);
    }
    else if (letter[0] == 'm')
    {
        cout << menu();
    }



}


void vowelcounter(char sentence[])
{
    int counter = 0;
    for (int x = 0; x < sizeof(sentence); x++)
    {
        char letter = tolower(sentence[x]);
        if (letter == 'a' || letter == 'e' || letter == 'i'
             || letter == 'o' || letter == 'u')
        {
            counter++;
        }
    }

//    return (counter);
}



void concounter(char sentence[])
{
    int counter = 0;
    for (int x = 0; x < sizeof(sentence); x++)
    {
        char letter = tolower(sentence[x]);
        if (letter != 'a' && letter != 'e' && letter != 'i'
             && letter != 'o' && letter != 'u')
        {
            counter++;
        }
    }

//    return (counter);
}


char lowerall(char sentence[]){
    for (int x=0; x < sizeof(sentence); x++)
    {
        sentence[x] = char(tolower(sentence[x]));
        cout << sentence[x];
    }
    return 0;
}

void upperall(char sentence[])
{
    for (int x=0; x < sizeof(sentence); x++)
    {
        sentence[x] = toupper(sentence[x]);
    }
//    return 0;
}

void display(char sentence[])
{
//    for (int x=0; x < sizeof(sentence); x++)
//    {
//        cout << sentence[x];
//    }
    int index =0;
    while (sentence[index] != '\0')
    {
     sentence[index] = sentence[index];
     index++;
     cout << sentence;
    }

//    return 0;
};

string menu()
{
    cout << "A)  Count the number of vowels in the string" << endl;
    cout << "B)  Count the number of consonants in the string" << endl;
    cout << "C)  Convert the string to uppercase" << endl;
    cout << "D)  Convert the string to lowercase" << endl;
    cout << "E)  Display the current string" << endl;
    cout << "F)  Enter another string" << endl;
    cout << "\n";
    cout << "M)  Display this menu" << endl;
    cout << "X)  Exit the program" << endl;
}










