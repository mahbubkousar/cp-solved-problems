//https://codeforces.com/gym/103647/problem/B
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n>>k;
    int cnt=0,c=0;
    for(int i=k;i<=n;i+=k)
    {
        cnt++;
 
        if(i%(k*k)==0) c++;
    }
    cout << cnt-c << endl;
    return 0;
}
