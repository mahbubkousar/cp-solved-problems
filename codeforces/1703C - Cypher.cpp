//https://codeforces.com/contest/1703/problem/C
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
 
        int wheel[n];
        for(int i=0;i<n;i++)
        {
            cin >> wheel[i];
        }
        int m[n];
        string s[n];
        for(int i=0;i<n;i++)
        {
            cin >> m[i] >> s[i];
        }
 
 
        for(int i=0;i<n;i++)
        {
            const char *str = s[i].c_str();
            for(int j=0;j<m[i];j++)
            {
                if(str[j]=='U'){
                    if(wheel[i]==0)
                        wheel[i]=9;
                    else wheel[i]--;
                }
                else if(str[j]=='D'){
                    if(wheel[i]==9)
                        wheel[i]=0;
                    else wheel[i]++;
                }
            }
 
        }
        for(int k=0;k<n;k++)
        {
            cout << wheel[k] << " ";
        }
        cout << endl;
    }
    return 0;
}
