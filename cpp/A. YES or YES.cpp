#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int testCasesNum;
    char arr[3];
    cin >> testCasesNum;
    while(testCasesNum--){
        for(int i = 0 ; i < 3 ; i++)
        cin >> arr[i];
        if(toupper(arr[0]) == 'Y' && toupper(arr[1]) == 'E' && toupper(arr[2])=='S')
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

}