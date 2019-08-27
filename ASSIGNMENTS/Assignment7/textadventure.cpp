/**************************************************************************
 * Author    		:  Laura Sun
 * Assignment 7   	:  Text Adventure
 * CLASS     		:  CS 002
 * SECTION   		:  MTRF: 7a - 12p
 * Due Date 		:  7/10/19
 *************************************************************************/

#include<iostream>

#include<string>
#include <cstdlib>  // For srand() and rand()


using namespace std;

/**************************************************************************
 * Text Adventure
 * ------------------------------------------------------------------------
 * This program is a text based game that asks users to input a direction
 * (N, E, S, W). User starts with 5 bananas and 3 oranges. Each choice leads
 * to either a room or an exit. Some rooms will add number of fruits and
 * other rooms may subtract. Once the user selects the exit, the game will
 * output the total score ( number of bananas + number of oranges ).
 *
 * ------------------------------------------------------------------------
 * Inputs: name, monster name,
 * Outputs: room, oranges, bananas, score
 *
 * ************************************************************************/

// Function prototypes
void drawPicture();

void monsterRoom(string monster, int& o, int& b);

void genieRoom(int& o, int& b);

void pictureRoom();


int main()
{
    // DECLARACTIONS
    string name;    // INPUT
    string monster; // INPUT
    char choice;  // INPUT - (N/E/S/W)
    int b = 5;      // B for bananas
    int o = 3;      // o for oranges
    int roll;       // Alignment
    int score = b + o;
    bool test = true;
    int counter = 0;

    // Seed
    srand(500);

    // Get random integer between 0 or 1
    roll = rand()%2;

    cout << "Please enter your name: " << endl;
    cin >> name;
    cout << "Name your scariest monster: " << endl;
    cin >> monster;

    while (test)
    {
        cout << name << ", you are in a room with 4 doors.\n" << endl;
        cout << "You are carrying " << b << " bananas and "
             << o <<" oranges." <<endl;
        cout << "Pick a door to enter by typing the direction"
             << " it is in (N/E/S/W): ";
        cout << "\n";
        cin >> choice;

        while (choice != 'N' && choice !='E' && choice != 'S' && choice != 'W')
        {
            roll = rand()%2;
            cout << "Pick a door to enter by typing the "<<
                    "direction it is in (N/E/S/W): \n";
            cin >> choice;
            //roll again?

        }



        if (choice == 'N')
        {
            counter++;
            if (roll == 0)
            {
                if (counter < 3)
                {
                    monsterRoom(monster, o, b);
                }
                else
                {
                    int score = o + b;
                    cout << "\n";
                    cout << "You found the exit!" << endl;
                    cout << "Your score is "<< score;
                    cout <<"(" << b << " bananas and " << o << " oranges).\n";
                    cout << "Bye bye!!!" << endl;
                    exit(0);
                }

            }
            if (roll == 1)
            {
                    int score = o + b;
                    cout << "\n";
                    cout << "You found the exit!" << endl;
                    cout << "Your score is "<< score;
                    cout <<"(" << b << " bananas and " << o << " oranges).\n";
                    cout << "Bye bye!!!" << endl;
                    exit(0);
            }

        }

        else if (choice == 'S')
        {
            if (roll == 1)
            {
               genieRoom(o,b);
            }
            if (roll == 0)
            {
                if ( score <= 8 )
                {
                    genieRoom(o,b);
                }
                if (score > 8 )
                {
                    monsterRoom(monster, o, b);
                }

            }
        }

        else if (choice == 'E')
        {
            if (roll == 0)
            {
                if (score < 8)
                {
                    pictureRoom();
                }
                if (score >= 8)
                {
                    genieRoom(o,b);
                }

            }
            if (roll == 1)
            {
                genieRoom(o,b);
            }

        }

        else if (choice == 'W')
        {
            if (roll == 1)
            {
                    int score = o + b;

                    cout << "\n" << "You found the exit!" << endl;
                    cout << "Your score is "<< score;
                    cout <<"(" << b << " bananas and " << o << " oranges).\n";
                    cout << "Bye bye!!!" << endl;
                    exit(0);
            }
            if (roll == 0)
            {
                pictureRoom();
            }

        }





      };




}

void drawPicture()
{
    cout << "        _--~~--_" << endl;
    cout << "      /~/_|  |_\\~\\" << endl;
    cout << "     |____________|" << endl;
    cout << "     |[][][][][][]|" << endl;
    cout << "   __| __         |__" << endl;
    cout << "  |  ||. |   ==   |  |" << endl;
    cout << " (|  ||__|   ==   |  |)" << endl;
    cout << "  |  |[] []  ==   |  |" << endl;
    cout << "  |  |____________|  |" << endl;
    cout << "  /__\\            /__\\" << endl;
    cout << "   ~~              ~~ " << endl;
    cout << endl;
}

// monsterRoom takes in the monster name and total score as parameters
// Resets score to 0
void monsterRoom(string monster, int& o, int& b)
{
    cout << "\n" << "WATCH OUT!!!" << endl;

    cout << monster << " attacks you and steals all "
    << "of your bananas and oranges." << endl;
    o = 0;
    b = 0;
}

// genieRoom takes in number of oranges and bananas as parameters
// Adds 1 orange and adds 2 bananas
void genieRoom(int& o, int& b)
{   cout << "\n";
    cout << "!!Poof!! A Genie pops out and grants you " <<
           "2 bananas and 1 orange." << endl;
    o += 1;
    b += 2;
}

// pictureRoom displays a picture of a rocketship
void pictureRoom()
{
    cout << "\n";
    cout << "You found a picture!" << endl;
    drawPicture();

}
