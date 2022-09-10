//https://codeforces.com/contest/231/problem/A
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,cnt=0;
    cin >> x;
    while(x--){
        int a,b,c;
        cin >> a>>b>>c;
        if(a+b+c >= 2) cnt++;
    }
    cout << cnt<< endl;
    return 0;
}
