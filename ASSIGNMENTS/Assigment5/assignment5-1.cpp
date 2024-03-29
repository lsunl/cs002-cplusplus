/******************************************************************************
*  AUTHOR       : Laura Sun
*  Assignment #5: Cipher Specification
*  CLASS        : CS002
*  SECTION      : MTTHF: 7:00a –12p
*  Due Date     : 6/30/19
******************************************************************************/
#include <iostream>
#include <string>
// #include <cmath>
#include <stdio.h>
#include <ctype.h>

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
    string result;      // output
    string valid;       // word validity (true/false)
    string mapper;
    string coder;
    string coder2;

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
    if (method == "encryption" || method == "decryption")
    {
        cout << "What is the translation map (type 'default' to use default): "
         << endl;
        cin >> map;

        if (map == "default" || map.size() == 26)
        {
            cout << "What is the single word to translate: " << endl;
            cin >> word;

            // checker of words
            for(int x = 0; x < word.size(); x++)
            {
              size_t found = defmap.find(word.at(x));
              if (found == string::npos)
              {
                valid = "False";
                break;
              }
              else
              {
                if (isupper(word.at(x)))
                {
                    valid = "False";
                    break;
                }
                else
                {
                    valid = "True";
                }
              }
            }

            // choose mapper
            if (map == "default")
            {
                mapper = defmap;
            }
            else
            {
                mapper = map;
            }


            if (valid == "True")
            {
                //choose code
                if (method == "encryption")
                {
                    coder = mapper;
                    coder2 = alpha;
                    cout << "Encrypted word: ";
                }
                else if (method == "decryption")
                {
                    coder = alpha;
                    coder2 = mapper;
                    cout << "Decrypted word: ";
                }

            // assign a number to each letter in word
              for(int x = 0; x < word.size(); x++)
              {
                  char letter = word.at(x);
                  int index = 0;
                  // match the index to the alphabet
                  for(int x = 0; x < alpha.size(); x++)
                  {
                    if(coder2.at(x) == letter)
                    {
                      index = x;

                    }
                  }

                  // pull the letters and put it in a string
                  char enLetter = coder.at(index);
                  result += enLetter;
              }

              cout << result << endl;
            }
            else
            {
              cout << "Error: "<< method << " cannot be performed.\n";
            }
        }

        else
        {
            cout << "Error: invalid translation map size.\n";
        }

    }

    else
    {
        cout << "Error: invalid method choice. \n";

    }


  return 0;
}
