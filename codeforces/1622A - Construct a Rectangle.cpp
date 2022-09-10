//https://codeforces.com/contest/1622/problem/A
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector<int>a(3);
        cin >> a[0] >> a[1] >> a[2];
        sort(a.begin(),a.end());
        if(a[0]==a[1] && a[2]%2==0)
            cout << "YES" << endl;
        else if(a[1]==a[2] && a[0]%2==0)
            cout << "YES" << endl;
        else if(a[0]+a[1]==a[2])
            cout << "YES" << endl;
        else cout << "NO" << endl;
 
    }
 
    return 0;
}
