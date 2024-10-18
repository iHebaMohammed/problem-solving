#include <bits/stdc++.h>
using namespace std;


int main()
{
    short column = 0;
    short row = 0;
    short arr[5][5];
    int counter = 0;
    for(short i = 0 ; i < 5 ; i++)
    {
        for(short j = 0 ; j < 5 ; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j] == 1)
            {
                column = j;
                row = i;
            }
        }
    }
    if(row <= 2 && column <= 2){
        for(int i = column ; i < 2 ; i++)
        {
            counter++;
        }
        for(int i = row ; i < 2 ; i++)
        {
            counter++;
        }
    }else if (row >= 2 && column >= 2)
    {
        for(int i = column ; i > 2 ; i--)
        {
            counter++;
        }
        for(int i = row ; i > 2 ; i--)
        {
            counter++;
        }
    }else if(row <= 2 && column >=2){
        for(int i = column ; i > 2 ; i--)
        {
            counter++;
        }
        for(int i = row ; i < 2 ; i++)
        {
            counter++;
        }
    }else if(row >= 2 && column <=2){
        for(int i = column ; i < 2 ; i++)
        {
            counter++;
        }
        for(int i = row ; i > 2 ; i--)
        {
            counter++;
        }
    }
    cout << counter << endl;

}