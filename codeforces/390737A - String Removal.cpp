//https://codeforces.com/gym/390737/problem/A
//Mahbub Kousar
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while(x--)
    {
        string s;
        cin >> s;
        int a = s.length();
        int aa=0,bb=0;
        if (a<2) cout << "NO" << endl;
        else {
          for(int i =0;i<a;i++) {
        if (s[i] =='a') aa++;
        else if (s[i]=='b') bb++;
        }
        if (aa==bb) cout << "YES" << endl;
        else cout << "NO" << endl;
        }
    }
    
    return 0;
}
