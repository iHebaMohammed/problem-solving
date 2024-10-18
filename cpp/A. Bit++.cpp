#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    short testCases;
    cin >> testCases;
    int counter = 0;
    while(testCases--){
        string satement;
        cin >> satement;
        if(satement == "X++" || satement == "++X")
            counter++;
        else if(satement == "X--" || satement == "--X")
            counter--;
    }
    cout << counter << endl;

}