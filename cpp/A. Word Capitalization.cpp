#include <bits/stdc++.h>
#include <string.h>
using namespace std;


int main()
{
    string str;
    cin >> str;
    char c = toupper(str[0]);
    str[0] = c;
    cout << str;
}