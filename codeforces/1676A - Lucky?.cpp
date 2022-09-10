//https://codeforces.com/contest/1676/problem/A
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    int s=0,m;
    while(n>0)
    {
        m=n%10;
        s=s+m;
        n=n/10;
    }
    return s;
}
int main()
{
    int x;
    cin >> x;
    while(x--)
    {
        int n;
        cin >> n;
        int a=n%1000;
        int b=n/1000;
        if(sum(a)==sum(b)) cout << "YES"<<endl;
        else cout << "NO" << endl;
    }
    return 0;
}
