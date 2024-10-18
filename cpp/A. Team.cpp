#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    short numberOfQuistions;
    cin >> numberOfQuistions;
    short playerOneAnswer , playerTwoAnswer , playerThreeAnswer;
    short numOfImplemented = 0;
    while(numberOfQuistions--)
    {
        cin >> playerOneAnswer >> playerTwoAnswer >> playerThreeAnswer;
        if((playerOneAnswer == 1 && playerTwoAnswer == 1) || (playerOneAnswer == 1 && playerThreeAnswer == 1) || (playerThreeAnswer == 1 && playerTwoAnswer == 1))
        {
            numOfImplemented++;
        }
    }
    cout << numOfImplemented << endl;
}