#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int testCases;
    cin >> testCases;
    int i = testCases;
    while(i--)
    {
        int rating;
        cin >> rating;
        if(rating >= -5000 && rating <= 5000)
        {
            if(rating <=1399)
                cout << "Division 4" << endl;
            else if(rating >=1400 && rating <= 1599)
                cout << "Division 3" << endl;
            else if(rating >= 1600 && rating <= 1899)
                cout << "Division 2" << endl;
            else if(rating >=1900)
                cout << "Division 1" << endl;
        }
    }

}