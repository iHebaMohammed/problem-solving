#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    float n , m;
    cin >> m >> n;
    float num1 = (m/2) * (n/1);
    float num2 = (m/1) * (n/2);
    if(num1 >= num2)
        cout << (int)num1 << endl;
    else
        cout << (int)num2 << endl;

}