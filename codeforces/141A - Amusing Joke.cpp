//https://codeforces.com/contest/141/problem/A
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string t1,t2,t3,sum;
    cin>>t1>>t2>>t3;
 
    sum = t1 + t2;
 
 
    sort(sum.begin(),sum.end());
    sort(t3.begin(),t3.end());
 
    if(t3!=sum)
        cout << "NO\n";
    else cout << "YES\n";
    return 0;
}
