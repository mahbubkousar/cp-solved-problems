//https://codeforces.com/contest/25/problem/A
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int i,n,ec=0,oc=0,counter=0;
 
    cin >> n;
    int arr[n];
 
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            ec++;
        else
            oc++;
    }
    if(ec>oc)
    {
        for(i=0;i<n;i++)
        {
            if(arr[i]%2!=0)
            {
                counter = i+1;
                break;
            }
        }
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                counter = i+1;
                break;
            }
        }
    }
    cout << counter<<endl;
    return 0;
}
