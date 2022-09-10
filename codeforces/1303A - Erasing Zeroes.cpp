//https://codeforces.com/contest/1303/problem/A
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    while(x--)
    {
        int k,j,l,cnt=0;
        string num;
        cin >> num;
        for(j=0;j<num.length();j++){
            if(num[j]=='1')
                break;
        }
        for(k=num.length();k>=j;k--){
            if(num[k]=='1')
                break;
        }
        for(l=j;l<k;l++){
            if(num[l]=='0')
                cnt++;
        }
        cout << cnt << endl;
 
    }
    return 0;
}
