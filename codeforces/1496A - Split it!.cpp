//https://codeforces.com/contest/1496/problem/A
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while(x--)
    {
        int n,k;
        cin >> n>>k;
        string s;
        cin >> s;
        if(n <= 2*k) cout << "NO" << endl;
        else {
            int cnt = 0;
            for(int i=0;i<k;i++){
               if(s[i]!=s[n-i-1]) cnt++;
               //cout << s[i]<<" "<< s[n-i-1]<<endl;
            }
            if(cnt == 0)
                cout <<"YES"<<endl;
                else cout << "NO" << endl;
 
        }
 
    }
 
    return 0;
}
