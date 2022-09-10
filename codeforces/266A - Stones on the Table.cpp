//https://codeforces.com/contest/266/problem/A
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    string s;
    cin >> s;
    int cnt=0;
    for(int i=0; i<x-1; i++)
        if(s[i]==s[i+1]) cnt++;
    cout << cnt<< endl;
    return 0;
}
