//https://codeforces.com/contest/1679/problem/A
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int x;
    cin >> x;
    while(x--)
    {
        long long n,max=0,min=0;
        cin >> n;
        if(n==2 || n%2==1)
            cout << "-1" << endl;
            else {
                n = n/2;
                long long temp;
                min = n/2;
                temp = n/3;
                if(n%3==0) max = temp;
                else if(n%3==1) max = temp - 1 +2;
                else if(n%3==2) max = temp + 1;
                cout << max << " " << min << endl;
            }
 
    }
 
    return 0;
}
