//https://codeforces.com/contest/1399/problem/A
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int x;
    cin >> x;
    while(x--)
    {
        int n,no=0;
        cin >> n;
        int v[n];
        for(int i=0;i<n;i++) cin >> v[i];
        sort(v,v+n);
        for(int j=0;j<n-1;j++)
        {
            if(v[j+1]-v[j] > 1) no++;
        }
        if(no==0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
 
    return 0;
}
