//https://codeforces.com/contest/1047/problem/B
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x; cin >> x;
    int arr[x][2], s=0;
    for(int i=0;i<x;i++)
    {
        cin >> arr[i][0] >> arr[i][1];
        s = max (s,arr[i][0] + arr[i][1]);
    }
    cout << s << endl;
    return 0;
}
