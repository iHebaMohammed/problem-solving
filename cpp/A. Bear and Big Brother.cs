#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a , b;
    cin >> a >> b;
    int counter = 1 ;
    int aAfterYaer = a * 3;
    int bAfterYaer =b * 2;
    while(true){
        if(aAfterYaer > bAfterYaer){
        break;
        }
        else{
            aAfterYaer = aAfterYaer * 3;
            bAfterYaer = bAfterYaer *2;
            counter++;
        }


    }
    cout << counter;
}