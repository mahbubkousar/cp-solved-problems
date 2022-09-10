//https://codeforces.com/contest/1335/problem/A
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for(int i=0;i<a;i++)
    {
        int x;
        cin >> x;
        if(x==0 || x==1 | x==2)
            cout << "0" << endl;
        else if(x==3)
            cout << "1" << endl;
        else
            cout << (x-x/2)-1 << endl;
    }
    return 0;
}
