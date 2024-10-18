#include <bits/stdc++.h>
#include <string.h>
using namespace std;


int main()
{
    string theInput;
    cin >> theInput;
    bool flag = false;
    int counter =1;
    for(int i =0 ; i < theInput.size() ; i++){
        if(theInput[i] == theInput[i+1]){
            counter++;
            if(counter >= 7){
                flag = true ;
            }
        }
        else{
            counter = 1;
        }
    }

    if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}