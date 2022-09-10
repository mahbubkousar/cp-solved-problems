//https://codeforces.com/contest/151/problem/A
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int m,cd,a;
    m=(k*l)/nl;
    a=p/np;
    cd=c*d;
    int x,y;
    x = min (m,cd);
    y = min(x,a);
    cout<<y/n<<endl;
    return 0;
}
