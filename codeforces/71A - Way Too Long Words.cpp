//https://codeforces.com/contest/71/problem/A
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while(x--)
    {
        string s;
        cin >> s;
        int z = s.size();
        if(z<=10) cout << s<< endl;
        else cout << s[0] << z-2 << s[z-1]<<endl;
    }
    return 0;
}
