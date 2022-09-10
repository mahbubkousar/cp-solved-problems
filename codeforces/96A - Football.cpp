//https://codeforces.com/contest/96/problem/A
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    int c1=0,c2=0;
    cin >> s;
    for(int i=0;i<s.length();i++) {
        if(s[i]=='1') {
            c1++;c2=0;
        }
        else if(s[i]=='0') {
            c2++;c1=0;
        }
        if(c1==7 || c2==7) {
            cout << "YES" << endl;
            return 0;
        }
    }
    if(c1!=7 || c2!=7)
    cout << "NO" << endl;
    return 0;
}
