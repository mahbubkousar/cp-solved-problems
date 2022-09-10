//https://codeforces.com/contest/1669/problem/B
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        int temp=v[0],cnt=1;
        for(int i=1;i<n;i++)
        {
            if(v[i]==temp){
                cnt++;
            }
            else {
                temp=v[i];
                cnt=1;
            }
            if(cnt==3)
            {
                cout << v[i] << endl;
                break;
            }
 
        } if(cnt<3) cout << -1 << endl;
    }
 
    return 0;
}
