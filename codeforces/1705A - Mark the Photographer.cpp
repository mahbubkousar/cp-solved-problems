//https://codeforces.com/contest/1705/problem/A
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while(x--) {
        int a,b;
        cin >> a >> b;
        vector<int>v(2*a);
        for(int i=0;i<2*a;i++) {
            cin >> v[i];
        }
        int cnt =0;
        sort(v.begin(),v.end());
        for(int i=v.size(); i>a;i--){
            if(v[i-1]-v[i-a-1]<b) {
                cout << "NO" << endl;
                break;
            }
            else cnt++;
        }
        if(cnt==a) cout << "YES" << endl;
    }
    return 0;
}
