/**************************************************************************
 * Author    		:  Laura Sun
 * Assignment 6   	:  Hangman
 * CLASS     		:  CS 002
 * SECTION   		:  MTRF: 7a - 12p
 * Due Date 		:  7/10/19
 *************************************************************************/

#include<iostream>
#include<istream>
#include<string>
#include<stdio.h>

using namespace std;

/**************************************************************************
 * Hangman
 * ------------------------------------------------------------------------
 * This program replicates the hangman game by taking in a phrase by
 * the user, converting the phrase into dashes, and then asking the user
 * to guess each letter. If the letter exists, the letter will replace the
 * dash. To win the game, user needs to input all the letters of the phrase.
 * If the user inputs a non-alphabetic letter, the guess will not count it.
 * Users have 7 chances to guess correctly before the game is over.
 * ------------------------------------------------------------------------
 * Inputs: phrase, guess
 * Outputs: unsolved phrase, all guesses made, win or loss statement
 *
 * ************************************************************************/

// Converts phrase to dashes.
string setupUnsolved(string phrase)
{
    // For each letter of phrase
    for (int i = 0; i < phrase.size(); i++)
   {
        // If letter is not a space or !
       if (phrase[i] != ' ' && phrase[i] != '!')
       {
           // Replace letter with a dash
           phrase[i] = '-';
       }
   }

   return(phrase);
};


// Takes in phrase and replaces the dashes with the guessed character.
string updateUnsolved(string phrase, string unsolved, char guess)
{
    // If the guessed letter exists in the phrase
//    if (phrase.find((guess)) != string::npos)
//    {
        // For each dash in unsolved
        for (int i = 0; i < unsolved.size(); i++)
        {
                // If the lower case letter in phrase matches original guess
//            if (tolower(phrase.at(i)) == (guess) )
            if (tolower(phrase.at(i)) == tolower(guess) )
            {
                // Replace the dash of solved at index [i] with guess
                unsolved.at(i) = (phrase.at(i));
            }
        }
//    }

    return(unsolved);
}


///// @brief Gets valid guess as input.
/////
/////    A guess is taken as input as a character. It is valid if
/////    1) it is an alphabetic character; and
/////    2) the character has not already been guessed
/////
///// @param prevGuesses the string containing all characters guessed so far
///// @return a valid guess and only a valid guess as a character
char getGuess(string prevGuesses)
{
    // Asks user for a char guess
    char guesss;
    string allguesses = "";
    cout << "Enter a guess: " << endl;
    cin >> guesss;

    allguesses += guesss;
//    guesss = toupper(guesss);
    // Check if guess is alphebetic and doesn't exist in prevGuesses
    while (isalpha(guesss) == false || prevGuesses.find(guesss) != string::npos
           || (isupper(guesss)))
    {
        cout << "Invalid guess! Please re-enter a guess: " << endl;
        cin >> guesss;
    }


    return (guesss);
};





int main()
{
    // DECLARATIONS
    string phrase;                  // INPUT - phrase
    char guess;                     // INPUT - guess
    string unsolved;                // INPUT - dashed phrase
    int chances = 7;                // INPUT - number of chances
    string prevGuesses = "";        // INPUT - string of previous guesses

    // INPUT
    cout << "Enter phrase: " << endl;
    getline(cin, phrase);

    cout << "Phrase: " << setupUnsolved(phrase) <<  endl;

    unsolved = setupUnsolved(phrase);

    do
    {
        // Check and store guesses
        guess = getGuess(prevGuesses);
        prevGuesses += guess;

        // Update and store the unsolved
        unsolved = updateUnsolved(phrase, unsolved, guess);

        string unsolvedcopy = unsolved;

        cout << "Guessed so far: " << prevGuesses << endl;

        // Create a copy to turn phrase into lowercase to check guesses
        string copycase = "";
        for (int i = 0; i < phrase.size(); i++)
        {
            copycase += tolower(phrase[i]);
        }

        // If the guess does not exist in phrase, subtract 1 from chances
        if (phrase.find(guess) == string::npos
                && copycase.find(guess) == string::npos )
        {
            chances--;
        }



        // Output number of chances left
        cout << "Wrong guesses left: " << chances << endl;


        cout << updateUnsolved(phrase, unsolved, guess) << endl;
        cout << endl;


    }
    // As long as chances > 0 and dashes still exist in unsolved
    while ((chances > 0) && (unsolved.find('-') != string::npos));

    // Output win or loss
    if (chances == 0)
    {
        cout << "You lost" << endl;
    };

    if (unsolved.find('-') == string::npos)
    {
        cout << "Congratulations!! You won!" << endl;
    };


}
