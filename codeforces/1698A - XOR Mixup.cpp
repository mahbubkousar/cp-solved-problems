//https://codeforces.com/contest/1698/problem/A
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x; cin >> x;
    while(x--)
    {
        int n;
        cin>> n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
            cin >> a[i];
 
        cout << a[0]<<endl;
    }
    return 0;
}
