#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    short numberOfTestCases;
    cin >> numberOfTestCases;
    string str;
    while(numberOfTestCases--)
    {
        cin >> str;
        if(str.size() > 10){
            cout << str[0] << str.size()-2 << str[str.size()-1] << endl;
        }
        else
            cout << str << endl;
    }
}