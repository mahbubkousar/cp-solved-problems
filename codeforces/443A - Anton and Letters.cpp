//https://codeforces.com/contest/443/problem/A
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
   
    int arr[26]={0};
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            arr[s[i]-'a']++;
        }
    }
    int counter = 0;
    for(int i=0;i<26;i++)
    {
        if(arr[i]>=1) counter++;
    }
    cout << counter << endl;
 
    return 0;
}
