//https://codeforces.com/contest/1669/problem/A
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while(x--) {
        int a;
        cin >> a;
        if(a>=1900) cout << "Division 1" << endl;
        else if(a>=1600 && a<=1899) cout << "Division 2" << endl;
        else if(a>=1400 && a<=1599) cout << "Division 3" << endl;
 
        else if(a<=1399) cout << "Division 4" << endl;
    }
 
    return 0;
}