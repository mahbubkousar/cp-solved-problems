//https://codeforces.com/contest/1703/problem/B
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while(x--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a=n;
        sort(s.begin(), s.end());
        int b = unique(s.begin(), s.end()) - s.begin();
        cout << a+b << endl;
    }
    return 0;
}
