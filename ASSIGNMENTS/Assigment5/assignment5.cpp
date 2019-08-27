/******************************************************************************
*  AUTHOR       : Laura Sun
*  Assignment #5: Cipher Specification
*  CLASS        : CS002
*  SECTION      : MTTHF: 7:00a –12p
*  Due Date     : 6/30/19
******************************************************************************/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

/******************************************************************************
* Cipher
*______________________________________________________________________________
*
* This program can decrypt and encrypt a single word that is entered by the
* user.
*
*______________________________________________________________________________
*
* Inputs: selection for decryption or encryption, a mapping system,
* 			and word
* Outputs: an encrypted or decrypted word
*
******************************************************************************/

int main()
{

    // Declarations
    string method;      // input
    string map;         // input
    string word;        // input
    string decryp;      // output
    string encryp;      // output

    // mappers
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    string defmap = "zyxwvutsrqponmlkjihgfedcba";

    // Inputs
    cout << "What is the method (encryption or decryption)? " << endl;
    cin >> method;

    // grabbing lengths
    // int wordlength = word.size();
    // int alphalength = alpha.size();

    // processing
    if (method == "encryption")
    {
        cout << "What is the translation map (type 'default' to use default): " << endl;
        cin >> map;

        if (map == "default")
        {
            cout << "What is the single word to translate: " << endl;
            cin >> word;

			// assign a number to each letter in word
            for(int x = 0; x < word.size(); x++)
            {
                char letter = word[x];
                int index = 0;
				// match the index to the alphabet
                for(int x = 0; x < alpha.size(); x++)
                {
                  if(alpha[x] == letter)
                  {
                    index = x;

                  }
                }

                // pull the letters and put it in a string
                char enLetter = defmap[index];
                encryp += enLetter;
            }

            cout << "Encrypted word: ";
            cout << encryp << endl;
        }

		// ensures custom mapper has 26 letters/numbers
        else if (map.size() == 26)
        {
            cout << "What is the single word to translate: " << endl;
            cin >> word;

            for(int x = 0; x < word.size(); x++)
            {
                char letter = word[x];
                int index = 0;
                for(int x = 0; x < alpha.size(); x++)
                {
                  if(alpha[x] == letter)
                  {
                    index = x;

                  }
                }

                char enLetter = map[index];
                encryp += enLetter;
            }

            cout << "Encrypted word: ";
            cout << encryp << endl;
        }
        else
        {
            cout << "Error: invalid translation map size. " << endl;
        }

    }

	// to do decryption, i just switched alpha with mapper
    else if (method == "decryption")
    {
        cout << "What is the translation map (type 'default' to use default): " << endl;
        cin >> map;

       if (map == "default")
        {
            cout << "What is the single word to translate: " << endl;
            cin >> word;

            for(int x = 0; x < word.size(); x++)
            {
                char letter = word[x];
                int index = 0;
                for(int x = 0; x < alpha.size(); x++)
                {
                  if(defmap[x] == letter)
                  {
                    index = x;

                  }
                }

                char enLetter = alpha[index];
                decryp += enLetter;
            }

            cout << "Decrypted word: ";
            cout << decryp << endl;
        }

        else if (map.size() == 26)
        {
            cout << "What is the single word to translate: " << endl;
            cin >> word;

            for(int x = 0; x < word.size(); x++)
            {
                char letter = word[x];
                int index = 0;
                for(int x = 0; x < alpha.size(); x++)
                {
                  if(map[x] == letter)
                  {
                    index = x;

                  }
                }

                char enLetter = alpha[index];
                decryp += enLetter;
            }

            cout << "Decrypted word: ";
            cout << decryp << endl;
        }
        else
        {
            cout << "Error: invalid translation map size. " << endl;
        }
    }
    else
    {
        cout << "Error: invalid method choice. " << endl;

    }



  return 0;
}
