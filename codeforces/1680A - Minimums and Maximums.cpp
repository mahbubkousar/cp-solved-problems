//https://codeforces.com/contest/1680/problem/A
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while(x--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(a>=c && a<=d) cout << a <<endl;
        else if(c>=a && c<=b) cout << c << endl;
        else cout << a+c << endl;
    }
 
    return 0;
}
