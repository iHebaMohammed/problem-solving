#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int numberOfStones;
    int counter = 0;
    cin >> numberOfStones;
    char arrOfStones[numberOfStones];
    for(int i = 0 ; i < numberOfStones ; i++){
        cin >> arrOfStones[i];
    }
    for(int i = 0 ; i < numberOfStones ; i++){
        if(arrOfStones[i] == arrOfStones[i+1]){
            counter++;
        }
    }
    cout << counter << endl;
}