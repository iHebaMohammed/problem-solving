#include <bits/stdc++.h>

using namespace std;


int main()
{
    short n , k;
    short counter = 0;
    cin >> n >> k;
    short arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == 0)
            break;
        else if(arr[i] >= arr[k-1])
            counter++;
    }
    cout << counter << endl;
}