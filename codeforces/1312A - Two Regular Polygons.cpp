//https://codeforces.com/contest/1312/problem/A
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while(x--)
    {
        int a,b;
        cin >> a >> b;
        if(a%b==0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
 
    return 0;
}
