/**************************************************************************
 * Author    		:  Laura Sun
 * Lab 11          	:  Intro to 2D Arrays
 * CLASS     		:  CS 002
 * SECTION   		:  MTRF: 7a - 12p
 * Due Date 		:  7/11/19
 *************************************************************************/

#include<iostream>
#include<istream>
#include<string>
//#include<stdio.h>

using namespace std;
/**************************************************************************
 * INTRO TO 2D ARRAYS
 * ------------------------------------------------------------------------
 * This program
 * ------------------------------------------------------------------------
 * Inputs:
 * Outputs:
 *
 * ************************************************************************/

const int M = 2;
const int N = 3;
const int Q = 2;
const int R = 3;
const int S = 3;

void matrixAdd( const int a[][N], const int b[][N], int sum[][N] );

void matrixMult(const int a[][R], const int b[][S], int product[][S]);


int main()
{
    int ex;
    cout << "Which exercise? ";
    cin >> ex;

    if (ex == 1)
    {
        int a[M][N];
        int b[M][N];
        int sum[M][N];
        cout << "Enter Matrix A: " <<endl;
        for (int i=0; i<M; i++)
        {
            for (int j=0; j<N; j++)
                cin>>a[i][j];
            };

        cout << "Enter Matrix B: " <<endl;
        for (int i=0; i<M; i++)
        {
           for (int j=0; j<N; j++)
            cin>>b[i][j];
        };

        matrixAdd(a, b, sum);

    }

    else
    {
        int a[Q][R];
        int b[R][S];
        int product[Q][S];
        cout << "Enter Matrix A: " <<endl;
        for (int i=0; i<Q; i++)
        {
            for (int j=0; j<R; j++)
                cin>>a[i][j];
            };

        cout << "Enter Matrix B: " <<endl;
        for (int i=0; i<R; i++)
        {
           for (int j=0; j<S; j++)
            cin>>b[i][j];
        };

        matrixMult(a, b, product);

    }
}


void matrixAdd( const int a[][N], const int b[][N], int sum[][N] )
{
    int count = 0;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "Res: " << endl;
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
        {
            cout << sum[i][j] << " ";
            count++;
            if (count == 3)
            {
                cout << endl;
            }

        }


}


void matrixMult(const int a[][R], const int b[][S], int product[][S])
{
   int count = 0;
   for (int i = 0; i < Q; i++)
   {
       for (int j = 0; j < S; j++)
       {
           product[i][j] = 0;
           for (int k = 0; k < R; k++)
           {
               product[i][j] = a[i][j] * b[i][j];
           }
       }
   }


   cout << "Res: " << endl;
   for (int i = 0; i < Q; i++)
   {
       for (int j = 0; j < R; j++)
       {
           cout << product[i][j] << " ";
           count++;
           if (count == 3)
           {
               cout << endl;
           }

        }
    }
}



