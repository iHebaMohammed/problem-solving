#include <bits/stdc++.h>
#include <string.h>
using namespace std;


int main()
{
    int location;
    cin >> location;
    int counter = 0 ;
    while(location){
        if(location >= 5){
            location = location -5;
            counter++;
        }
        else if(location == 4){
            location = location - 4;
            counter++;
        }
        else if(location == 3){
            location = location - 3;
            counter++;
        }
        else if(location == 2){
            location = location -2;
            counter++;
        }else if(location == 1){
            location = location -1;
            counter++;
        }
    }
    cout << counter << "\n";
}