//https://codeforces.com/contest/1702/problem/A
//Mahbub Kousar
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // Write C++ code here
    int x;
    cin >> x;
    while(x--) {
        long a;
        cin>> a;
        int n=0;
        if (a==1) cout << "0" <<endl;
        else {
        while(pow(10,n)<=a) {
        if (pow(10,n)==a) cout << "0" << endl;
        else
         {
        if(pow(10,n)<a && pow(10,n+1)>a) 
        { 
       long b= pow(10,n);
        cout << a-b << endl;
        }
        
        }
        n++;
        }
        }
    }
    
 
    return 0;
}
