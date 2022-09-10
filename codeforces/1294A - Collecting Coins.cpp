//https://codeforces.com/contest/1294/problem/A
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int a[3],n;
    while(x--)
    {
        cin >> a[0] >> a[1] >> a[2] >> n;
        sort(a,a+3);
    int i=(n-(a[2]-a[1])-(a[2]-a[0]));
 
    if(i>=0 && i%3==0) cout << "YES" << endl;
    else cout << "NO" << endl;
    }
    return 0;
}
