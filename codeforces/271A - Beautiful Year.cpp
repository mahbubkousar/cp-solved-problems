//https://codeforces.com/contest/271/problem/A
//Mashbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n++){
        string s;
        stringstream ss;
        ss << n;
        ss >> s;
        sort(s.begin(),s.end());
        if(s[0]!=s[1] && s[1]!=s[2] && s[2]!=s[3])
        break;
    }
    cout << n<<endl;
 
    return 0;
}
