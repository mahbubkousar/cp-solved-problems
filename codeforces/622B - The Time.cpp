//https://codeforces.com/contest/622/problem/B
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int h=(s[0]-'0')*10 + (s[1]-'0'),m= (s[3]-'0')*10 + (s[4]-'0');
    int t; cin >> t;
    int mo=m+t,ho=h;
    while(mo>59){
        mo=mo-60;
        ho++;
    }
    while(ho>23){
        ho=ho-24;
    }
    if(ho<10 && mo<10)
    cout << '0'<<ho<<":"<<'0'<<mo<<endl;
    else if(ho<10 && mo>9)
    cout << '0'<<ho<<":"<<mo<<endl;
    else if(ho>9 && mo<10)
    cout <<ho<<":"<<'0'<<mo<<endl;
    else if(!(ho<10 && mo<10))
    cout <<ho<<":"<<mo<<endl;
    return 0;
}
