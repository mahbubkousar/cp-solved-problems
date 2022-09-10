//https://codeforces.com/contest/1701/problem/A
//Mahbub Kousar
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >>x;
    while(x--)
    {
        int y[4];
        for(int j=0;j<4;j++)
        {
            cin >> y[j];
        }
        if(y[0]+y[1]+y[2]+y[3] == 0)
            cout << 0<< endl;
        else if (y[0]+y[1]+y[2]+y[3] == 1)
            cout << 1<< endl;
        else if (y[0]+y[1]+y[2]+y[3] == 2)
            cout << 1<< endl;
         else if (y[0]+y[1]+y[2]+y[3] == 3)
            cout << 1<< endl;
            else if (y[0]+y[1]+y[2]+y[3] == 4)
            cout << 2<< endl;
    }
    return 0;
}
