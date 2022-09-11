//https://codeforces.com/problemset/problem/59/A
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int l=0,u=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a' && s[i]<='z') l++;
        else if(s[i]>='A' && s[i]<='Z') u++;
    }
    if(l>=u)
    {
        for(int i=0;i<s.length();i++)
        {
            s[i] = tolower(s[i]);
            cout <<s[i];
        }
    }
    else if(l<u)
    {
        for(int i=0;i<s.length();i++)
        {
            s[i] = toupper(s[i]);
            cout <<s[i];
        }
    }
    return 0;
}
