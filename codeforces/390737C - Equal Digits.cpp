//https://codeforces.com/gym/390737/problem/C
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y,z;
    cin >> x;
    string s,s1;
    stringstream ss;
    ss << x;
    ss >> s;
    for(int i=0;i<s.length();i++)
    {
        s[i]=s[0];
    }
 
    stringstream ss1;
    ss1 << s;
    ss1 >> y;
 
    if(y>=x) cout << y << endl;
    else {
            s[0]=s[0]+1;
        for(int i=0;i<s.length();i++)
        {
            s[i]=s[0];
        }
        stringstream ss2;
        ss2 << s;
        ss2 >> z;
        cout << z << endl;
 
    }
    return 0;
}
