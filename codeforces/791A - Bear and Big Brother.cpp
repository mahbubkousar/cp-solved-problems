//https://codeforces.com/contest/791/problem/A
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a>>b;
    int i=0;
    while(1){
        i++;
        a= a*3;
        b=b*2;
        if(a>b) break;
    }
    cout << i<<endl;
 
    return 0;
}
