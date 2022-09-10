//https://codeforces.com/contest/1691/problem/A
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while(x--)
    {
        int y;
        cin >> y;
        int arr[y];
        int odd=0,even=0;
        for(int i=0; i<y;i++){
            cin >> arr[i];
            if(arr[i]%2==0) even++;
            else odd++;
        }
        if(odd<even) cout << odd << endl;
        else cout << even << endl;
    }
    return 0;
}
