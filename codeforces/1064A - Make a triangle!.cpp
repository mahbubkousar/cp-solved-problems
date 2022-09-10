//https://codeforces.com/contest/1064/problem/A
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v(3);
    cin >> v[0] >> v[1] >> v[2];
    sort(v.begin(),v.end());
    if(v[0]+v[1]>v[2])
        cout << 0 <<endl;
    else {
        cout<<v[2]+1-v[1]-v[0]<< endl;
    }
 
    return 0;
}
