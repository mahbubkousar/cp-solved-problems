//https://codeforces.com/contest/110/problem/A
//Mahbub Kousar
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string text;
    cin >> text;
    int i=0;
    int count=0;

    while(text[i]>='0' && text[i]<='9' && text.size())
    {
 
        if(text[i]=='4' || text[i]=='7')
            count++;
        i++;
    }
 
    if(count == 4 || count == 7) cout << "YES" << endl;
    else cout << "NO" << endl;
 
    return 0;
}
