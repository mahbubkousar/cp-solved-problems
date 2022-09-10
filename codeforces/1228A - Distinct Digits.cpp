//https://codeforces.com/contest/1228/problem/A
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >>b;
int cntt=0;
    for(int i=a;i<=b;i++)
    {
        int cnt=0;
        string n;
        stringstream ss;
        ss << i;
        ss >> n;
        sort(n.begin(),n.end());
 
        for(int j=0;j<n.size()-1;j++)
        {
            if(n[j]==n[j+1]) cnt++;
        }
 
        if(cnt==0) {
            cout << i << endl;
            cntt=1;
            break;
        }
 
    }
    if(cntt==0) cout << "-1"<< endl;
    return 0;
}
