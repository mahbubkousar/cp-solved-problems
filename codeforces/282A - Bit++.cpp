//https://codeforces.com/contest/282/problem/A
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,n=0;
    cin >> x;
    while(x--)
    {
        string s;
        cin >> s;
        if(s=="X++") n++;
        else if (s=="++X") ++n;
        else if (s=="X--") n--;
        else if (s=="--X") --n;
    }
    cout << n << endl;
    return 0;
}
