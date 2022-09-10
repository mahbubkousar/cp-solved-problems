//https://codeforces.com/contest/69/problem/A
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n[t][3];
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin >> n[i][j];
        }
    }
    int n1=0,n2=0,n3=0;
    for(int k=0;k<t;k++)
    {
 
        n1+=n[k][0];
        n2+=n[k][1];
        n3+=n[k][2];
    }
    if(n1==0 && n2==0 && n3==0)
        cout <<"YES"<<endl;
    else cout << "NO" << endl;
 
    return 0;
}
