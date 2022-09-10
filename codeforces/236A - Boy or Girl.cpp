//https://codeforces.com/contest/236/problem/A
//Mahbub Kousar
#include<bits/stdc++.h>
using namespace std;
int temp(const char *a);
 
int main()
{
    char x[200];
    cin >> x;
    int y = temp(x);
    if(y%2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;
    return 0;
}
int temp(const char *a){
     int c_arr[200] = {0};
     int i, count = 0;
     for( i = 0; a[i] != '\0'; i++){
         c_arr[a[i] - 'a'] = 1;
     }
     for( i = 0; i < 200; i++){
         count += c_arr[i];
     }
     return count;
}
