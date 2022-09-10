//https://codeforces.com/contest/1369/problem/A
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while(x--)
    {
        int a;
        cin >> a;
        if(a>3 && a%4==0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
 
    return 0;
}
