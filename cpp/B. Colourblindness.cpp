#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    short numOfTestCases;
    cin >> numOfTestCases;
    bool flag;
    while(numOfTestCases--)
    {
        flag = false;
        short numOfColumns;
        cin >> numOfColumns;
        string str1 , str2;
        cin >> str1 >> str2;
        for(int i = 0 ; i < numOfColumns ; i++)
        {
            if((str1[i] == 'R' && str2[i] == 'R') ||  (str1[i] == 'B' && str2[i] == 'B' ) || (str1[i] == 'G' && str2[i] == 'G' ) || (str1[i] == 'G' && str2[i] == 'B' ) || (str1[i] == 'B' && str2[i] == 'G' ))
            {
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}