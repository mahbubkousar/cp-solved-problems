//https://codeforces.com/contest/1690/problem/A
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while(x--)
    {
        int a,b,c,n;
        cin >> n;
        a = n/3;
        c = n/3;
        b = n-(a+c);
        while(a<=c){
            a++;
            c--;
        }
        while(a>=b)
        {
            a--;
            b++;
        }
        while(1)
        {
            if(a<b-1 && c>1)
            {
                a++;
                c--;
                continue;
            }
            else break;
        }
 
 
        cout << a << " " << b << " " << c<< endl;
 
    }
 
    return 0;
}
