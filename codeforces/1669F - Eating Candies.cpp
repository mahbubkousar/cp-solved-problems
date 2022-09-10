//https://codeforces.com/contest/1669/problem/F
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while(x--)
    {
        int n;
        cin >> n;
        int c[n];
        for(int i=0;i<n;i++)
        {
            cin >> c[i];
        }
        int cntleft=0,cntright=n-1;
        int lsum=0,rsum=0,total=0;
 
        while(cntleft <= cntright)
        {
            if(lsum<rsum){
                lsum += c[cntleft];
                cntleft++;
            }
            else {
                rsum += c[cntright];
                cntright--;
 
            }
            if(lsum == rsum) total=cntleft+n-cntright-1;
        }
        cout << total << endl;
 
    }
 
    return 0;
}
